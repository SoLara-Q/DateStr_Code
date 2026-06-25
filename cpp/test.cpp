#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 定义一个整数向量 inner，用于存储乘法表的每一项
  vector<int> inner;
  // 计数器 count，用于追踪输出向量中的元素位置
  int count = 0;
  
  // 生成 1 到 9 的乘法表
  for (int i = 1; i < 10; i++) {
    // 内层循环，用于输出每一行的乘法结果
    for (int j = 1; j <= i; j++) {
      inner.push_back(i * j); // 将乘法结果存储到 inner 向量中
      cout << setw(4) << inner[count++];  // 输出当前存储的乘法结果，格式化为宽度为 4 的字段
    }
    cout << endl; // 换行，开始输出下一行的乘法结果
  }

  system("pause"); // 暂停程序，等待用户按键
  return 0;
}