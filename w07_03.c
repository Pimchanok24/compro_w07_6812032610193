#include <stdio.h>

int main() {
    int level;

    // รับค่าจากผู้ใช้
    printf("Enter level: ");
    scanf("%d", &level);

    // ตรวจสอบช่วงของ level
    if (level < 0) {
        printf("The level below 0 is not allowed\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    } else {
        // ใช้ switch ตรวจสอบ level
        switch (level) {
            case 0:
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
            default:
                printf("Invalid level\n");
        }
    }

    return 0;
}
