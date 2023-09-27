#include<stdio.h>
void main(){
	int n,i,sum1=0,sum=0,sum2=0;
	printf("enter number n: ");
	scanf("%d",&n);
	
	while(i<=n){
	
	   if(i%2==0){
	      sum1=sum1+i;
	       printf(" + %d",sum1);
	   }
	else{
	    	sum2=sum2+i;
	    	printf(" - %d ",sum2);
		}
		i++;
	}
	sum=sum2-sum1;
		printf("%d",sum);
}
