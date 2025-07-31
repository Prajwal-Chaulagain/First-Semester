#include<stdio.h>

void main(){
    int num[]={3,6,7,12,22,9,8,14,21,11}, flag=0, key;
    printf("Enter the element to search in array: ");
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        if(key==num[i]){
            flag++;
        }
    }
    if(flag==0){
        printf("The element doesn't exist in the array.\n");
    }
    else{
        printf("The element exists in the array.\n");
    }
}