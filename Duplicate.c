#include<stdio.h>
#include<conio.h>
int absol(int);
int main(){
	int i,n,a[100],flag=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter Array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[absol(a[i])]>0 && a[absol(a[i])]!=n)
			a[absol(a[i])]=a[absol(a[i])]*(-1);
		else if(a[absol(a[i])]<0 || a[absol(a[i])]*(-1)){
			printf("Duplicate found");
			flag=1;
			break;
		}
		else
			a[absol(a[i])]=n;
	}
	if(flag==0)
		printf("No Duplicate");
	return 0;
}
int absol(int x){
	if(x<0)
		return x*(-1);
	else
		return x;
}
