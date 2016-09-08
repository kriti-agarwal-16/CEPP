#include<stdio.h>
int main(){
	int a[100],i,j,n;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	printf("Enter elements of the array: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				a[j]=a[j+1]+a[j];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	printf("Array after sorting is: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
