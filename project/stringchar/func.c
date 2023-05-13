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