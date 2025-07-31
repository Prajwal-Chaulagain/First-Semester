#include<stdio.h>

void main()
{
    int mill=0, hand=0;
    float ratem=0.0, rateh=0.0, amount = 0.0;
    char choice = 'a',sel;
    while (choice == 'a')
    {
        printf("Enter m - Mill Cloth ,h - handloom : ");
        scanf(" %c",&sel);
        switch (sel)
        {
        case 'm':
            printf("Enter the amount of cloth : ");
            scanf("%d",&mill);
            if (mill <= 100)
            {
                ratem = 0.0;
            }

            else if (mill<=200)
            {
                ratem = 0.05;
            }

            else if (mill<=300)
            {
                ratem = 0.075;
            }
            else
            {
                ratem = 0.1;
            }
            
            break;

        case 'h':
            printf("Enter the amount of handloom : ");
            scanf("%d",&hand);
            if (hand <= 100)
            {
                rateh = 0.05;
            }

            else if (hand <=200)
            {
                rateh = 0.075;
            }

            else if (hand <=300)
            {
                rateh = 0.1;
            }
            else
            {
                rateh = 0.15;
            }
            
            break;
        
        default:
        printf("Invalid Input");
            break;
        }
        amount += (mill - (mill*ratem))+(hand - (hand*rateh)); 
        printf("Enter a to add other or else to exit: ");
        scanf(" %c", &choice);
    }
    printf("%.2f",amount);

}