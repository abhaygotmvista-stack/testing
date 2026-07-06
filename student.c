#include<stdio.h>
#include<string.h>
#include"student.h"

Student students[100];
int count = 0;

void addStudent()
{
    printf("Enter ID : ");
    scanf("%d",&students[count].id);

    printf("Enter Name : ");
    scanf("%s",students[count].name);

    printf("Enter Age : ");
    scanf("%d",&students[count].age);

    printf("Enter Marks : ");
    scanf("%f",&students[count].marks);

    count++;

    printf("Student Added Successfully\n");
}

void displayStudents()
{
    int i;

    if(count==0)
    {
        printf("No Students\n");
        return;
    }

    for(i=0;i<count;i++)
    {
        printf("\nID : %d\n",students[i].id);
        printf("Name : %s\n",students[i].name);
        printf("Age : %d\n",students[i].age);
        printf("Marks : %.2f\n",students[i].marks);
    }
}

void searchStudent()
{
    int id,i;

    printf("Enter ID : ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(students[i].id==id)
        {
            printf("Student Found\n");
            printf("%s %.2f\n",students[i].name,students[i].marks);
            return;
        }
    }

    printf("Student Not Found\n");
}

void deleteStudent()
{
    int id,i,j;

    printf("Enter ID : ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(students[i].id==id)
        {
            for(j=i;j<count-1;j++)
            {
                students[j]=students[j+1];
            }

            count--;

            printf("Deleted Successfully\n");
            return;
        }
    }

    printf("Student Not Found\n");
}
