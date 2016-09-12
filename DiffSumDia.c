#include<stdio.h>

int main(){
    int arr[50][50],n,i,j,sumPri=0,sumSec=0,diff;
    printf("Enter order of matrix: ");
    scanf("%d",&n);
    printf("Enter elements of the matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Inputed matrix is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
            if(i==j)
                sumPri+=arr[i][j];
            if(i+j==n-1)
                sumSec+=arr[i][j];
        }
        printf("\n");
    }
    diff=sumPri-sumSec;
    if(diff<0)
        diff=diff*(-1);
    printf("Absolute difference between sum of Diagonals is: %d",diff);
    return 0;
}
