#include<stdio.h>
int main(){
	int a;
	printf("nhap mot so a:");
	scanf("%d",&a);
	if (a>0){
		printf("gia tri tuyet doi cua a la:%d",a);
	}else if (a<0){
		printf("gia tri tuyet doi cua a la:-%d",a);
	}return 0;
}
