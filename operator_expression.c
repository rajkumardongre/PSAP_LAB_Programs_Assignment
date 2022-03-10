// (A) Write a program to find the size of different data types using sizeof operator
// #include <stdio.h>

// int main(){
//     int a;
//     float b;
//     double c;
//     char d;

//     printf("Integer Size    : %d\n",sizeof(a));
//     printf("Float Size      : %d\n",sizeof(b));
//     printf("Double Size     : %d\n",sizeof(c));
//     printf("Character Size  : %d\n",sizeof(d));

//    return 0;
// }

// (B). Write a program to calculate the grade of a student using a logical operator.
// #include <stdio.h>

// int main(){
//     int math, sci, hist;
//     printf("\nEnter marks out of 100 of Maths, Science, and History : ");
//     scanf("%d %d %d", &math, &sci, &hist);

//     int marks = (math+sci+hist)/3;

//     if(marks<33){
//         printf("\nYou got D grade, with %d marks",marks);
//     }else if (marks>=33 && marks<60)
//     {
//         printf("\nYou got C grade, with %d marks",marks);
//     }else if (marks>=60 && marks<80)
//     {
//         printf("\nYou got B grade, with %d marks",marks);
//     }else if (marks>=80 && marks<90)
//     {
//         printf("\nYou got A2 grade, with %d marks",marks);
//     }else{
//         printf("\nYou got A1 grade, with %d marks",marks);
//     }
  
//     return 0;
// }

// (C) Write a program to find out leap year using operators.

// #include <stdio.h>

// int main(){
//     int year;
//     printf("\nEnter Year : ");
//     scanf("%d",&year);

//     if(year%400==0 || (year%100 != 0 && year%4 == 0)){
//         printf("\n%d is a Leap Year",year);
//     }else{
//         printf("\n%d is not a Leap Year",year);
//     }

//     return 0;
// }

