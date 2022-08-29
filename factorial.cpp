#include <iostream>
#include "functions.h"

int factorial(int n){
    if (n<0) {
        std::cout << "Please enter a positive number!";
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
