#include <stdio.h>
int main() {
    float score;     //ตัวแปรเก็บคะแนนเดิม
    float finalScore;  //ตัวแปรเก็บคะแนนรวม (หลังเพิ่ม %)
    
    //รับค่าคะแนนสอบจากผู้ใช้ 
    printf("Enter youe midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบว่าคะแนน >= 50 หรือไม่
    if (score >= 50) {
        // ถ้าคะแนนมากกว่าหรือเท่ากับ 50 เพิ่มคะแนนพิเศษ 5%
        finalScore = score + (score * 0.05);
        printf("You got a bonus 5%%!\n");
    } else {
        // ถ้าคะแนนน้อยกว่า 50 ไม่มีโบนัส
        finalScore = score;
    }

    //แสดงผลคะแนนรวม (รวมโบนัสแล้วถ้ามี)
    printf("Final score = %.2f\n", finalScore);

    //แสดงข้อความปิดท้าย
    printf("End of evaluation\n");

    return 0;
}