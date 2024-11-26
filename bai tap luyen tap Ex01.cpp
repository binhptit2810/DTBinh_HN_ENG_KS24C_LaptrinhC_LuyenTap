#include <stdio.h>

int main(){
	// khai bao bien de nguoi dung nhap 5 so nguyen
	int number1, number2,number3,number4,number5;
	int tongle=0;
	//yeu cau nguoi dung nhap vao 5 so nguyen
	printf("Moi ban nhap so nguyen thu nhat : ");
	scanf("%d",& number1);
	printf("Moi ban nhap so nguyen thu hai : ");
	scanf("%d",& number2);
	printf("Moi ban nhap so nguyen thu ba : ");
	scanf("%d",& number3);
	printf("Moi ban nhap so nguyen thu bon : ");
	scanf("%d",& number4);
	printf("Moi ban nhap so nguyen thu nam : ");
	scanf("%d",& number5);
	// tinh tong nhung so le ma nguoi dung nhap vao
	if (number1 % 2 != 0) {
		tongle += number1;
	}
    if (number2 % 2 != 0){
    	tongle += number2;
	}
    if (number3 % 2 != 0){
    	tongle += number3;
	}  
    if (number4 % 2 != 0){
    	tongle += number4;
	}
    if (number5 % 2 != 0){
    	tongle += number5;
	}
	// in tong nhung so le ra ngoai man hinh
	printf("Tong nhung so le la : %d", tongle);
	return 0;
}
