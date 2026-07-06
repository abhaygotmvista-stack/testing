#ifndef STUDENT_H
#define STUDENT_H

typedef struct
{
    int id;
    char name[50];
    int age;
    float marks;
}Student;

void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

#endif
