#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_CUSTOMERS 100

struct Customer 
{
    char name[MAX_NAME_LENGTH];
    int accountNo;
    float balance;
};
void  main()
 {
    struct Customer customers[MAX_CUSTOMERS];
    int numCustomers;
    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);
    getchar();
    printf("Enter details of %d customers:\n", numCustomers);
    for (int i = 0; i < numCustomers; i++)
     {
        printf("Customer %d:\n", i + 1);
        printf("Name: ");
        fgets(customers[i].name, MAX_NAME_LENGTH, stdin);
        printf("Account No: ");
        scanf("%d", &customers[i].accountNo);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
        getchar(); 
    }
    int maxIndex = 0;
    for (int i = 1; i < numCustomers; i++)
     {
        if (customers[i].balance > customers[maxIndex].balance) 
        {
            maxIndex = i;
        }
    }
    printf("\nCustomer with the highest balance:\n");
    printf("Name: %s", customers[maxIndex].name);
    printf("Account No: %d\n", customers[maxIndex].accountNo);
    printf("Balance: %.2f\n", customers[maxIndex].balance);
}
