#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	printf("nhap so c:");
	scanf("%d",&c);
	if(a>b&&a>c){
		printf("a la so lon nhat:%d",a);
	}else if(b>a&&b>c){
		printf("b la so lon nhat:%d",b);
	}else {
		printf("c la so lon nhat:%d",c);
	}return 0;
}
