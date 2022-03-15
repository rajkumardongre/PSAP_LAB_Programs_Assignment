// A. Write a program in C to add two numbers using pointers.
// #include <stdio.h>

// int main(){
//     int first, second, *p1, *p2, sum ;
//     p1 = &first;
//     p2 = &second;
//     printf("Enter 2 Numbers : ");
//     scanf("%d %d", p1, p2);
//     sum  = *p1 + *p2;
//     printf("\nSum is : %d", sum);

//     return 0;
// }


//C program find factorial of given number in C
#include <stdio.h>

void findFactorial(int, int *);//Function prototype

int main()
{
    int i,fact,num;
    printf("Enter a number: \n");
    scanf("%d",&num);//Takes input from the user
    
    findFactorial(num, &fact);//function call
    
    printf("Factorial of %d is: %d",num,fact);

    return 0;
}

void findFactorial(int num, int *fact){//function definition
    *fact=1;
    //find factorial using for loop
    for(int i=1; i<=num; i++){
        *fact=*fact*i;
    }
}