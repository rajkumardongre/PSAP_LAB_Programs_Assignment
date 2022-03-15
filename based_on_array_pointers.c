// 8. Assignments based on array pointers

// A. Write a program in C to sort an array using Pointer.

// #include <stdio.h>

// // Function to sort the numbers using pointers
// void sort(int n, int* ptr)
// {
// 	int i, j, t;

// 	// Sort the numbers using pointers
// 	for (i = 0; i < n; i++) {
// 		for (j = i + 1; j < n; j++) {
// 			if (*(ptr + j) < *(ptr + i)) {
// 				t = *(ptr + i);
// 				*(ptr + i) = *(ptr + j);
// 				*(ptr + j) = t;
// 			}
// 		}
// 	}

// 	// print the numbers
// 	for (i = 0; i < n; i++)
// 		printf("%d ", *(ptr + i));
// }

// int main()
// {
// 	int n = 5;
// 	int arr[] = { 0, 23, 14, 12, 9 };

// 	sort(n, arr);

// 	return 0;
// }


// B. Write a C program to count the number of vowels and consonants in a given string using
// pointers.

#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int  vCount=0,cCount=0;

    printf("Enter any string: ");
    scanf("%s", &str);

    //assign base address of char array to pointer
    p=str;

    //'\0' signifies end of the string
    while(*p != '\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        //increase the pointer, to point next character
        p++;
    }

    printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d",cCount);
    return 0;
}