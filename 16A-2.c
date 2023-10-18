#include<stdio.h>
void main(){
	int i,j,zero=0,neg=0,pos=0;
	
	
	
	int a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter the element a[%d][%d]:", i,j);
			scanf("%d" , &a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==0){
				zero++;
			}
			else if(a[i][j]<0){
				neg++;
			}
			else{
				pos++;
			}
			printf("[%d][%d]: %d",i,j,a[i][j]);
		}
		printf("\n");
		printf("pos:%d,zero=%d,neg=%d",zero,pos,neg);
	}

}
