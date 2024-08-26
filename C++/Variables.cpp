#include<iostream>

int main(){
    int myNum = 5;               // Integer (whole number without decimals)
    int y = 10;
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean (true or false)
    int sum = myNum + y;
    
    std::cout << sum;
    std::cout << "\nThat's a text";
    
    // Declare multiple variables
    int x = 10, q = 20, z = 30;
    int sum2 = q + x + z;
    
    std::cout << "\n" << sum2;
    /*
	All C++ variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create understandable and maintainable code*/

/* 
Constants
When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):*/ 

const int ageToVote = 18;
//When you declare a constant variable, it must be assigned with a value:
    return 0;
}

