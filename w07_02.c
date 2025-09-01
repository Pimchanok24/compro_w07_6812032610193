#include <stdio.h>

int main() {
    int x, y;

    // รับค่าตัวแปรจากผู้ใช้
    printf("กรุณาใส่ค่าตัวเลข x: ");
    scanf("%d", &x);

    printf("กรุณาใส่ค่าตัวเลข y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า และแสดงผล
    if (x > y) {
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");
    } else {
        printf("x เท่ากับ y\n");
    }

    return 0;
}
