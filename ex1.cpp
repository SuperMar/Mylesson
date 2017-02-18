#include<iostream>
int main()
{
  int a = 0, b = 0, c;
  std::cout << "Enter two numbers: " << std::endl; 
  std::cin >> a >> b;
  c = a < b ? a : b;
  while(c >= a && c <= b){
    std::cout << c << std::endl;
    ++c;
  }
  return 0;
}
