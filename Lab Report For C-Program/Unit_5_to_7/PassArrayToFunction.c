#include<stdio.h>
void Sorting(int n[])
{
for(int i=0;i<12;i++)
{
    for(int j=i+1;j<12;j++)
    {
        if (n[i] > n[j])
        {
            int temp;
            temp = n[i];
            n[i] = n[j];
            n[j] = temp;
        }
    }
}
printf("The sorted array is:\n");
for(int i=0;i<12;i++)
{
    printf("%d\t",n[i]);
}
}
void main()
{
    int num[] = {3, 2, 1, 4, 6, 5, 7, 6, 8, 9, 7, 10};
    Sorting(num);
}