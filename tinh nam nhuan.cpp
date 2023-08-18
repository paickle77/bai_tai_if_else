#include<stdio.h>
int  main(){
	int a;
	printf("nhap nam:");
	scanf("%d",&a);
	if (a%4==0&&a%100!=0||a%400==0){
		printf("day la nam nhuan");
	}else {
		printf("day la nam thuong");
	}return 0;
}
