#include<stdio.h>
void main(){
	int n1,n2,i,j;
	
	printf("enter row: ");
	scanf("%d",&n1);
	printf("enter col:");
	scanf("%d",&n2);
	
	int a[n1][n2];
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("enter the element a[%d][%d]:", i,j);
			scanf("%d" , &a[i][j]);
		}
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("[%d][%d]: %d",i,j,a[i][j]);
		}
		printf("\n");
	}

}
