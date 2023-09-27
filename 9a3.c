#include<stdio.h>
void main(){
	int x,y,a=1,i=1;
	printf("enter value of x: ");
	scanf("%d",&x);
	printf("enter value of y: ");
	scanf("%d",&y);
	 while(i<=y){
	 	a*=x;
	 	i++;
	 }
	 printf("%d",a);
}
