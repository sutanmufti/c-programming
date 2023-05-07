#include <stdio.h>


void helloworldfunc(){
    printf("\nhello world from helloworldfunc!\n");
}


int PowerOf(int* base, int* power_of_n){
    int answer = *base;

    for (int i = 0; i < *power_of_n; i++){
        answer = answer * *base;
    }
    return answer;
}


int main ()
{
    printf("functions are block of codes that are called. it's typed with the 'return_type functionname(args)'.\n");

    printf("let's call the function 'void helloworld()' which just prints hello world.");
    helloworldfunc();


    printf("or an exponential function of 'int PowerOf(base,power_of_n)'\n\n");

    int thebase = 2;
    int thepower = 6;

    int* thebasememory = &thebase;
    int* thepowermemory = &thepower;

    int answer = PowerOf(thebasememory,thepowermemory);

    printf("let's set the base of %d and power it to %d. The result from 'PowerOf()' is %d.", thebase,thepower,answer);

    return 0;
}

