#include <stdio.h>
int main(){
	//khai bao bien ban kinh, chu vi, dien tich
	const float pi=3.14;
	float banKinh;
	float chuVi;
	float dienTich;
	//Nhap gia tri ban kinh
	printf("Nhap ban kinh hinh tron r :");
	scanf("%f", &banKinh);
	//Tính chu vi,dien tich
	chuVi = 2 * pi * banKinh;
	dienTich = pi * banKinh * banKinh;
	//HIen thi ket qua
	printf("chu vi la: %2f\n", chuVi);
	printf("dien tich la:%2f\n", dienTich);
	return 0;
}	
