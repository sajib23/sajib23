#include<stdio.h>
#include <math.h>
int main() {
int a, b;
printf("enter the value of a\n");
scanf("%d", &a);

printf("enter the value of b\n");
scanf("%d", &b);

int sum= a+b;
printf("The Sum of a and b is %d\n",sum);
int product=a * b;
printf("the product od a and b is %d\n",product);
int sqproduct=a*b*a*b;
printf("the square of the product is %d\n",sqproduct);
int division=a/b;
printf("The division of a and b is %d\n",division);
int power=pow(a,b);
printf("a to the power b is %d",power);
return 0;


}