#include<iostream>
int main()
{
  int val = 0;
  std::cout << (std::cin >> var) << std::endl; // (wrong) std::cin (返回类型void*)正常读入返回 &istream, 遇错返回0
}

//std::cout << "/*"
//std::cout << "*/"
//std::cout << /* "*/" */
//std::cout << /* "*/" /* "/*" */
