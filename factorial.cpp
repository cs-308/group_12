#include <iostream>
#include <cstdio>

#include "functions.h"

int factorial(int n){
    if (n<0) {
        printf("Please enter a positive number!\n");
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
