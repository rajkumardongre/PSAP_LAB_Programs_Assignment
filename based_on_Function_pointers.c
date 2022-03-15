#include<stdio.h>

int add(int a, int b);
int sub(int a , int b);
int mul(int a, int b);
int div(int a ,int b);

int  (*fun)(int a, int b);

int add(int a, int b){
    return a+b;
}

int sub(int a , int b){
    return (a-b);
}

int mul(int a, int b){
    return(a*b);
}

int div(int a ,int b){
    return (a/b);
}

int main(){
    int i, a,b;
    printf("Enter 2 Numbers : ");
    scanf("%d %d", &a, &b);
    printf("\n");
    int  (*fun)(int a, int b);

    fun=add;
    i=fun(a,b);
    printf("Addition is         : %d\n",i);

    fun=sub;
    i=fun(a,b);
    printf("Subtraction is      : %d\n",i);

    fun=mul;
    i=fun(a,b);
    printf("Multiplication is   : %d\n",i);

    fun=div;
    i=fun(a,b);
    printf("Division is         : %d\n",i);

}