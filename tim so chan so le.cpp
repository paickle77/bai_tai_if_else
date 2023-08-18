#include<stdio.h>
int main(){
	int a;
	printf("nhap mot so:");
	scanf("%d",&a);
	if (a%2==0){
		printf("day la so chan");
	}else if (a%2!=0){
		printf("day la so le");
	}return 0;
}
