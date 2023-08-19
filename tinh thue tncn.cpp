#include<stdio.h>
int main(){
	int nguoiphuthuoc;
	double luong,thuetncn,luongchuatinh;
	printf("so nguoi phu thuoc trong gia dinh:");
	scanf("%d",&nguoiphuthuoc);
	printf("luong chua tinh thue :");
	scanf("%lf",&luongchuatinh);
	luong = luongchuatinh-11000000 - (nguoiphuthuoc * 4400000);
	if (luong<0){
		printf("khong mat thue tncn");
		}else if (luong<5000000){
		thuetncn =  luong *5/100;
		printf("1thuetncn la:%lf",thuetncn);
	}else if (luong>5000000&&luong<=10000000){
		double bac1  = 5000000 * 5 /100;
			       double bac2  = (luong - 5000000)*10/100;
				thuetncn = bac1 +bac2;
				printf("2thuetncn la:%lf",thuetncn);
	}else if (luong>10000000&&luong<=18000000){
	double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (luong - 10000000 )*15/100;
	thuetncn=bac1+bac2+bac3;
	printf("3thuetncn la:%lf",thuetncn);
	}else if (luong>18000000&&luong<=32000000){
		double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (luong - 18000000)*20/100;
			       thuetncn=bac1+bac2+bac3+bac4;
			       printf("4thuetncn la:%lf",thuetncn);
	}else if (luong>32000000&&luong<=52000000){
		double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (32000000 - 18000000)*20/100;
			       double bac5  = (luong - 32000000)*25/100;
			       thuetncn=bac1+bac2+bac3+bac4+bac5;
	printf("5thue tncn la:%lf",thuetncn);
	}else if (luong>52000000&&luong<=80000000){
		double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (32000000 - 18000000)*20/100;
			       double bac5  = (52000000 - 32000000)*25/100;
 			       double bac6  = (luong - 52000000)*30/100;
 			        thuetncn=bac1+bac2+bac3+bac4+bac5+bac6;
 			       printf("6thuetncn la:%lf",thuetncn);
	}if (luong>80000000){
		double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (32000000 - 18000000)*20/100;
			       double bac5  = (52000000 - 32000000)*25/100;	
 			       double bac6  = (80000000 - 52000000)*30/100;
			       double bac7  = (luong - 80000000)*35/100;
			       thuetncn=bac1+bac2+bac3+bac4+bac5+bac6+bac7;
			       printf("7thue tncn la:%lf",thuetncn);
	}return 0;
}

