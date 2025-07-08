#include<iostream>

using namespace std;

// 原地哈希找出重复的数字，数组长度n，数字在0-n-1之间

bool duplicate(int[] numbers, int length; int* ans) {
    // 检查数组
    if (numbers == nullptr || length == 0) {
        return false;
    }
    // 检查数组中的数字
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0 || numbers[i] >= length) {
            return false;
        }
    }
    // 原地哈希:将每个数x交换到对应索引位置：即numbers[x] = x
    for (int i = 0; i < length; i++) {
        while (numbers[i] != i) {
            if (numbers[i] == numbers[numbers[i]]) {
                *ans = numbers[i];
                return true;
            }
            int tmp = numbers[i];
            numbers[i] = numbers[tmp];
            numbers[tmp] = tmp;
        }
    }

    return false;
}