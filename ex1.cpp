#include<iostream>
int main()
{
  int a = 0, b = 0, c, d, n;
  std::cout << "Enter two numbers: " << std::endl; 
  std::cin >> a >> b;
  c = a < b ? a : b;
  d = a > b ? a : b;
  while(n >= c && n <= d){
    std::cout << n << std::endl;
    ++c;
  }
  return 0;
}
