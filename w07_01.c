#include <stdio.h>

int main() {
    float score, finalScore;

    // รับค่าคะแนนจากผู้ใช้
    printf("กรุณาใส่คะแนนสอบ Midterm: ");
    scanf("%f", &score);

    // ตรวจสอบและเพิ่มคะแนนพิเศษถ้าได้ >= 50
    if (score >= 50) {
        finalScore = score + (score * 0.05);
    } else {
        finalScore = score;
    }

    // แสดงคะแนนรวม
    printf("คะแนนรวมหลังการประเมิน: %.2f\n", finalScore);

    // แสดงข้อความจบ
    printf("End of evaluation\n");

    return 0;
}