#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    char choice;
    printf("Enter matrices A and B: \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("A[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
            printf("B[%d][%d]:",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("C matrix is:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}