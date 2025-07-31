#include<stdio.h>
#include<math.h>
void main()
{
    int num, digital, sum = 0;
    int temp1, temp2;
    printf("\nenter number to be checked:\t");
    scanf("%d", &num);
    temp1 = num;
    temp2 = num;
    int count = 0;
    while (temp2 != 0)
    {
        count++;
        temp2/=10;
    }
    printf("count=%d\n",count);
    while (num !=0)
{
   digital = num% 10;
        sum += pow(digital, count) ;
        num /= 10;
    }
    if(temp1==sum)
    {
    printf("\nArmstrong Number!!!:");
    }
    else 
    {
    printf("Not Armstrong Number:");
    }
}