#include<stdio.h>
void main(){
	int i,j,n,f=1,sum=0;
	float e=1;
	printf("enter number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		f=f*i;
		
		for(j=1;j<=i;j++){
		sum=sum+j;
	}
	e=e+1/f;
}  
printf("%f",e);
}
