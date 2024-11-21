#include <stdio.h>
int main() {
	//khai bao bien
    float celsius, fahrenheit;
    // nhap nhiet do Celsiusx
    printf("Nhap nhiet do  Celsius: ");
    scanf("%f", &celsius);
    //chuyen do tu Celsius sang fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    //in ra ket qua
    printf("Nhiet do theo Fahrenheit là: %.2f\n", fahrenheit);
    return 0;
}

