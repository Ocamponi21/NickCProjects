// pre-processor directives

// include BasicIo.h header file
#include "./headers/Decisions.h"
// write code for functions declared in Decisions.h
// this function uses the camparision operators
//  and the if, if-else, and the if-else-if statement
void decisions1(void)
{
    // declare variables of tyoe float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // use an if statment
    if (num < 40000.0)
    {
        printf("%.1f is less than 40000.0\n", num); // yes displayed
    }

    // change the value in the variable
    num += num;

    // use an if-else statement
    if (num < 40000.0)
    {
        printf("%.1f is less than 40000.0\n", num); // not displayed
    }
    else
    {
        printf("%.1f is not less than 40000.0\n", num); // displayed
    }

    // change value in variable
    num = 0;

    // use an if-else-if statment
    if (num == 0.0)
    {
        printf("%.1f is equal to 0.0\n", num); // displayed
    }
    else if (num < 0.0)
    {
        printf("%.1f greater than 0.0\n", num); // not displayed
    }
    else
    {
        printf("%.1f greater than 0.0\n", num); // not displayed
    }
}

// this function uses the logical operators
void decisions2(void)
{
    // declare variables of tyoe float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // use the logical AND operator
    if (num > 0.0 && num < 40000.0)
    {
        printf("%.1f is between 0.0 and 40000.0\n", num); // displayed is all the conditions are true - displayed
    }

    // change the value in variable
    num += num;

    // use the logial OR operator
    if (num < 0.0 || num > 40000.0)
    {
        printf("%.1f is not between 0.0 and 40000.0\n", num); // displayed is one the conditions is true - displayed
    }

    // use the logical NOT operator
    // the NOT logical operator inverses the bool value its given
    if (!(num > 0.0 && num < 40000.0))
    {
        printf("%.1f is not between 0.0 and 40000.0\n", num); // displayed
    }
}

// this function uses a bool variable
void decisions3(void){
     //declare variables of tyoe float that will be used in conditions
     //initialize it using macro value defined in header file
     float num = NUM;

    //declare and initialize bool variable
    bool isNotBetween = !(num > 0.0 && num < 40000.0);

    //use bool variable in an if-else statement
    if (isNotBetween){
        printf("%.1f is not between 0.0 and 40000.0\n", num); //not displaued
    } else{
        printf("%.1f is between 0.0 and 40000.0\n",num); //displayed
    }
}

void decisions4(void) {
    //declare variables of tyoe float that will be used in conditions
    //initialize it using macro value defined in header file
    float num = NUM;

    //declare and initialize bool variable
    bool isNotBetween = !(num > 0.0 && num < 40000.0);  //false

    //declare a variable of type float
    //initallize it using the ternary operator
    //operand 1 is a bool expresion that gets evaluated
    //operand 2 is the value that gets returned if the bool expression is true
    //operand 3 is the value that gets returned if the bool expression is false
    float extra = isNotBetween ? (num - 40000.0) : 0.0; // operand 3 will get assigned

    // display the value in extre
    printf("%.1f\n", extra);
}
//this function uses the switch statement
void decisions5(void){
    // delcare variables 
    char operation;
    int num1;
    int num2;

    //prompt user to input operation 
    printf("enter an operation(+, -, *, /): ");
    scanf("%c", &operation);

    //prompt user to input numbers 
    printf("Enter first number: ");
    scanf("%d", &num1);

    //prompt user to input numbers 
    printf("Enter second number: ");
    scanf("%d", &num2);

    //use switch statment
    switch(operation)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        default:
        printf("invalid operation!");
    }
}

//this function illustrates short circut evaluation 
// this is when the compiler skips the evalutation of sub-expression in a logical expression 
void decisions6(void) {
    //declare and initialize variables that will be used in a logical expression 
    int x = 1 ;
    bool y = true;

    //short circut evaluation will not occur 
    //because all sub-expressions are true 
    if (x == 1 && y){
        printf("if block executed. \n"); //displayed 
    } else {
        printf ("If block not executed.\n"); //not displayed 
    }

    //short circut evaluation will occur because the first sub-expression is false 
    if (x == 0 && y){
        printf("if block executed. \n"); // not displayed 
    } else {
        printf ("If block not executed.\n"); //displayed 
    }

    //short circut evaluation will occur 
    if (x == 1 || y){
        printf("if block executed. \n"); //displayed 
    } else {
        printf ("If block not executed.\n"); //not displayed 
    }

    //short circut evalutation will not occur because the first sub-expression is false
    if (x == 0 || y){
        printf("if block executed. \n"); //displayed 
    } else {
        printf ("If block not executed.\n"); //not displayed 
    }
}


