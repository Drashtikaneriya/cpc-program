#include<stdio.h>
void main(){
	float a,b;
	int c;
	printf("enter the number a & b: ");
	scanf("%f %f",&a,&b);
	printf("\nenter 1=add,2=sub,3=mult,4=div : ");
	scanf("%d",&c);
	switch(c){
		
		case 1: printf("add=%f",a+b);
		break;
		case 2: printf("sub=%f",a-b);
		break;
		case 3: printf("mult=%f",a*b);
		break;
		case 4: printf("div=%f",a/b);
		break;
		default: printf("invalid");
		break;
	}
}
