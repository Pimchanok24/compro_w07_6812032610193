#include <stdio.h>

int main() {
    int age, vip_level;
    float amount;
    float discount = 0.0;

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip_level);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // คำนวณส่วนลดตามเงื่อนไข
    if (age > 60 || vip_level == 3 || vip_level == 4) {
        discount = 20.0;
    } else if (age >= 30 && age <= 40 && amount >= 2000) {
        discount = 15.0;
    } else if (age >= 18 && age <= 25 && amount >= 1000) {
        discount = 10.0;
    } else if (vip_level == 5 && amount >= 50000) {
        discount = 25.0;
    }

    // แสดงผล
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, amount);

    if (discount > 0.0) {
        printf("Discount received: %.0f%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("Thank you for shopping with us!\n");

    return 0;
}
