/*************************************************************************
* Title: (CIS265_6B) Reverse String Message
* File: main.c
* Author: James Eli
* Date: 9/01/2017
*
* (a) Write a program that reads a message, then prints the reversal of 
* the message:
*   Enter a message: Don’t get mad, get even.
*   Reversal is: .neve teg .dam teg t’noD
* Hint: Read the message one character at a time (using getchar) and store 
* the characters in an array. Stop reading when the array is full or the 
* character read is ‘\n’.
* (b) Revise the program to use a pointer instead of an integer to keep 
* track of the current position in the array.
*
* Notes:
*  (1) This is version (b) using a pointer.
*  (2) Compiled with MS Visual Studio 2017 Community (v141), using C
*      language options.
*
* Submitted in partial fulfillment of the requirements of PCC CIS-265.
*************************************************************************
* Change Log:
*   09/01/2017: Initial release. JME
*************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 40

int main(void) {
	char *s = (char [STRING_LENGTH]) { 0 }, c, i = 0;

	printf("Enter a message (characters beyond %d ignored): ", STRING_LENGTH);

	// Note: we insert a null terminator at beginning of string.
	for (*s++ = 0; (c = getchar()) != '\n' && i < STRING_LENGTH; i++, *s++ = c);

	while (putchar(*--s)); // Display in reverse.
	putchar('\n');
}
