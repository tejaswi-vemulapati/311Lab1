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
  int i = 1;
  while(i < length){
    if(currSmall > array[i]){
      currSmall = array[i];
    }
    i+=1;
  }
	return currSmall;
	}
	
// Takes an array of integers and the length of the array as input, and returns the sum of the integers in the array.
int sum(int array[], int length)  {
	// Function Body
  if(length == 0){
    return 0;
  }
  int sum_arr = array[0];
  int i = 1;
  while(i < length){
    sum_arr = sum_arr + array[i];
    i += 1;
  }
	return sum_arr;
	}
	
// Takes pointers to two integers and swaps the values of integers
void swap(int *a, int *b) {
	// Function Body
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
	
	}

// Rotate values of integers
void rotate(int *a, int *b, int *c){
	// Function Body
  int temp;
  int *tempP = &temp;
  *tempP = *c;
  *c = *b;
  *b = *a;
  *a = *tempP;

	}
// Sorts an array in descending order 
void sort(int array[], int length){
	// Function Body
  int i = 0;
  while(i < length - 1){
    int j = 0;
    while(j < length-i-1){
      if(array[j] < array[j+1]){
	swap(&array[j], &array[j+1]);
      }
      j += 1;
    }
    i += 1;
  }
}
	
//Takes an array of integers and the length of the array as input and cubes  every prime element of the array
void cube_primes(int array[], int length){
	// Function Body
  int i = 0;
  while(i < length){
    bool isPrime = true;
    if(array[i] < 2){
      isPrime = false;
    }
    else{
      int j = 2;
      while(j < array[i]){
	if(array[i] % j == 0){
	  isPrime = false;
	  break;
	}
	j += 1;
      }
    }
    if(isPrime){
      array[i] = array[i]*array[i]*array[i];
    }
    i += 1;
    
  }
  

	}
	

// Takes an array of integers and the length of the array as input and double every positive element of the array that is an Armstrong number.
int expPow(int x, int y){
  int z = 1;
  while(y != 0){
    z *= x;
    --y;
  }
  return z;
} 
void double_armstrongs(int array[], int length) {
	// Function Body
  int i = 0;
  while(i < length){
    if(array[i] >= 0){
      int n = array[i];
      int m = array[i];
      int sum = 0;
      int digits = 0;
      while(m > 0){
	digits += 1;
	m = m / 10;
      }
      //printf("Array[i]= %d\n", array[i]);
      //printf("Num Digits= %d\n", digits);
      while(n > 0){
        int r = n % 10;
	//printf("powerR=%d\n", expPow(r, digits));
        sum = sum + expPow(r, digits);
        n = n/10;
      }
      //printf("Sum = %d\n", sum);
      if(array[i] == sum){
        array[i] = array[i] * 2;
      }
    }
    i += 1;
  }
}
	
//Take an array of integers and length of the arrays as input and negate every happy number of that array
bool is_happy(int n, int index){
  if(n == 1){
    return true;
  }
  else if(n == 0 || index >= 128){
    return false;
  }
  int sum = 0;
  int temp = n;
  while(temp > 0){
    int r = temp % 10;
    sum += r*r;
    temp = temp / 10;
  }
  //printf("n=%d -> %d\n", n, sum);
  return is_happy(sum, index+1);
}
void negate_happy(int array[], int length){
	// Function Body
  int i = 0;
  while(i < length){
    if(array[i] > 0 && is_happy(array[i], 0)){
      array[i] = 0 - array[i];
    }
    i += 1;
  }

}


