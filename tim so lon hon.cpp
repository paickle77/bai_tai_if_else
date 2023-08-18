#include<stdio.h>
int main(){
	int a,b;
	printf("nhap mot so a :");
	scanf("%d",&a);
	printf("nhap mot so b:");
	scanf("%d",&b);
	if(a>b){
		printf("so lon hon la:%d",a);
	}else if(a<b){
		printf("so lon hon la:%d",b);
	}return 0;
}
