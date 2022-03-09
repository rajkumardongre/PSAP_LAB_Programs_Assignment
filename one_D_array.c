// 3. Assignment based on 1 D array

// (A) Implement Linear search method using array.

// #include <stdio.h>

// int main(){
//     int n;
//     printf("\nEnter Size of Array : ");
//     scanf("%d", &n);

//     int arr[n], mrX, isFound=0, elementIndex;

//     // Taking Input for Array
//     printf("\nEnter all space seperated elements : ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("\nEnter Element to be Searched : ");
//     scanf("%d", &mrX);

//     // Search Algorithm
//     for(int i=0; i<n; i++){
//         if(arr[i]==mrX){
//             isFound=1;
//             elementIndex = i;
//             break;
//         }    
//     }

//     if(isFound){
//         printf("Element %d has Found at Index %d",mrX, elementIndex);
//     }else{
//         printf("Element %d doesn't Exist in given Array",mrX);
//     }

//     return 0;
// }

// (B) Write a program in C to separate odd and even integers in separate arrays.

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter Size of Array : ");
//     scanf("%d", &n);

//     int arr[n], even[n], odd[n];
//     int evenArrIndex=0, oddArrIndex=0;

//     // Taking Input for Array Elements
//     printf("Enter all space seperated elements : ");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     // Seperate elements in diff array either EVEN or ODD
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             even[evenArrIndex]=arr[i];
//             evenArrIndex++ ;
//         }else{
//             odd[oddArrIndex]=arr[i];
//             oddArrIndex++ ;
//         }
//     }

//     // Display Array with Even Elements
//     printf("\nElments with Even Elements \n");
//     for(int i=0; i<evenArrIndex; i++){
//         printf("%d ", even[i]);
//     }

//     // Display Array with Odd Elements
//     printf("\nElments with Odd Elements \n");
//     for(int i=0; i<oddArrIndex; i++){
//         printf("%d ", odd[i]);
//     }

//     return 0;
// }