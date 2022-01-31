#include "student.h"
#include <stdbool.h>


/* Lab- 1 Due by 11th Feb 2022
   Make sure your code looks clean
   Write comments with your code
   Do not foget to 'push' your code github reglarly
   */
   

// Takes an array of integers and the length of the array as input, and returns the smallest integer in the array
int smallest(int array[], int length) {
	// Function Body
  int currSmall = array[0];
  for(int i = 1; i < length; i++){
    if(currSmall > array[i]){
      currSmall = array[i];
    }
  }
	return currSmall;
	}
	
// Takes an array of integers and the length of the array as input, and returns the sum of the integers in the array.
int sum(int array[], int length)  {
	// Function Body
  int sum_arr = array[0];
  for(int i = 1; i < length; i++){
    sum_arr = sum_arr + array[i];
  }
	return sum_arr;
	}
	
// Takes pointers to two integers and swaps the values of integers
void swap(int *a, int *b) {
	// Function Body
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
	
	}

// Rotate values of integers
void rotate(int *a, int *b, int *c){
	// Function Body
  int temp;
  int *ap = &a;
  int *bp = &b;
  int *cp = &c;
  int *tempp = &temp;
  *tempp = *cp;
  *cp = *bp;
  *bp = *ap;
  *ap = *tempp;

	}
int sqrt(int a){
  for(int i = 0; i < a; i++){
    if(i*i >= a){
      return i;
    }
  }
}
// Sorts an array in descending order 
void sort(int array[], int length){
	// Function Body
  while(true){
    for(int i = 0; i < length-1; i++){
      if(array[i] < array[i+1]){
	int temp = array[i];
	array[i] = array[i+1];
	array[i+1] = temp;
      }
    }
    bool check = true;
    for(int i = 0; i < length-1; i++){
      if(array[i] < array[i+1]){
	check = false;
	break;
      }
    }
    if(check){
      break;
    }
  }
  

	}
	
//Takes an array of integers and the length of the array as input and cubes  every prime element of the array
void cube_primes(int array[], int length){
	// Function Body
  for(int i = 0; i < length; i++){
    bool isPrime = true;
    for(int j = 2; j < sqrt(array[i]); j++){
      if(array[i] % j == 0){
	isPrime = false;
	break;
      }
    }
    if(isPrime){
      array[i] = array[i]*array[i]*array[i];
    }
    
  }
  

	}
	

// Takes an array of integers and the length of the array as input and double every positive element of the array that is an Armstrong number. 
void double_armstrongs(int array[], int length) {
	// Function Body
  for(int i = 0; i < length; i++){
    if(array[i] >= 0){
      int n = array[i];
      int sum = 0;
      while(n > 0){
        int r = n % 10;
        sum = sum + r*r*r;
        n = n/10;
      }
      if(array[i] == sum){
        array[i] = array[i] * 2;
      }
    }
  }
}
	
//Take an array of integers and length of the arrays as input and negate every happy number of that array
void negate_happy(int array[], int length){
	// Function Body
  for(int i = 0; i < length; i++){
    int x = 0;
    bool is_happy = false;
    while(x < 32){
      bool impossible = false;
      int happy_loop[32];
    int n = array[i];
    int sum = 0;
    while(n > 0){
      int r = n%10;
      sum = sum + r*r;
      n = n/10;
    }
    if(sum == 1){
      is_happy = true;
      break;
    }
    for(int j = 0; j < 32; j++){
      if(happy_loop[j] == sum){
	impossible = true;
	break;
      }
    }
    if(impossible){
      break;
    }
    happy_loop[x] = sum;
    x = x + 1;
    }
    if(is_happy){
      array[i] = 0 - array[i];
    }
    
  }

}


