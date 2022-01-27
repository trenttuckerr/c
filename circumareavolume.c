// CS 271
// Program Name: part2.c
// Author: Trent Tucker
// Date: October 15, 2020
// Purpose: This program will hold a list/menu based selection program that
//          can calculate circumference, area, and volume. 
#include <stdio.h>
void circumference(int a); // function prototype
void area(int b); // function prototype
void volume(int c); // function prototype
int main(void) { 
    //code from figure
    // initialize array of 3 pointers to functions that each take an
    // int argument and return void
   void (*f[3])(int) = {circumference, area, volume};

   printf("%s", "Enter 0 for circumference, 1 for area, 2 for volume, 3 to end: ");
   size_t choice; // variable to hold user's choice
   scanf("%u", &choice);

   // process user's choice
   while (choice >= 0 && choice < 3) {

      // invoke function at location choice in array f and pass
      // choice as an argument
      (*f[choice])(choice);

      printf("%s", "Enter 0 for circumference, 1 for area, 2 for volume, 3 to end: "); // prompts user
      scanf("%u", &choice); // assigns the input to the choice
   } // end while

   puts("Program execution completed.");
} // end main
void circumference(int a) {
    printf("%s", "Please enter the radius: ");
    float radius;
    scanf("%f", &radius); // assigns input to the radius
    puts("The circumference of a circle is computed.");
    float circ;
    float pi = 3.14159;
    circ = 2 * pi * radius; // runs the forumla for circumference
    printf("        Radius: %f Circumference: %f\n", radius, circ); // prints the radius and circumference
} // end circumference
void area(int b) {
    printf("%s", "Please enter the radius: ");
    float radius;
    scanf("%f", &radius); // assigns input to the radius
    puts("The area of a circle is computed.");
    float ar;
    float pi = 3.14159;
    ar = pi * (radius * radius); // runs the formula for area
    printf("        Radius: %f Area: %f\n", radius, ar); // prints the radius and area
} // end area
void volume(int c) {
    printf("%s", "Please enter the radius: ");
    float radius;
    scanf("%f", &radius); // assigns input to the radius
    puts("The volume of a sphere is computed.");
    float vol;
    float pi = 3.14159;
    vol = (4.0/3.0) * (pi) * (radius * radius * radius); // runs the formula for volume
    printf("        Radius: %f Volume: %f\n", radius, vol); // prints the radius and volume
} // end volume