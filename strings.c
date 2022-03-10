// 5. Assignment based on Strings
// A. Implement following operations on strings using library functions

// Program to Find Length

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[10] = "Hello";
//     int x = strlen(str);
//     printf("Lenth is %d",x);

//     return 0;
// }

// Program to Copy string

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char str1[10] = "hello";
//     char str2[10];
//     strcpy(str2, str1);
//     printf("%s %s",str1, str2);

//     return 0;
// }

// Program to concatinate 2 string

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char str1[10]="BAT";
//     char str2[10]="MAN";
//     strcat(str1,str2);
//     printf("Concanated String is '%s'",str1);

//     return 0;
// }

// Program to compare 2 string

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char str2[10]="abc";
//     char str1[10]="abcd";
//     int r = strcmp(str1,str2);
//     if(r==0)printf("both string are same");
//     else if(r>0)printf("%s is greater than %s",str1,str2);
//     else printf("%s is greater than %s",str2,str1);

//     return 0;
// }

// Program to Reverse the String with strrev()

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[10] = "Hello";
//     printf("Reverse is %s",strrev(s));

//     return 0;
// }

// ------------------------------------------------------
// B. Implement following operations on strings without using library functions

// Program to find lenth of String without strlen()

// #include <stdio.h>

// int main(){
//     char str[10]="Four";
//     int c = 0;
//     while(str[c]!='\0')c++;
//     printf("Length is %d",c);
    
//     return 0;
// }
    
// Program to Copy a string without stycpy()

// #include <stdio.h>

// int main(){
//     char s1[10] = "vit";
//     char s2[10];
//     int i;
//     for(i=0; s1[i]!='\0'; i++){
//         s2[i] = s1[i];
//     }
//     s2[i] = '\0';
//     printf("Value of 2nd is String '%s'",s2);

//     return 0;
// }

// Program to concatinate 2 string without strcat()

// #include <stdio.h>

// int main(){

//     char s1[10] = "BAT";
//     char s2[10] = "MAN";
//     int i;
//     int j;
//     for(j=0; s1[j]!='\0'; j++);
//     for(i=0; s2[i]!='\0'; i++){
//         s1[j]=s2[i];
//         j++;
//     }
//     s1[j] = '\0';
//     printf("Addition of String is '%s'", s1);

//     return 0;
// }

// Program to compare 2 string without strcmp()

// #include <stdio.h>

// int main(){

//     char s1[10] = "abc";
//     char s2[10] = "abc";
//     int isDiff =  0;
//     int i=0;
//     while(s1[i]!='\0' || s2[i]!='\0'){
//         if(s1[i]!=s2[i]){
//             isDiff=1;
//             break;
//         }
//         i++;
//     }
//     (isDiff ) ? printf("Strings are Different") : printf("Strings are Same");

//     return 0;
// }

// Program to Reverse a string without strrev()

// #include <stdio.h>

// int main(){
//     char s[10] = "Naveen";
//     char revStr[10];
//     int i=0,n=0;
//     // To calculate length
//     while (s[n]!='\0')
//     {
//         n++;
//     }
//     // To Reverse the String
//     while (s[i]!='\0'){
//         revStr[n-i-1] = s[i];
//         i++;
//     }
//     revStr[n]='\0';
     
//     printf("Reverse of %s is %s",s, revStr);

//     return 0;
// }
