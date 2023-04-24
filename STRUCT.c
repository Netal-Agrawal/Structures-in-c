#include <stdio.h>
#include <string.h>
// create struct with person1 variable
struct student
{
    char name[50];
    int prn;
    float gpa;
}
student1;

int main()
{
    {
    printf( "Enter Name : \n") ;
    scanf("%s", &student1 .name) ;
    printf ("Enter last 4 digits of PRN : \n");
    scanf("%d",&student1.prn);
    printf("Enter GPA: \n");
    scanf("%f", &student1 . gpa) ;

    }

// print struct variables
printf("Name: %s\n", student1.name);
printf("PRN: %d\n", student1.prn);
printf("GPA: %.2f\n", student1.gpa);
return 0;
}