#include <stdio.h>


#define STUDENT_COUNT 5
#define SUBJECT_COUNT 3
#define NAME_LENGTH 50

// FUNCTION PROTOTYPE
void displayStudentData(
    const char names[][NAME_LENGTH],
    const int marks[][SUBJECT_COUNT],
    const char subjects[][NAME_LENGTH],
    int student_count,
    int subject_count
);

float calculateStudentAverage(
    const int student_marks[SUBJECT_COUNT],
    int subject_count
);

float calculateClassAverage(
    const int marks[][SUBJECT_COUNT],
    int student_count,
    int subject_count
);


int main(void){

    // 1: INITIALIZE STUDENT NAMES
    const char names[STUDENT_COUNT][NAME_LENGTH] = {
        "Vincent",
        "Swinton",
        "Kiptoo",
        "Chemelil",
        "Shevin"
    };

    // 2: iNITIALIZE STUDENT MARKS
    const int marks[STUDENT_COUNT][SUBJECT_COUNT] = {
        {78, 82, 91},
        {65, 70, 73},
        {45, 58, 62},
        {88, 92, 85},
        {52, 49, 67}
    };


    // 3: INITIALIZE SUBJECT NAMES
    const char subjects[SUBJECT_COUNT][NAME_LENGTH] = {
        "Mathematics",
        "English",
        "Structured Programming"
    };

    // 4: CALL THE DISPLAY FUNCTION

    displayStudentData(names, marks, subjects, STUDENT_COUNT, SUBJECT_COUNT);

    printf("\nClass average: %.2f\n",
           calculateClassAverage(marks, STUDENT_COUNT, SUBJECT_COUNT));

    return 0;

}

// FUNCTION DEFINATION

void displayStudentData(
    const char names [][NAME_LENGTH],
    const int marks[][SUBJECT_COUNT],
    const char subjects[][NAME_LENGTH],
    int student_count,
    int subject_count
){
    printf("\nSTUDENT PERFORMANCE RECORDS\n\n");

    // DISPLAY TABLE HEADINGS
    printf("%-15s", "Student");

    for(int j = 0; j < subject_count; j++){
        printf("%-25s", subjects[j]);
    }
    printf("%-10s", "Average");

    printf("\n");

    for (int i = 0; i < student_count; i++){
        printf("%-15s", names[i]);

        for(int j = 0; j < subject_count; j++){
            printf("%-25d", marks[i][j]);
        }

        printf("%-10.2f", calculateStudentAverage(marks[i], subject_count));

        printf("\n");

    }
}

float calculateStudentAverage(
    const int student_marks[SUBJECT_COUNT],
    int subject_count
){
    int total = 0;

    for (int j = 0; j < subject_count; j++) {
        total += student_marks[j];
    }
    return (float) total / subject_count;
}

float calculateClassAverage(
    const int marks[][SUBJECT_COUNT],
    int student_count,
    int subject_count
){
    int total = 0;
    for (int i = 0; i < student_count; i++){
        for (int j = 0; j < subject_count; j++) {
            total += marks[i][j];
        }
    }

    return (float) total / (student_count * subject_count);
}
