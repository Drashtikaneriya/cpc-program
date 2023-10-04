#include<stdio.h>
void main(){
	int n,i=1,sum=0,j;
	printf("enter number: ");
	scanf("%d",&n);
	 
	for(i=1;i<=n;i++) {
		
		for(j=1;j<=i;j++){
			sum=sum+j;
		}
	}
	printf("%d",sum);
}
