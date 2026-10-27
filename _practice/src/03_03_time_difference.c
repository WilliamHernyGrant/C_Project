#include <stdio.h>
#include <stdlib.h> // 导入 abs 函数（求绝对值）

int main() {
    int hour1, minute1, hour2, minute2;
    int total_min1, total_min2, diff_min, ih, im;

    printf("Please enter time 1 and time 2 (e.g., 11:20 10:40): ");
    scanf("%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);

    // 1. 将时间统一转换为总分钟数，方便计算
    total_min1 = hour1 * 60 + minute1;
    total_min2 = hour2 * 60 + minute2;

    // 2. 计算两个总分钟数的差值，并加上 abs() 求绝对值，彻底消灭负数
    diff_min = abs(total_min1 - total_min2);

    // 3. 将分钟差转换回 小时 和 分钟
    ih = diff_min / 60; // 除以 60 获取小时
    im = diff_min % 60; // 对 60 取余获取分钟

    // 4. 输出
    printf("The time difference between Time 1 and Time 2 is %d hours %d minutes.\n", ih, im);

    return 0;
}