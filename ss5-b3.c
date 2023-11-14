#include<stdio.h>
int main(){
	int phithang = 25000;
	int gia,gia1,gia2,gia3,gia4;
	int phut;
	printf("nhap so phut: ");
	scanf("%d",&phut);
	if (phut<=50){
		gia1 = phut*600;
		printf("%d",gia1);	
	}
	if (phut>50 && phut>200){
		gia2 = phut*400;
		printf("%d",gia2);	
	if (phut < 400){
		gia3 = phut*200;
		printf("%d",gia3);	
	if (phut>400){
		gia4 = phut*100;
		printf("%d",gia4);	
				}
			}
		}
	gia = gia1+gia2+gia3+gia4;
	printf("gia cuoc dien thoai la: %d", gia);
}
