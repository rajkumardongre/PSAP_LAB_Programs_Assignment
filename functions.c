// 6. Assignments based on functions(Recursive and non recursive)

// A. Write a program in C for binary search using recursion.

// #include <stdio.h>

// int binarySearch(int arr[], int n, int mrX, int start, int end){
//     if(start<=end){
//         int mid = (start+end)/2;
//         if(arr[mid]==mrX){
//             return mid;
//         }else if(arr[mid] < mrX){
//             start = mid+1;
//             return binarySearch(arr, n, mrX, start, end);
//         }else{
//             end = mid-1;
//             return binarySearch(arr, n, mrX, start, end);
//         }
//     }
//     return -1;
// }

// int main(){
//     int n, mrX;
//     printf("Enter Size of Array : ");
//     scanf("%d", &n);
//     int arr[n];
    
//     // Taking input Elements Value
//     printf("Enter all Space seperated Element values : ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     // Covert into Sorted Array
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("Enter Element to be Searched : ");
//     scanf("%d", &mrX);

//     int index = binarySearch(arr,n, mrX, 0, n);
    
//     if(index == -1){
//         printf("Element %d does not Exist.");
//     }else{
//         printf("Element %d Exist.",mrX);
//     }
    
//     return 0;
// }

// ----------------------------------------------------------------

// B. Write a program to implement call by value and call by reference.

// 1. Swap two numbers using call by reference method.

// #include <stdio.h>

// int swapNumber(int *num1, int *num2){
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }

// int main(){
//     int num1 = 21;
//     int num2 = 33;
//     printf("Before Swaping\n");
//     printf("Number 1 : %d\nNumber 2 : %d",num1,num2);

//     int *p1 = &num1;
//     int *p2 = &num2;

//     swapNumber(p1, p2);

//     printf("\nAfter Swaping\n");
//     printf("Number 1 : %d\nNumber 2 : %d",num1,num2);

//     return 0;
// }

// -----------------------------------------

// 2. Calculate average of given numbers using call by value method.

// #include <stdio.h>

// int findAvg(float n1, float n2, float n3){
//     return (n1+n2+n3)/3;
// }

// int main(){
//     float n1,n2,n3;
//     printf("Enter 3 Numbers : ");
//     scanf("%f %f %f", &n1, &n2, &n3);
//     float avg = findAvg(n1, n2, n3);
//     printf("Average of given 3 numbers is : %f", avg);

//     return 0;
// }