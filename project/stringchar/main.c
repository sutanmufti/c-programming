#include <stdio.h>
int strlenz(char *s)
 {
        int n;
        for (n = 0; *s != '\0'; s++)
            n++;
        
        return n;
 } ;

void printstring( char * s){
    while (*s != '\0'){
        printf("%c", *s);
        s++;
    }

}
int main(){

    char a = 'a'; // use single quote to denote a char
    printf("every char is basically an integer. This is what 'encoding' is for. For example, the character '%c' value is actually '%d'.\n",a,a);

    char first[] = "first, a string is just a array of characters that ends with \\0. this means 'first[-1]' is \\0. \n";

    // this is how we print the string.
    for (int i=0; i < sizeof(first)/sizeof(first[0]); i++){
        printf("%c",first[i]);
    }

    char* second = "char * 'second' = \"another way to store a string is as a pointer!! a pointer char is basically a string.\n\"";

    // the second way to print a string.
    int i = 0;
    while (second[i] != '\0'){
        printf("%c", second[i]);
        i++;
    }


    printf("the 'second' is a pointer... which is the memory address (second's value is %p)\n", second);

    printf("this is weird, but we can add integer to 'second' which result in second[1]. When we can add integer to the pointer of a string! For example: \n\n");
    char p = *second;
    printf("the value of 'p' is %c \n", p);
    char q = *(second + 1);
    printf("the value of 'q' is %c \n", q);
    char r = *(second + 2);
    printf("the value of 'r' is %c \n", r);

    printstring("the printstring() is how we print a string of char! It demonstrates that char * can be added with int values. C is weird.\n");

    int longval = strlenz(second);
    printf("charlong %d,", longval);
    return 0;
}


