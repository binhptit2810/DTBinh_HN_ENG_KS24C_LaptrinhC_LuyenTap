#include <stdio.h>

int main() {
	// khai bao bien year,month,day
    int year, month, days;

    // yeu cau nguoi dung nhap thang va nam
    printf("Moi ban nhap nam: ");
    scanf("%d", &year);
    printf("Moi ban nhap thang: ");
    scanf("%d", &month);

    // Kiem tra thang co hop le khong
    if (month < 1 || month > 12) {
        printf("Thang khong hop le! (Thang phai tu 1 den 12)\n");
    }

    // so ngay trong thang
    switch (month) {
   	// Các tháng có 31 ngày
        case 1: 
         days = 31;  
            break;
		case 3: 
		 days = 31;
            break;
		case 5: 
		 days = 31;  
            break;
		case 7:
		 days = 31;  
            break; 
		case 8: 
		 days = 31;
            break;
		case 10: 
		 days = 31;  
            break;
		case 12:
            days = 31; 
            break;
    // Các tháng có 30 ngày
        case 4:
        	days = 30;  
            break;
		case 6: 
		    days = 30;  
            break;
		case 9: 
		    days = 30;  
            break;
		case 11:
            days = 30; 
            break;
        // kiem tra nam nhuan cua thang 2
        case 2:
        // nam nhuan thi co 29 ngay
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;  
            } else {
        // nam khong nhuan thi co 28 ngay
                days = 28;  
            }
            break;
        default:
            days = 0;
            break;
    }

    // In ket qua ra ngoai man hinh
    printf("Thang %d cua nam %d co %d ngay.\n", month, year, days);

    return 0;
}

