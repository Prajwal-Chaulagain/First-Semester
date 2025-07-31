#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *ptr;
    ptr = (char *)malloc(5 * sizeof(char));
    printf("Enter your name:");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", ptr + i);
    }
printf("My name is :\n");
ptr = (char*)realloc(ptr, 10 * sizeof(char));
for (int i = 0; i < 5; i++)
{
    printf("%c", *(ptr + i));
}
printf("Reallocate the ptr variable:\n");
ptr = (char *)realloc(ptr, 10 * sizeof(char));
for (int i = 5; i < 10; i++) 
{
scanf("%C", ptr + i);
}
printf("My name after reallocation is:\n");
for (int i = 0; i < 10; i++)
{
    printf("%C", *(ptr + i));
}
}