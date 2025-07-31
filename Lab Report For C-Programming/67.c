#include<stdio.h>

void main()
{
    int num[10]={1,4,6,8,21,9,11,22,8,14}, smallest, largest;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(num[i]>num[j])
            {
                int temp;
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }
    smallest=num[0];
    largest=num[9];
    printf("The largest number is %d and smallest number is %d.\n",largest, smallest);
}
