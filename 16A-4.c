#include<stdio.h>
void main(){
	int r,c,i,j;
	
	printf("enter row: ");
	scanf("%d",&r);
	printf("enter col:");
	scanf("%d",&c);
	
	int a[r][c];
	int b[r][c];
	int x[r][c];
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the element a[%d][%d]:", i,j);
			scanf("%d" , &a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the element b[%d][%d]:", i,j);
			scanf("%d" , &b[i][j]);
		}
	}
		printf("\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			x[i][j]=a[i][j]+b[i][j];
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}

}
