//CS 271
//Program Name: lab2functions.h
//Author: Trent Tucker
//Date: September 17th, 2020
//Purpose: includes the implementations for the function prototypes
#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
void printCharArray(char array[], int size) {
    //creates an integer variable that will help in making sure only ten characters are printed per line
    int len = 0;
    //goes through the array and prints it
    for(int i = 0; i < size; i++){
        printf("%c ", array[i]);
	len++;
	//checks to see if the current line already has ten printed characters
	if(len%10==0){
	    puts(""); 
        } //end if 	
    } //end for loop
} //end printCharArray method

int countLetters(char arr[], int sz) {
    //creates an integer variable that will track the number of letters in the array
    int numberOfLetters = 0;
    for(int i = 0; i < sz; i++){
        //uses isalpha to check if the element is alphabetic
        if(isalpha(arr[i])){
            numberOfLetters++;
        } //end if
    } //end for loop
    printf("%d", numberOfLetters);
    return numberOfLetters;
} //end countLetters method

int numMatches(char a[], char b[], int si) {
    //creates an integer to keep track of the number of matches between the two arrays
    int num = 0;
    //runs through the arrays
    for(int i = 0; i < si; i++){
	//checks for equality    
        if(a[i]==b[i]){
            num++;
        } //end if
    } //end for loop
    printf("%d", num);
    return num;	
} //end numMatches method

void capitalize(char c[], int s) {
    for(int i = 0; i < s; i++){
	//checks to see if the current element is lowercase
        if(islower(c[i])){
	    //creates a replace character to use for changing the array to the specified uppercase letter
	    char replace = toupper(c[i]);
	    //uses the replace character to change the array to the capitalized version for the element
	    c[i] = replace;
	} //end if
    } //end for loop
    for(int j = 0; j < s; j++){
        printf("%c ", c[j]);
    } //end for loop
} //end capitalize method