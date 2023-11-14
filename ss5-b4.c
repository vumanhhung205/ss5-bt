#include<stdio.h>
int main(){
	float a,b,c;
	printf("nhap so luong: ");
	scanf("%f", &a);
	if(a>0 && a<=5){
		b=a*5/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>5 && a<=10){
		b=a*10/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>5 && a<=10){
		b=a*10/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>10 && a<=18){
		b=a*15/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>18 && a<=32){
		b=a*20/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>32 && a<=52){
		b=a*25/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>52 && a<=80){
		b=a*30/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}else if(a>80){
		b=a*35/100;
		c=a-b;
		printf("luong nhan vien nhan duoc la:%.2f", c);
	}

}
