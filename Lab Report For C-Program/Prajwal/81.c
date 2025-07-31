#include <stdio.h>

int main() {
    int matrix[4][4];
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
    printf("Enter the element [%d][%d]:",i,j);
    scanf("%d",&matrix[i][j]);
    }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(j > i) {
                matrix[j][i] = 0;
            }
        }
    }
    printf("Lower Triangular Matrix:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}