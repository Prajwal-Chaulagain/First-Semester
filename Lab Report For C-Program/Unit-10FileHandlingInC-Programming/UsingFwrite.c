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
    fptr = fopen("Binaryfile.bin", "wb");
    for (int i = 1; i <= 3; i++)
    {
        num.n1 = i;
        num.n2 = i * 5;
        num.n3 = i * 10 + 1;
        fwrite(&num, sizeof(struct ThreeNum), 1, fptr);
    }
}