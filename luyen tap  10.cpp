#include <stdio.h>

int main(){
	// khai bao bien de nguoi dung nhap vao 1 so nguyen
	int number;
	// yeu cau nguoi dung nhap vao 1 so nguyen 
	printf("Moi ban nhap vao 1 so nguyen : ");
	scanf("%d",& number);
	
    while (number <= 1) {
        printf("So ban vua nhap khong phai la so nguyen to. Vui long nhap lai: ");
        scanf("%d", &number);
    }

    // kiem tra so nguyen to
    int check = 1;  
    for (int i = 2; i < number; i++) { 
        if (number % i == 0) {
            check = 0; 
            break;
        }
    }

    if (check) {
        printf("So ban vua nhap la so nguyen to\n");
    } else {
        printf("So ban vua nhap khong phai la so nguyen to\n");
    }
	

	return 0;
}
