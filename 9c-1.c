#include<stdio.h>
void main(){
	int n,a;
	printf("enter number n: ");
	scanf("%d",&n);
	 
	while(n>0){
	a=n%10;
	switch(a){
     	case 0 :printf("zero ");
		break;
		case 1 :printf("one ");
		break;
		case 2:printf("two ");
		break;
		case 3 :printf("three ");
		break;
		case 4:printf("four ");
		break;
		case 5 :printf("five ");
		break;
		case 6 :printf("six ");
		break;
		case 7 :printf("seven ");
		break;
		case 8 :printf("eight ");
		break;
		case 9 :printf("nine");
		break;
	}
	n=n/10;
	}
}
