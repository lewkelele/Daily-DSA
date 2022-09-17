/**
 * @file binary_search.c
 * @author lewkelele
 * @brief An implementation of the binary search algorithm. 
 *        Due to the nature of the algorithm, there is actually multiple approaches to implementing the algorithm. 
 *        It's simplicity allows for the algorithm to be to be implemented following an iterative method, but its 
 *        repetitive sectioning suggests a potential for a recursive implementation. This, however, makes me wonder 
 *        if there is a method for implementing linear search recursively. The approach would likely be very 
 *        overcomplicated for no reason.
 *        The algorithm is to be implemented in C so that I may further practice using the programming language.
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief 
 * 
 * @param input 
 * @param n 
 * @param identify 
 * @return int 
 */
int binarySearch(int input[], int n, int identify) {
  int identified;

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
  int identify = 9;                                    // Desired element

  int position = binarySearch(input, n, identify);

  return 0;
} // end main