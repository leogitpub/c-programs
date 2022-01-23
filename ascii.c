#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c); 
    int b ;
   scanf("%d", &b); 
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    printf("Ascii char %d = %c", b, b);
    
    return 0;
}
