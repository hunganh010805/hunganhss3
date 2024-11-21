#include <stdio.h>

int main() {
	//khai bao bien
    float canhDay,chieuCao,dienTich;
    //nhap canh day va chieu cao
    printf("Canh day la: ");
    scanf("%f", &canhDay);   
    printf("Chieu cao la: ");
    scanf("%f", &chieuCao);
    //tinh dien tich tam giac
    dienTich = (canhDay * chieuCao) / 2;
    //in ra ket qua
    printf("Dien tich tam giac là: %.2f\n", dienTich);

    return 0;
}

