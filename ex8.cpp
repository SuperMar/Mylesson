#include <iostream>
using namespace std;
int main()
{
  double dval = 3.14;     //const int temp = dval;
  const int &ri = dval;   //const int &ri = temp;
  //int &ri = dval; 编译器报错,修改的是temp的值
  
  int i = 42;
  int &r1 = i;
  const int &r2 = i;
  r1 = 0; //正确
  r2 = 0; //错误,指向常量的引用
  
  const double pi = 3.14;
  const double *cptr = &pi;
  
  double dval = 3.14;
  const double *cptr = &dval;
  double *cptr1 = &dval;
  *cptr1 = 3.0;
  
  int errNumb = 0;
  int *const curErr = &errNumb; //常量指针
  const double pi = 3.14159;
  const double *const pip = &pi; //指向常量的常量指针
  *curErr = 10;
  
  return 0;
}
