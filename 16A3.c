#include<stdio.h>
void main(){
	int i,j;
	int a[20][2];
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
	
			if(j==0){
				printf("enter student roll no: ");
				scanf("%d",&a[i][j]);
			}
			else{
				printf("enter marks:", i,j);
			scanf("%d" , &a[i][j]);
			}
			
		}
	}
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d]: %d",i,j,a[i][j]);
		}
		printf("\n");
	}

}
