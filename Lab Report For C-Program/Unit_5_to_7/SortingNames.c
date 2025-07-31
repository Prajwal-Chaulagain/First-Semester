#include<stdio.h>
#include<string.h>
int main()
{
    char person[5][10];
    printf("Enter the names of any five persons: \n");
    for(int i=0; i<5; i++) {
        scanf("%s",&person[i]);
    }
    printf("Before sorting:\n");
    for(int i=0; i<5; i++) {
        printf("%s\t",person[i]);
    }
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(strcmp(person[i],person[j])>0) {
                char temp[10];
                strcpy(temp,person[i]);
                strcpy(person[i],person[j]);
                strcpy(person[j],temp);
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(int i=0; i<5; i++) {
        printf("%s\t",person[i]);
    }
    return 0;
}