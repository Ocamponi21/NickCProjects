// pre-processor directives 

//include needed C and header files 
#include "Basiclo.c"
#include "Decisions.c"
#include "Loops.c"
#include "Functions.c"

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
    char student[] = "Nick Ocampo";
    char language [] = "C";
    char programmer[] = "Dennis Ritchie";

    congratulate1(student, language, programmer);
    congratulate2(student, language, programmer);
    printf("%.1f degrees celsius = %.1f degrees fahreheit.\n", 0.0, fahrenheitFromCelsius(0.0));
    printf("%.1f degrees celsius = %.1f degrees fahreheit.\n", 100.0, fahrenheitFromCelsius(100.0));
}