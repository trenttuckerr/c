// CS 271
// Program Name: part3.c
// Author: Trent Tucker
// Date: October 15, 2020
// Purpose: This program, when given a seven-digit number, will write every possible
//          seven-letter word corresponding to the input. This can be used to find 
//          words that correspond to the phone number of the user.

#include <stdio.h>
#include <string.h>

int main(void) {
    // char array initializations
    char *phoneLetters[10] = {" ", " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"}; // creates the array from assignment pdf (holds combinations)
    char x[10];  // creates a character array with length 10                         
    char out[10]; // creates a character array with length 10
    
    puts("Enter a seven-digit phone number using the digits 2 through 9.");
    gets(x);    // keyword gets applied to x; gets can be used in our situation as it compiles and runs, while getting the correct answer
    
    int pos1 = 0, pos2 = 0; // initialize two integers; they will help with the upcoming while / if loop
    while(pos1 < strlen(x)) {
       if(x[pos1] >= '2' && x[pos1] <= '9') { 
	   out[pos2++] = x[pos1]; // increment pos2 and assign if and only condition is met
       } // end if
       pos1++;
    } //end while
    out[pos2] = '\0';

    if (strlen(out) == 7) {
        FILE *fPtr; // pointer fPtr for the file words.txt
        fPtr = fopen("words.txt", "w"); // creates the words.txt file which will hold our possible combinations
        int lOne, lTwo, lThree, lFour, lFive, lSix, lSeven; // initalization of variables that will be used in
                                                            // the seven nested loops (lOne = loop one, etc..)
        for (lOne = 0; lOne < 3; lOne++) { // 7 nested loops to generate all possible seven-letter words (one loop per digit in the number)
            for (lTwo = 0; lTwo < 3; lTwo++) {
                for (lThree = 0; lThree < 3; lThree++) {
                   for (lFour = 0; lFour < 3; lFour++) {
                      for (lFive = 0; lFive < 3; lFive++) {
                         for (lSix = 0; lSix < 3; lSix++) {
                            for (lSeven = 0; lSeven < 3; lSeven++) {
                                char combination[8];
                                combination[0] = phoneLetters[out[0] - '0'][lOne];   // assigns to pos 0
                                combination[1] = phoneLetters[out[1] - '0'][lTwo];   // assigns to pos 1
                                combination[2] = phoneLetters[out[2] - '0'][lThree]; // assigns to pos 2
                                combination[3] = phoneLetters[out[3] - '0'][lFour];  // assigns to pos 3
                                combination[4] = phoneLetters[out[4] - '0'][lFive];  // assigns to pos 4
                                combination[5] = phoneLetters[out[5] - '0'][lSix];   // assigns to pos 5
                                combination[6] = phoneLetters[out[6] - '0'][lSeven]; // assigns to pos 6
                                combination[7] = '\0';    // pos 7 is filled with this character
                            
                               fputs(combination, fPtr);    // placing combinations in file
                               fputs("\n", fPtr);
                            } // end for loop
                         } // end for loop
                      } // end for loop
                   } // end for loop
                } // end for loop
             } // end for loop
          } // end for loop
         fclose(fPtr); // we close the file here (ethical coding)
     } // end if
} // end main