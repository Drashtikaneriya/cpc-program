#include<stdio.h>
void main(){
	int n,a,sum=0,cpn;
	printf("enter number: ");
	scanf("%d",&n);
	cpn=n;
	while(n!=0){
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	n=cpn;
	if(sum==n){
		printf("palindrone");
	}
	else{
		printf("not palindrone");
	}
}
