 #include<stdio.h>
void main()
{
    int num,rev=0,remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i =0;i<6;i++)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num/= 10;
    }
    printf("The reversed number is =%d",rev);
}