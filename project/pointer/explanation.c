#include <stdio.h>


void pointer_explanation(){
    printf("we store a value in a variable.\n");
    printf("we store an integer value in an 'int variable'\n");
    printf("we store the memory address of a variable in an 'pointer variable'.\n");


    int x = 69;
    int* addressOfX = &x;
    printf("the value of 'x' is %d\n",x);

    // use %p to format the memory address.
    printf("however, the variable 'x' memory address is '%p'.\n", addressOfX);

    int dereferenced = *addressOfX;
    printf("we can 'deference' it using the '*' again. Dereferencing means 'take the value from that memory address'.\n");

    printf("the value stored at memory address of '%p' is '%d'.", addressOfX, dereferenced);


};