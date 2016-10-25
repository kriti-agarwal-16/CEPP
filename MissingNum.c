#include<stdio.h>
#include<stdlib.h>
#define max 500

int main(){
    int a[max],i,n,reqSum,givenSum=0,missingNum;

    printf("Enter sixe of array: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        givenSum += a[i];
    }

    reqSum = (n+1)*(n+2)/2;
    missingNum = reqSum-givenSum;

    printf("Missing number is: %d",missingNum);
    return 0;

}
