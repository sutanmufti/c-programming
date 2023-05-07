#include <stdio.h>

int main(){
    printf("hello world, this is a printf and formatting tutorial.\n");

    int x = 69;


    printf("use the d operator to format integers. the value of x is %d.\n",x);


    printf("use '%%3d' to print and the second in a field six digits wide.\n");
    int y, z;
    y=8;
    z=69;
    printf("an example, print variable y and z: %3d %6d\n", y,z);


    float this = 45.89828317217;

    printf("same thing with float, use %%f formatter to print float points. Use %%2.8f to print 8 decimal points with 2 number wide. %%.34f means print 34 decimal points. \n");

    printf("the value of 'this' is with 15 decimal point is: %.15f", this);



    return 0;
}