#include <stdio.h>
int strlenz(char *s)
 {
        int n;
        for (n = 0; *s != '\0'; s++)
            n++;
        
        return n;
 } ;
int main(){

    char a = 'a'; // use single quote to denote a char
    printf("every char is basically an integer. This is what 'encoding' is for. For example, the character '%c' value is actually '%d'.\n",a,a);

    char first[] = "first, a string is just a array of characters that ends with \\0. this means 'first[-1]' is \\0. \n";

    // this is how we print the string.
    for (int i=0; i < sizeof(first)/sizeof(first[0]); i++){
        printf("%c",first[i]);
    }

    char* second = "another way to store a string is as a pointer!! a pointer char is basically a string.\n";

    // the second way to print a string.
    int i = 0;
    while (second[i] != '\0'){
        printf("%c", second[i]);
        i++;
    }

    int longval = strlenz(second);
    printf("charlong %d,", longval);
    return 0;
}


