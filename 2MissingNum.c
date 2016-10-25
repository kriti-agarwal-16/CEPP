#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main(){
    int a[500],i,n,sum,prod,num1,num2;
    int reqSum,givenSum=0,reqProd,givenProd=1;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        givenSum += a[i];
        givenProd *= a[i];
    }

    reqSum = (n+2)*(n+3)/2;
    reqProd = factorial(n+2);

    sum = reqSum-givenSum;
    prod = reqProd/givenProd;

    for(i=1;i<=n+2;i++){
        num1 = i;
        num2 = sum - i;
        if( (num1 * num2) == prod )
                break;
    }
    printf("Missing Numbers are : %d ,%d",num1,num2);
    return 0;
}

int factorial(int x){
    int i,f=1;
    for(i=1;i<=x;i++)
        f *= i;
    return f;
}
