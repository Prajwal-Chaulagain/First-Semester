#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_CUSTOMERS 1000
#define FILENAME "CUST.DAT"

struct Customer 
{
    int accountNo;
    char name[MAX_NAME_LENGTH];
    float balance;
};
int main()
 {
    struct Customer customers[MAX_CUSTOMERS];
    int numCustomers;
    printf("Enter the number of customers (max 1000): ");
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
        strtok(customers[i].name, "\n");
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    FILE *file = fopen(FILENAME, "wb");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(customers, sizeof(struct Customer), numCustomers, file);
    fclose(file);
    file = fopen(FILENAME, "rb");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nCustomers with balance below Rs. 1000:\n");
    struct Customer customer;
    while (fread(&customer, sizeof(struct Customer), 1, file) == 1)
     {
        if (customer.balance < 1000) 
        {
            printf("Account No: %d, Name: %s\n", customer.accountNo, customer.name);
        }
    }
    fclose(file);
    return 0;
}
