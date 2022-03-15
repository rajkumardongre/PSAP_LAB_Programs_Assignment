// A. Write a C program to create student information file and write contents (Student Name,
// Roll Number, Marks), save and close the file.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     FILE *fp;
//     fp = fopen("Student.txt", "w");
//     char roll[20];
//     char name[100];
//     char marks[20];

//     char read;

//     printf("Enter Roll no. : \n");
//     scanf("%s", roll);
//     fprintf(fp, "Roll No: ");
//     fprintf(fp, "%s", strcat(roll, " \n"));

//     printf("Enter Student Name: \n");
//     scanf("%s", name);
//     fprintf(fp, "Student Name: ");
//     fprintf(fp, "%s", strcat(name, "\n"));
        
//     printf("Enter Marks: \n");
//     scanf("%s", marks);
//     fprintf(fp, "Student Marks: ");
//     fprintf(fp, "%s", strcat(marks, "\n"));
    
//    fclose(fp);

//     return 0;
// }

// (B). Write a C program to read file contents (Student Name, Roll Number, Marks) and display contents.

#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char read;

    fp = fopen("Student.txt", "r");
    printf("\n\nStudent Information : \n\n");
    while (fscanf(fp, "%c", &read) != EOF){
        printf("%c", read);
    }
    
    fclose(fp);
    
    return 0;
}