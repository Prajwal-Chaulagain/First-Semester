#include <stdio.h>

void main()
{
    int maths, phy, chem, total;
    printf("Enter the marks in maths, physics and chemistry: ");
    scanf("%d %d %d", &maths, &phy, &chem);
    total = maths + phy + chem;
    if ((maths >= 60 && phy >= 50 && chem >= 40) && (total >= 200 || maths + phy >= 150))
    {
        printf("Candidate is eligible. \n");
    }
    else
    {
        printf("Candidate is not eligible. \n");
    }   
}