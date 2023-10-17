#include<stdio.h>
int main(){
	int n,i,a;
	printf("enter n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter an element into arr[%d]: " , i);
		scanf("%d",&arr[i]);
	}
	
	printf("enter a to search an element : ");
	scanf("%d", &a);
	
	for(i=0;i<n;i++){
		if(arr[i]==a){
			 printf("a is not found in array");
		}
		else{
		
		printf("a is found in array");
	}
    break;
	}
	 return 0;
}
