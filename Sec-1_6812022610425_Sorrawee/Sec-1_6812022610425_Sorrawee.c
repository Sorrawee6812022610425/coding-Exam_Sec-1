#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of OT days(1-10): ");
    scanf("%d", &n);
    float scores [n][10]; // ใช้ array ในการเก็บชั่วโมง OT ที่ทำงาน


for(i = 0; i < n; i++) {
    printf("Enter OT hours for Day %d:\n", i + 1);
    scanf("%f", &scores[i][0]);
}

   return 0 ;
}