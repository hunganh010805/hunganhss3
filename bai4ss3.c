#include <stdio.h>
int main(){
	//khai bao bien
	float diemToan,diemVan,diemAnh;
	float tongDiem,diemTrungbinh;
	//nhap diem
	printf("Nhap diem toan");
	scanf("%f", &diemToan);
	printf("Nhap diem van");
	scanf("%f", &diemVan);
	printf("Nhap diem anh");
	scanf("%f", &diemAnh);
	//tinh toan
	tongDiem = diemToan + diemVan + diemAnh;
	diemTrungbinh = tongDiem / 3;
	//in ra ket qua
	printf("Tong diem = %.f \n", tongDiem);
	printf("Diem trung binh = %.2f \n",diemTrungbinh);
	return 0;
}	
