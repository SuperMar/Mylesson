#include<iostream>
int main()
{
  int sum = 0;
  for(int val = 0; val <= 10; ++val) //变量val仅在循环入口出执行一次，循环结束后不能使用
    sum += val;
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}
