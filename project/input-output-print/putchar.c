#include <stdio.h>


int main(){
    printf("click ctrl+d to send EOF signal and assign p with EOF\n");
    int p;
    p = getchar();

    while (p != EOF){
        // separator
        printf("|");
        putchar(p);
        p = getchar();
    }
    printf("the value of EOF which is stored in int c is: %d.\n", p);
    printf("reading complete!");

    return 0;
}