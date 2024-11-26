#include <stdio.h>

int main (){
	// khai bao bien de nguoi dung nhap vao 5 so nguyen
	int number1, number2,number3,number4,number5 ;
	int sochan =0 , sole=0;
	// yeu cau nguoi dung nhap vao 5 so nguyen
	printf("Moi ban nhap so nguyen thu nhat : ");
	scanf("%d",& number1);
	printf("Moi ban nhap so nguyen thu hai : ");
	scanf("%d",&number2);
	printf("Moi ban nhap so nguyen thu ba : ");
	scanf("%d",&number3);
	printf("Moi ban nhap so nguyen thu bon : ");
	scanf("%d",&number4);
	printf("Moi ban nhap so nguyen thu nam : ");
	scanf("%d",&number5);
	// kiem tra so luong so chan va le 
	if(number1 % 2 ==0){
		sochan++;
	}else{
		sole++;
	}
	if(number2 % 2 ==0){
		sochan++;
	}else{
		sole++;
	}
	if(number3 % 2 ==0){
		sochan++;
	}else{
		sole++;
	}
	if(number4 % 2 ==0){
		sochan++;
	}else{
		sole++;
	}
	if(number5 % 2 ==0){
		sochan++;
	}else{
		sole++;
	}
	// in so luong so chan va so le ra ngoai man 
	printf("So luong so le la %d so chan la %d", sole, sochan);
	return 0;
	
}
