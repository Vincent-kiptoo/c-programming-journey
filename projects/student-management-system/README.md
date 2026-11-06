# Student Grade Management System

A small C program that displays student marks and averages for Mathematics,
English, and Structured Programming.

The program calculates each student's average and the class average, identifies
the top-performing student, counts students who meet the passing threshold, and
lists passing students from highest average to lowest. The current passing
threshold is 60.

The sample data contains five students and three subjects. Compile and run with
a C compiler, for example:

```sh
gcc main.c -o student-management-system
./student-management-system
```

## Sample output

Running the program with the included sample data prints a student grade table,
class summary, and passing students ranked by average:

```text
STUDENT PERFORMANCE RECORDS

Student        Mathematics              English                  Structured Programming   Average
Vincent        78                       82                       91                       83.67
Swinton        65                       70                       73                       69.33
Kiptoo         45                       58                       62                       55.00
Chemelil       88                       92                       85                       88.33
Shevin         52                       49                       67                       56.00

Class average: 70.47

Top performing student is : Chemelil (average: 88.33)

Number of students with an average of atleast 60 is : 3

Students with an average of at least 60, highest to lowest:
Chemelil: 88.33
Vincent: 83.67
Swinton: 69.33
```
