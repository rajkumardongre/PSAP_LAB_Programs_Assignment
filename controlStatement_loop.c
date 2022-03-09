// 2. Assignment based on control statements and loop statements

// (A) if-else: Write a program to find roots of quadratic equation.

// #include <stdio.h>
// #include <math.h>

// int main(){

//    float a,b,c,r1,r2,d;
   
//    printf("enter the values of a b c : ");
//    scanf("%f %f %f", &a, &b, &c);

//    d = (b*b) - (4*a*c);

//    if (d>0){
//       r1 = (-b + sqrt(d))/ (2*a);
//       r2 = (-b - sqrt(d))/ (2*a);
//       printf ("The real roots = %f %f", r1, r2);
//    }
//    else if (d==0){
//       r1 = -b/(2*a);
//       r2 = -b/(2*a);
//       printf ("roots are equal =%f %f", r1, r2);
//    }
//    else
//       printf("Roots are imaginary");

//     return 0;
// }

// (B) Write a program to print a multiplication table of a given number.

// #include <stdio.h>

// int main(){
//     int n;
//     printf("\nEnter Number of table you want : ");
//     scanf("%d", &n);
//     for(int i=1; i<=10; i++){
//         printf("\n%d X %d = %d", n,i, n*i);
//     }

//     return 0;
// }

// C. Implement a simple calculator in C using switch case construct.

// #include <stdio.h>

// int main(){
//     float n1, n2;
//     char choice;

    
//     printf("\nPress '+' for Addition.");
//     printf("\nPress '-' for Subtraction.");
//     printf("\nPress '*' for Multiplication.");
//     printf("\nPress '/' for Division.");
//     printf("\nPress 'x' for Quit.\n");

//     printf("\nEnter Your Choice : ");
//         scanf("%c",&choice);

//     if(choice !='x'){
//         if(choice!='/')printf("Enter 1st and 2nd Number : ");
//         else printf("Enter Numerator and Denominator : ");
//         scanf("%f %f",&n1, &n2);

//         switch (choice)
//         {
//         case '+':
//             printf("\nAddition is %f\n", n1+n2);
//             break;
//         case '-':
//             printf("\nSubtraction is %f\n", n1-n2);
//             break;
//         case '*':
//             printf("\nMultiplication is %f\n", n1*n2);
//             break;
//         case '/':
//             printf("\nDivision is %f\n", n1/n2);
//             break;
//         default:
//             printf("\nInvalid Choice\n");
//             break;
//         }
//     }

//     return 0;    
// }

