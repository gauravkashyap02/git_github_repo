#include<stdio.h>
int main(){

    int size=20;
    char str[size];
    printf("Str:\n");
    fgets(str,size,stdin);

    getchar();
    char str1[size];
    printf("Str1:\n");
    fgets(str1,size,stdin);

    getchar();

    char str2[size];
    printf("Str2:\n");
    fgets(str2,size,stdin);
    
    puts(str);
    puts(str1);
    puts(str2);


    


    return 0;
}