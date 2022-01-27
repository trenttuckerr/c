// CS 271
// Program Name: part1.c
// Author: Trent Tucker
// Date: October 15, 2020
// Purpose: This program will generate an array in a specificed size and position length. 
//          After the array is set, it will be shifted to the left. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shiftLeft (int *a, int *b); // function prototype
int main (void) {
   int size = 0;
   puts("Enter the size of the array.");
   scanf("%d", &size); // assigns the input to size
   srand(time(0)); // seed gen
   int max = 0;
   puts("Enter the maximum possible value for array elements.");
   scanf("%d", &max); // assigns the input to max
   int array[size];
   for(int i = 0; i < size; i++) { 
       array[i] = rand() % max + 1;
   } // end for loop
   for(int j = 0; j < size; j++){ // prints original array
       printf("%d ", array[j]);
   } // end for loop
   puts("");
   int *first = array; // first pointer set to array
   int *last = &array[size-1]; // last pointer set to the last pos in the array
   shiftLeft(first, last); // sends the pointers to shiftLeft
   for(int j = 0; j < size; j++){ // prints the new array
       printf("%d ", array[j]);
   } // end for loop
} // end main

void shiftLeft (int *a, int *b) {
    int arraySize = 1;
    for(int i = 0; i < b - a; i++) { // for loop to find the size of the array
        arraySize++;
    } // end for loop
    int pos0 = a[0];
    for(int j = 0; j < arraySize; j++) {
        a[j]=a[j+1]; // shifting left
    } // end for loop
    a[arraySize-1] = pos0; // assigns the last value to the first
} // end shiftLeft