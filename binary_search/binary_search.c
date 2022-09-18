/**
 * @file binary_search.c
 * @author lewkelele
 * @brief An implementation of the binary search algorithm. 
 *
 *        Due to the nature of the algorithm, there is actually multiple approaches to implementing the algorithm. 
 *        It's simplicity allows for the algorithm to be to be implemented following an iterative method, but its 
 *        repetitive sectioning suggests a potential for a recursive implementation. This, however, makes me wonder 
 *        if there is a method for implementing linear search recursively. The approach would likely be very 
 *        overcomplicated for no reason.
 *
 *        The algorithm is to be implemented in C so that I may further practice using the programming language.
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief Execution of binary search. The algorithm follows the design method of "divide and conquer." 
 *
 *        It is possible that you might have implemented the algorithm before without knowing. For instance, 
 *        someone asks you to guess a number between 10, with unlimited guesses and hints. Rather than 
 *        approaching it with a linear search mindset, you elect to approach the game methodically. You would 
 *        likely begin with some number at the middle: 5. You are told that your guess is less than the actual
 *        number, so you guess the number in between 5 and 10: 8. You are told the number is less than 8, so
 *        you guess a number between 5 and 8: 6. Correct!
 * 
 * @param input 
 * @param n 
 * @param find
 * @return int 
 */
int binarySearch(int input[], int n, int find) {
  int identified = -1;

  
/**
 * @brief currently there is an error in the code, though I am not sure as to where it might be. My current
 *        best guess may likely be somewhere found in the usage of 'n'.
 * 
 */
  int beginning  = 0;
  int end        = n;
  while (beginning != end) {
    int midpt   = (beginning + end) / 2;
    int current = *(input + midpt);

    if (current == find)
      identified = current;

    else if (current > find) end       = midpt;
    else if (current < find) beginning = midpt;
  }

  return identified;
} // end binarySearch

/**
 * @brief The driver code. The code initializes an array that is to act as a test input for the 
 * algorithm. The array will be passed as one of the parameters for the function that executes 
 * the binary search algorithm.
 * 
 * @return int 
 */
int main () {
  int input[]  = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};       // Array of size n
  int n        = sizeof(input)/sizeof(input[0]);       // Size of array
  int find     = 9;                                    // Desired element

  int position = binarySearch(input, n, find);
  printf("The element is at position %d \n",   // outputs the position of the searched element
  position);

  return 0;
} // end main