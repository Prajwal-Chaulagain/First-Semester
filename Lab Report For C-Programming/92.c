#include <stdio.h>
#include <string.h>
#define MAX_CUSTOMERS 200
#define MAX_NAME_LENGTH 50

struct Customer
 {
    int accountNo;
    char name[MAX_NAME_LENGTH];
    float balance;
};
void printLowBalanceCustomers(struct Customer customers[], int numCustomers) 
 {
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 0; i < numCustomers; i++) 
    {
        if (customers[i].balance < 100) 
        {
            printf("Account No: %d, Name: %s\n", customers[i].accountNo, customers[i].name);
        }
    }
}
void withdraw(struct Customer *customer, float amount) 
{
    if (amount > customer->balance)
     {
        printf("Insufficient balance for withdrawal.\n");
    }
     else 
     {
        customer->balance -= amount;
        printf("Withdrawal of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, customer->balance);
    }
}
void deposit(struct Customer *customer, float amount) 
{
    customer->balance += amount;
    printf("Deposit of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, customer->balance);
}
void main()
 {
    struct Customer customers[MAX_CUSTOMERS];
    int numCustomers;
    printf("Enter the number of customers (max 200): ");
    scanf("%d", &numCustomers);
    getchar(); 
    printf("Enter details of %d customers:\n", numCustomers);
    for (int i = 0; i < numCustomers; i++) 
    {
        printf("Customer %d:\n", i + 1);
        printf("Account No: ");
        scanf("%d", &customers[i].accountNo);
        getchar(); 
        printf("Name: ");
        fgets(customers[i].name, MAX_NAME_LENGTH, stdin);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    printLowBalanceCustomers(customers, numCustomers);
    int accountNo, choice;
    float amount;
    printf("\nEnter account number and choice (1 for deposit, 2 for withdrawal): ");
    scanf("%d %d", &accountNo, &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);
    struct Customer *requestedCustomer = NULL;
    for (int i = 0; i < numCustomers; i++)
     {
        if (customers[i].accountNo == accountNo) 
        {
            requestedCustomer = &customers[i];
            break;
        }
    }
    if (requestedCustomer != NULL) 
    {
        if (choice == 1)
         {
            deposit(requestedCustomer, amount);
        } 
        else if (choice == 2)
         {
            withdraw(requestedCustomer, amount);
        } 
        else 
        {
            printf("Invalid choice.\n");
        }
    }
     else 
     {
        printf("Customer with account number %d not found.\n", accountNo);
     }
}
