#include <stdio.h>
int main () {
printf("Hey this Programme is all about finding square and sum of two numbers and is written by \n");
printf("Mr Abhinendra Singh \n");
printf ("Enter any number to the square of that number\n");
int x;
scanf("%d",&x);
printf("the square of %d is %d\n",x,x*x);
int b,c,z;
printf("Now enter two numbers to find the Sum of the two numbers and please Separate two numbers with a comma (,) \n");

scanf("%d,%d",&b,&c);
z=b+c;

printf("the sum of two numbers  is %d\n",z);


return 0;
}
