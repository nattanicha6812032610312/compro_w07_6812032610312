#include <stdio.h>

int main() {
    int level;

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบระดับสมาชิก
    if (level == 1) {
        printf("Silver Member: 5%% discount\n");
    } else if (level == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (level == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        printf("Diamond Member: All benefits + VIP events\n");
    } else {
        // กรณีกรอกผิด
        printf("Invalid membership level\n");
    }

    return 0;
}
// ตัวอย่างการทดสอบ (Test Cases)
// -------------------------------------------
// Input: 1 → Silver Member: 5% discount
// Input: 2 → Gold Member: 10% discount + Reward points
// Input: 3 → Platinum Member: 15% discount + Reward points + Birthday gift
// Input: 4 → Diamond Member: All benefits + VIP events
// Input: 0 → Invalid membership level
// Input: 5 → Invalid membership level
// Input: -2 → Invalid membership level