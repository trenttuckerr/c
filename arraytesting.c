//CS 271
//Program Name: lab2.c
//Author: Trent Tucker
//Date: September 17th, 2020
//Purpose: to test the prototypes and implementations of Lab2

#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>

int main(void) {
    //The printCharArray is tested by sending the method an array and and integer. The printed array will be our result.
    puts("The printCharArray method is being tested.");
    char test1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    int sizeOfTest1 = 11;
    puts("The test1 array contains the following elements: ");
    //prints the array
    for(int a = 0; a < sizeOfTest1; a++){
        printf("%c ", test1[a]);
    } //end for loop
    puts("");
    puts("The following is printed after running the printCharArray method: ");
    //sends the array and integer to the method
    printCharArray(test1, sizeOfTest1);
    puts("");
    puts("");

    //The countLetters array is tested by sending the method an array and an integer. The number of letters in the array is our result.
    puts("The countLetters method is being tested.");
    char test2[] = {'a', '2', 'c'};
    int sizeOfTest2 = 3;
    puts("The test2 array contains the following elements: ");
    //prints the array
    for(int b = 0; b < sizeOfTest2; b++){
        printf("%c ", test2[b]);
    } //end for loop
    puts("");
    puts("The following is printed after running the countLetters method: ");
    //sends the array and integer to the method
    countLetters(test2, sizeOfTest2);
    puts("");
    puts("");

    //The numMatches method is tested by sending the method an array and an integer. The number of letters will be our result.
    puts("The numMatches method is being tested.");
    //creates two arrays since we are comparing
    char test3a[] = {'a', '7', '2', 'b', '8'};
    char test3b[] = {'A', '8', '2', 'b', '7'};
    int sizeOfTest3Arrays = 5;
    puts("The numMatches method is used to return the number of identical elements between two arrays. The contents of the arrays being tested are: ");
    //prints the first array
    for(int c = 0; c < sizeOfTest3Arrays; c++){
        printf("%c ", test3a[c]);
    } //end for loop
    puts("");
    //prints the second array
    for(int d = 0; d < sizeOfTest3Arrays; d++){
        printf("%c ", test3b[d]);
    } //end for loop
    puts("");
    puts("The following is printed after running the numMatches method: ");
    //sends the two arrays and the integer to the method
    numMatches(test3a, test3b, sizeOfTest3Arrays);
    puts("");
    puts("");

    //The capitalize method is being tested by sending the method an array and an integer. The capitalized array will be our result.
    puts("The capitalize method is being tested.");
    char test4[] = {'a', 'b', 'c', 'D', 'E', 'F'};
    int sizeOfTest4 = 6;
    puts("The test4 array contains the following elements: ");
    //prints the array that will be capitalized after running the capitalize method
    for(int e = 0; e < sizeOfTest4; e++){
        printf("%c ", test4[e]);
    } //end for loop
    puts("");
    puts("The following is printed after running the capitalize method: ");
    //sends the capitalize method the array and the integer
    capitalize(test4, sizeOfTest4);
    puts("");
} //end main method