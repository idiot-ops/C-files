#include <stdio.h>

int main(){

// steps to creating a variable: declaration and initialization

int x; // declaration
x = 123; // initialization
int y =321; // declaration + initialization

int age = 21;
float gpa = 3.62;
char grade = 'B';
char name[] = "Bro";
printf("You are %d years old\n", age);
printf("Your Average gpa is %.2f\n", gpa);
printf("Your grade is %c\n", grade);
printf("Your name is %s", name);


return 0;

}