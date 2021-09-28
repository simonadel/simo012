#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int caldiv(int, int);

int main()
{

 int x, y;

 printf("Enter first number: ");
 scanf("%i", &x);
 printf("Enter second number: ");
 scanf("%i", &y);


 printf("Summation = %i \n", sum(x,y));
 printf("subtract = %i \n", sub(x,y));
 printf("multiply = %i \n", mul(x,y));
 printf("Dividing = %i \n", div(x,y));

 return 0;
}

int sum(int x, int y) {

 return x+y;

}

int sub(int x, int y) {

 return x-y;

}

int mul(int x, int y) {

 return x*y;

}

int caldiv(int x,int y) {

 if (y==0){

    printf("Error");
 }
 else
 {
      return x/y;
 }



}
