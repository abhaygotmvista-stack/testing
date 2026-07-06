#include <stdio.h>
#include "student.h"

int main()
{
int choice;
    while (1)
    {
        printf("\n====== Student Management System ======\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
