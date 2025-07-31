#include <stdio.h>

int main()
 {
    FILE *inputFile, *outputFile;
    int num;
    int sum = 0;
    int count = 0;
    float average;
    inputFile = fopen("values.dat", "r");
    if (inputFile == NULL) 
    {
        printf("Error opening input file.\n");
        return 1;
    }
    while (fscanf(inputFile, "%d", &num) == 1)
     {
        sum += num;
        count++;
    }
    fclose(inputFile);
    if (count > 0)
     {
        average = (float)sum / count;
        outputFile = fopen("average.res", "w");
        if (outputFile == NULL)
         {
            printf("Error opening output file.\n");
            return 1;
        }
        fprintf(outputFile, "Average of numbers in values.dat: %.2f\n", average);
        fclose(outputFile);
        printf("Average calculated and written to average.res successfully.\n");
    } 
    else
     {
        printf("No numbers found in input file.\n");
    }
    return 0;
}
