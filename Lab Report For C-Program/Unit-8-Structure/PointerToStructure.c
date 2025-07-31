#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;
};
void main()
{
    struct book b[10], *bptr;
    bptr = b;
    int n;
    printf("Enter the value at locations:\n");
    printf("Enter how many book information?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter book[%d]'s name\n", i);
        scanf("%s", &(bptr + i)->name);
        printf("Enter book[%d]'s pages\n", i);
        scanf("%d", &(bptr + i)->pages);
        printf("Enter book[%d]'s price\n", i);
        scanf("%f", &(bptr + i)->price);
    }
    printf("The base address=%u and bptr+1=%u\n", bptr, bptr + 1);
    printf("|SNO| BOOk \t\t| PAGES | PRICES|\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d| %s \t| %d | %.2f |\n", i + 1, (bptr + i)->name, (bptr + i)->pages, (bptr + i)->price);
    }
    int totalprice = 0;
    for (bptr = b; bptr < b + n; bptr++)
    {
        printf("%s book is Rs.%.2f price having %d pages.\n", bptr->name, bptr->price, bptr->pages);
        totalprice = totalprice + bptr->price;
    }
    float avgprice = (float)totalprice /n;
    printf("The average price of Books=%.2f", avgprice);
}
