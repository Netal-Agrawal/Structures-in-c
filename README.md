# STRUCTURES IN C

1) Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
2) Unlike an array, a structure can contain many different data types (int, float, char, etc.).
3) We can use this data type to store data of different attributes of different data types.
For example, If we want to store data on multiple patients such as patient name, age, and blood group.


![Structure_in_C_1](https://user-images.githubusercontent.com/124857399/228955225-92547837-b99d-4dde-8807-f4562f09afc9.png)

## Create a Structure

‘struct’ keyword is used to create a structure. 

Example:-
      
      struct student 
      {
        char name[50];
        int prn;
        float gpa;
      };
      
## Access Structure Members

To access members of a structure, use the dot syntax (.)

SYNTAX:- 

      variable_name.member;

Example:-

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
      printf("Enter Name :\n");
      scanf("%s",&student1.name);
      printf("Enter last 4 digits of the PRN :\n");
      scanf("%d",&student1.prn);
      printf("Enter GPA:\n");
      scanf("%f",&student1.gpa);

    }
      printf("Name: %s\n", student1.name);
      printf("PRN: %d\n", student1.prn);
      printf("GPA: %.2f",student1.gpa);

      return 0;
    }
      
      
## Simpler Syntax
You can also assign values to members of a structure variable at declaration time, in a single line.

Just insert the values in a comma-separated list inside curly braces {}. 

Example:-

      struct myStructure 
      {
        int myNum;
        char myLetter;
        char myString[30];
      };

      int main() 
      {
        struct myStructure s1 = {13, 'B', "Some text"};
        printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

        return 0;
      }

Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).


