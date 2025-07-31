#include<stdio.h>
void main()
{
    int A[3][3], B[3][3], C[3][3];
    char choice;
    printf("Enter A and B matrices:\n");
     for(int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
{
    printf("A[%d][%d]:",i, j);
    scanf("%d", &A[i][j]);
    printf("B[%d][%d]:",i, j);
     scanf("%d", &B[i][j]);
}
     } 
     printf("Enter a for addition\n s for subtraction\n");
     scanf(" %c", &choice);
     switch(choice)
     {
        case 'a':
     for(int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
     }
     break;
     case 's':
     for(int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
     }
     break;
     default:
     printf("Invalid choice.");
     }
printf("C matrix is :\n");
for(int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
     }
}
