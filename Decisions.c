// pre-processor directives 

//include BasicIo.h header file 
#include "./headers/Decisions.h"

//write code for functions declared in Decisions.h

//this function uses the camparision operators
// and the if, if-else, and the if-else-if statement 
void decisions1(void){
    //declare variables of tyoe float that will be used in conditions 
    //initialize it using macro value defined in header file 
    float num = NUM;

    //use an if statment 
    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n, num")
    }

    //change the value in the variable 
    num += num;

    //use an if-else statement
    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n, num")
    } else {
        printf("%.1f is not less than 40000.0\n", num);
    }

    //change value in variable
    num = 0;

    //use an if-else-if statment 
    if (num == 0.0) {
        printf("%.1f is equal to 0.0\n", num),
    } else if {
        printf("%.1f greater than 0.0\n", num);
    } else {
        printf("%.1f greater than 0.0\n", num)
    }
}