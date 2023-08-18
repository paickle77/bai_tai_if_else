#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap so do canh a:");
	scanf("%d",&a);
	printf("nhap so do canh b:");
	scanf("%d",&b);
	printf("nhap so do canh c:");
	scanf("%d",&c);
	if (a=b&&a=c){
		printf("tam giac nay la tam giac deu");
	}else if (a=b&&a!=c||a=c&&a!=b){
		printf("tam giac nay la tam giac can");
	}else{
		printf("tam giac nay la tam giac thuong");
	}return 0;
}
