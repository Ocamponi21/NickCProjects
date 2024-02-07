// pre-processor directives 

//include needed C and header files 
#include "Basiclo.c"
#include "Decisions.c"
#include "Loops.c"
#include "Functions.c"
#include "Pointers.c"
#include "PassByRef.c"


int main(void){
    //output();
    //input();

    //Decisions
    //decisions1();
    //decisions2();
    //decisions3();
    //decisions4();
    //decisions5();
   // decisions6();

    //Loops
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();
    // recursion(START);

    /*Functions*/
    //declare 3 character arrays 
    // char student[] = "Nick Ocampo";
    // char language [] = "C";
    // char programmer[] = "Dennis Ritchie";

    // congratulate1(student, language, programmer);
    // congratulate2(student, language, programmer);
    // printf("%.1f degrees celsius = %.1f degrees fahreheit.\n", 0.0, fahrenheitFromCelsius(0.0));
    // printf("%.1f degrees celsius = %.1f degrees fahreheit.\n", 100.0, fahrenheitFromCelsius(100.0));
    // printAddress();
    // printf("The global variable i stores its value at memory location %p.\n", getAddress());
    // printf("The global variable i stores the value %d.\n", getDataAtAddress());
    // printf("The global variable j now stores the value %.2f.\n", storeDataAddress());
    // printf("The size of the value in the global variable j is %d bytes .\n", getDoubleBytes());
    // printf("The size of the pointer in the global variable j is %d bytes .\n", getPointerToDoubleBytes());
    // printf("The size of the value in the global variable i is %d bytes .\n", getIntBytes());
    // printf("The size of the pointer in the global variable i is %d bytes .\n", getPointerToIntBytes());
    // pointerToNull();

    /* Pass By Reference */
    //declare and initilize variables for (x, y) point 
    double x = 3.0;
    double y = 4.0;

    //must use the ampersand to use an address of a variable 
    cartesainToPolar(x, y, &radius, &theta);
    printf("(%.2f, %.2f) equals (%.2f, %.2f)\n", x, y, radius, theta);

}