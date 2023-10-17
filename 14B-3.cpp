#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("enter n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter an element into arr[%d]: " , i);
		scanf("%d",&arr[i]);
	}
	 for(i=0;i<n;i++){
	 	if(arr[i]%3==0){
	 		count++;
	 }
	}
	 printf("total divisible by 3 number: %d",count);
	 
	 return 0;
}
