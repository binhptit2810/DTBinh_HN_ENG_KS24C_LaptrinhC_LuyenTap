#include <stdio.h>

int main() {
	// kiem tra cac so tu 1 den 100
    for (int i = 1; i <= 100; i++) {
        // kiem tra neu so nay la boi so cua ca 3 va 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // kiem tra neu la boi so cua 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // kiem tra neu la boi so cua 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // neu khong phai la boi so cua 3 va 5 thi in so do ra man hinh
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}

