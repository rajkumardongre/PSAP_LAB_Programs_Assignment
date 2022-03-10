include <stdio.h>

int main(){
    char s[10] = "Naveen";
    char revStr[10];
    int i=0,n=0;
    // To calculate length
    while (s[n]!='\0')
    {
        n++;
    }
    // To Reverse the String
    while (s[i]!='\0'){
        revStr[n-i-1] = s[i];
        i++;
    }
    revStr[n]='\0';
     
    printf("Reverse of %s is %s",s, revStr);

    return 0;
}