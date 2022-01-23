#include <stdio.h> 
#define INCREMENT(x) ++x
#define LIMIT 100


int main() 
{ 

    char *ptr = "GeeksQuiz"; 

    int x = 10; 

    printf("%s  ", INCREMENT(ptr)); 

    printf("%d", INCREMENT(x)); 
    printf("%d",LIMIT); 

   //removing defined macro LIMIT 

   #undef LIMIT 

   //Next line causes error as LIMIT is not defined 

   int LIMIT=1001; 

   printf("\n%d",LIMIT);

   printf("Current File :%s\n", __FILE__ );

   printf("Current Date :%s\n", __DATE__ );

   printf("Current Time :%s\n", __TIME__ );

   printf("Line Number :%d\n", __LINE__ );
    return 0; 

}
