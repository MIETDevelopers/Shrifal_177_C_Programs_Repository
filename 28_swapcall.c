//Name: Shrifal raina
//Date:21-3-2021
//Program: Swap two numbers using call by value. 
#include <stdio.h> //Pre-process directive to include standard input and output functions header file
  
int main() {        //main function
    int x, y; 
    printf("Enter Value of x "); 
    scanf("%d", &x); 
    printf("\nEnter Value of y "); 
    scanf("%d", &y); 
    
    //swapping of number occurs.
    int temp = x; 
    x = y; 
    y = temp; 
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0;   //return function
}
