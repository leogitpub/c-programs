#include<stdio.h>
#include<string.h>
void  Add(int, int, char *);
int fun1();
 struct person {
        char* s[20];
        int age;


     } ;
int main() {
  struct person e;
//  struct person k;
  struct person *em;

  e.age= 21;
  *e.s= "Omkar";
  char c[20] = "Darwin";
  int d = 22;

  DisplayNoS(&c, d);
        printf("my age %d \n", e.age);
        printf("my name %s \n", *e.s);
  em = &e;
  printf("pointer em, %d, %s \n", em->age, *em->s);
 // DisplayNo(&e,Add);
  return 0;
}

void DisplayNoS(char *a, int b){
 struct person e;
   *e.s = a;
   e.age= b;       
   int k; //int* ptr2;
   printf("Displaying local name : %s \n Displaying local age : %d \n", *e.s, e.age );

void (*ptr)(int, int, char *); //.can try void too
ptr = Add;
 (*ptr)(2, 10, "Harry"); // even can use ptr directly
 (DisplayNo(&e,Add));
Hello();
//
 //printf("pointer return : %d \n", ptr2);

}

void DisplayNo(struct person *k, void (*ak)(int a, int b,char *c)){

printf(" Inside func %d \n",  k->age);
(ak)(100, 200, "Raja");

}



void Add(int x, int y, char *r){
int c;
c = x + y ;
printf("Add result is %d, Name is %s \n", c, r);


}
 int fun1(){
int *a = (int *)malloc(sizeof(int));
	a = 10;
printf(" malloc %d \n",a);
return a;
}


void Hello(){
	int k = (int  )(fun1());

	printf(" \n Zeee , %d \n",k);


}
