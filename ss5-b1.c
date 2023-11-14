#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap so a: ");
	scanf("%d", &a);
	int b;
	printf("Nhap so b: ");
	scanf("%d", &b);
	int c;
	printf("Nhap so c: ");
	scanf("%d", &c);
	int x1,x2;
	float nghiemkep = -b/2*a;
	int delta = b*b-4*a*c;
	float candelta = (float)sqrt(b*b-4*a*c);
	if ( delta < 0 ){
		printf("phuong trinh vo nghiem");
	}else if ( delta == 0 ){
		printf("phuong trinh co nghiem kep: %f", nghiemkep );
	}else {
		printf("phuong trinh co 2 nghiem phan biet: ");
		printf("nghiem thu nhat la: %d", x1= (-b - candelta)/2*a );
		printf("nghiem thu hai la: %d", x2= (-b + candelta)/2*a );	
	}

}
