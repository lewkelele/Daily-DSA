/* 
 * In order to manifest and develop a passion for algorithms and the logic behind them, I have 
 * decided to try to study an algorithm every day. The algorithms will be implemeneted in an
 * arbitrary langauge, with likely aribitrary libraries, given that I am to provide a reason 
 * for its usage. This is largely so that I am forced to develop a deeper understanding of the 
 * tools that I use. The first algorithm in this collection will be the implementation of a 
 * simple algorithm: Linear Search.
 *
 * Linear Search is likely the easiest algorithm to implement while also one of the most efficient 
 * given that the input size is reasonably small. The algorithm traverses through each individual
 * element in a data set until the desired element has been identified.
 *
 * The algorithm was implemented in C due to how both the programming language and algorithm
 * parallel one another in basic concept. Both are very simple. It just felt fitting.
 */
#include <stdio.h>        /* - The library contains the printf function, which will be used to send
                           *   an output to stdout
                           * - Contains sizeof function. When given an argument, returns the size in
                           *   the unit of bytes. 
                           */

/**
 * @brief Linear search algorithm. Returns the position of the desired element in the array.
 * 
 * @param input 
 * @param n 
 * @param identify 
 * @return int 
 */
int linearSearch(int input[], int n, int identify) {
  for(int i = 0; i < n; i++) {
    if (*(input + i) == identify)
      return i;
  }

  return -1;
}

/**
 * @brief The driver code. The code initializes an array that is to act as a test input for the 
 * algorithm. The array will be passed as one of the parameters for the function that executes 
 * the linear search algorithm.
 * 
 * @return int 
 */
int main() {
  int input[]  = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};    // Array of size n
  int n = sizeof(input)/sizeof(input[0]);           // Size of array
  int identify = 9;                                 // Desired element

  int position = linearSearch(input, n, identify);  // passes array to Linear Search for processing
  printf("The element is at position %d",    // outputs the position of the searched element
  position);
  
  return 0;
}