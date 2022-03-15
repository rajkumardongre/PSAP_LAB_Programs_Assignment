// A. Write a program to implement addition, subtraction, multiplication and transpose of matrices.

#include <stdio.h>

int main()
{

    printf("\nPress '+' for Addition.");
    printf("\nPress '-' for Subtraction.");
    printf("\nPress 'T' for Transpose.");
    printf("\nPress 'x' for Multiplication.\n");

    printf("\nEnter Your Choice : ");    
    char choice;
    scanf("%c", &choice);
    
    printf("\nEnter no. of rows and columns of martix 1 : ");
    int row, col;
    scanf("%d",&row);
    scanf("%d",&col);
    int mat1[row][col];
    int mat2[row][col];
    int mat3[row][col];

    // For Addition 
    if(choice == '+'){
        printf("\nEnter matrix 1 elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter matrix 2 elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat2[i][j]);
            }
        }
        // Addition Opreation
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                mat3[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
    }

    // For Subtraction
    else if(choice == '-'){
        printf("\nEnter matrix 1 elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\nEnter matrix 2 elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat2[i][j]);
            }
        }
        // Subtraction Opreation
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                mat3[i][j] = mat1[i][j]-mat2[i][j];
            }
        }
    }

    // For Transpose
    else if (choice=='T' || choice=='t'){
        printf("\nEnter matrix elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                mat3[i][j] = mat1[j][i];
            }
        }


    
    }

    // For Multiplication 
    else if(choice=='x' || choice=='X'){
        printf("\nEnter matrix 1 elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\nEnter matrix 2 elements :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat2[i][j]);
            }
        }

        // Multiplication Operation
        for (int i = 0; i < col; i++) {
		    for (int j = 0; j < col; j++) {
			    mat3[i][j] = 0;
			    for (int k = 0; k < col; k++)
				    mat3[i][j] += mat1[i][k] * mat2[k][j];
		    }
	    }
    }
    else{
        printf("\nInvalid Choice!!!");
    }


    if(choice=='+' || choice=='-' || choice=='T' || choice=='t' || choice=='x' || choice=='X'){
        // Display Matrix Result
        printf("\nMatrix is :- \n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                printf("%d ",mat3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

