#include<stdio.h>
int main(){
	int a;
	printf("nhap so do goc a:");
	scanf("%d",&a);
	if(a>0&&a<90){
		printf("a la goc nhon");
	}else if(a>90&&a<180){
		printf("a la goc tu");
	}else if(a>180){
		printf("nhap sai gia tri goc:0<a<180");
	}
	else{
		printf("a la goc vuong");
	}return 0;
}
