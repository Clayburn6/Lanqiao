BASIC-8 基础练习 回文数  
时间限制：1.0s   内存限制：512.0MB
提交此题   锦囊1   锦囊2
问题描述
　　1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的四位十进制数。

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            cout << i << j << j << i << endl;
        }
    }
    return 0;
}