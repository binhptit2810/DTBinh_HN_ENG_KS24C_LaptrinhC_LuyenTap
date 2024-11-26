#include <stdio.h>

int main(){
	// khai bao bien de luu mat khau cho truoc
	int code = 1234;
	int check;
	// yeu cau nguoi dung nhap mat khau
	printf("Moi ban nhap mat khau : ");
	scanf("%d", & check);
	
	while ( check != code){
		printf("Mat khau ban nhap chua chinh xac. Vui long nhap lai\n");
		scanf("%d", &check);
	}
	printf("Mat khau ban nhap la chinh xac");
	return 0;
}
