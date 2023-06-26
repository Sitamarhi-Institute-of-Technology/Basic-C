#include <stdio.h>
#include <string.h>

struct student {
   char name[50];
   int roll;
   float marks;
};

int main() {
   struct student s1; // declaring a struct variable

   // assigning values to the struct members
   strcpy(s1.name, "Sakshi");
   s1.roll = 1;
   s1.marks = 85.6;

   // displaying the values of the struct members
   printf("Name: %s\n", s1.name);
   printf("Roll Number: %d\n", s1.roll);
   printf("Marks: %.2f\n", s1.marks);

   return 0;
}

/*In this code, we have first defined a structure called "student" with three member variables - name, roll, and marks.

Then, in the main function, we have declared a variable "s1" of type "student".

Next, we have assigned values to the member variables of "s1" using the dot operator.

Finally, we have printed the values of the member variables using printf statements.*/