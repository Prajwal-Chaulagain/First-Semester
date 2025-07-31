#include<stdio.h>
#include<math.h>
int calculateSum();

void main(){
    int x, n, sum;
    printf("Enter the value of x and n.");
    scanf("%d %d",&x, &n);
    sum=calculateSum(x,n);
    printf("The sum of the series is %d.\n",sum);
}

int calculateSum(int x, int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=pow(x,i);
        }
        else{
            sum+=pow(x,i);
        }
    }
    return sum;
}