#include <stdio.h>
#include <stdlib.h>
struct ThreeNum
{
    int n1, n2, n3;
};
void main()
{
    struct ThreeNum num;
    FILE *fptr;
    int n;
    fptr = fopen("Binaryfile.bin", "rb");
    for (int i = 1; i <= 3; i++)
    {
        fread(&num,sizeof(struct ThreeNum), 1, fptr);
        printf("n1:%d\tn2:%d\tn3:%d\n", num.n1, num.n2, num.n3);
    }
}