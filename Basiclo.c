// pre-processor directives 

//include BasicIo.h header file 
#include "./headers/BasicIo.h"

//write code for functions declared in BasicIo.h

// this function will use printf and puts to output
//date to stdout (terminal)
void output(void){
    //printf formats and outputs data to stdout 
    //it does not append a new line character to 
    //the end of its output 
    printf("Your first name is %s\n", FIRST_NAME);
    printf("Your last name is %s\n", LAST_NAME);
    printf("Your weight is %.2f and your age is %d\n", WEIGHT, AGE);

    //puts putputs a string to stdout 
    //it does append a new line character to the end of its output
    puts(FIRST_NAME);
    puts(LAST_NAME);
}   
//this function will use scanf and fgets to input data from
//stdin(terminal)
void input(void) {
    // declare variables to store inout data 
    int age;
    char name[] = ""; //this is a C string 
    float weight;
    char fullname[50] = ""; //this is a C string too

    //fgets does not stop at the first srting toen when it 
    //reads in a string 

    printf("Enter your full name: ");
    fgets(fullname, sizeof fullname, stdin);
    printf("Entered full name is: %s", fullname);

    //prompt to input age 
    printf("Enter your age: ");
    //scanf reads the value from stdin per the 
    //tyoe specified in the format specifier 
    //and stores it in the address of the specified variable 
    scanf("%d", &age);
    //2 arguments 1.format specifier 2.address of variable
    printf("Entered age is: %d\n", age);

    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Entered age is: %.2f\n", weight);
     
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Entered age is: %s\n", name);

}
