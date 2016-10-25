#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[500],b[500]={0},i,c,n,max;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    max=b[0];
    for(i=1;i<n;i++){
        if(max<b[i]){
            max=b[i];
            c=i;
        }
    }
    printf("Maximum Frequency is: %d\nNumber with maximum Frequency is: %d",max,c);
}
