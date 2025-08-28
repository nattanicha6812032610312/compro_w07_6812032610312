#include <stdio.h>

int main() {
    int level;

    // รับค่าจากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบระดับที่ไม่อนุญาตก่อน
    if (level <= 0) {
        printf("The level below 1 is not allowed\n");  // แจ้งเตือนถ้า level <= 0
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");  // แจ้งเตือนถ้า level > 4
    } else {
        // ตรวจสอบระดับที่อนุญาตโดยใช้ switch
        switch (level) {
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
                printf("Invalid level\n"); // เผื่อกรณีหลุดจากเงื่อนไข
        }
    }

    return 0;
}
/*
ผลลัพธ์และอภิปรายในแต่ละกรณี
กรณีที่ level = -4
=> ผลลัพธ์: The level below 1 is not allowed
=> วิเคราะห์: เป็นค่าที่น้อยกว่าหรือเท่ากับ 0 จึงเข้า if แรกและแจ้งเตือน

กรณีที่ level = 0
=> ผลลัพธ์: The level below 1 is not allowed
=> วิเคราะห์: เป็นค่าที่น้อยกว่าหรือเท่ากับ 0 เช่นเดียวกับ -4

กรณีที่ level = 1
=> ผลลัพธ์: Beginner
=> วิเคราะห์: เข้า case 1 ใน switch และแสดงระดับ Beginner

กรณีที่ level = 2
=> ผลลัพธ์: Intermediate
=> วิเคราะห์: เข้า case 2 ใน switch และแสดงระดับ Intermediate

กรณีที่ level = 3
=> ผลลัพธ์: Advanced
=> วิเคราะห์: เข้า case 3 ใน switch และแสดงระดับ Advanced

กรณีที่ level = 4
=> ผลลัพธ์: Expert
=> วิเคราะห์: เข้า case 4 ใน switch และแสดงระดับ Expert

กรณีที่ level = 100
=> ผลลัพธ์: The level above 4 is not allowed
=> วิเคราะห์: เป็นค่าที่มากกว่า 4 จึงเข้า else if และแจ้งเตือน
*/