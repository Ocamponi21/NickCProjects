// pre-processor directives

// include BasicIo.h header file
#include "./headers/Loops.h"

//write code for functions declared in Loop.h

//this function uses a while loop to display a countdown to stdout  
void loops1(void){
    //declare and initialize a counter variable 
    //for our loop
    int i = START;

    // set up while loops using macro expression
    // as its condition 
    while(CONDITION(i)){
        printf("%d ", i);
        i--;
    }
    printf("blastoff\n");
}

//this function uses a do_while loop to display a countdown
void loops2(void){
    //declare and initialize a counter variable 
    //for our loop
    int i = START;

    // set up do-while loops using macro expression
    // as its condition 
    do {
        printf("%d ", i);
        i--;
    } while(CONDITION(i));

    printf("blastoff\n");
}

//this function uses a for loop to display a countdown
void loops3(void){
    //set up for loop using macro expressions as its conditions 
    for (int i = START; CONDITION(i);i--) {
            printf("%d ", i);
    }
    printf("blastoff\n");
}

//this function uses a break statement to terminate a loop
void loops4(void) {
    //set up for loop using macro expression as its condition 
    for (int i = START; CONDITION(i); i--) {
        printf("%d ", i);
        //use a macro expression in if condition to terminate for loop 
        if (BREAK(i)){
            break;
        }
    }
    printf("early blastoff\n");
}

//this function uses a continue statemennt to skip 
//the current iteration of a loop 
void loops5(void) {
   //set up for loop using macro expression as its condition 
    for (int i = START; CONDITION(i); i--) {
        //use macro expressions in if condition
        // 0 - false 
        // 1 - true
        if(CONTINUE(i)){
            continue;
        }
        printf("%d ", i);
    }
    printf("even blastoff\n");
}

//this function uses recursion to display a countdown 
//to stdout
void recursion(int i){
    //this is our stopping condition 
    if (i == 0){
        printf("blastoff\n");
    } else {
        printf("%d ", i);
        recursion(--i);
    }
}