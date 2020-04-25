#include <iostream>
#include <string>

long long int power(int base, int exponent);

void byteTester()
{
  short int shortInt;
  std::cout << sizeof(short int) << '\n';
  std::cout << sizeof(int) << '\n';
  std::cout << sizeof(long int) << '\n';
  std::cout << sizeof(long long int) << '\n';
}

long long int getMax(int bytes)
{
  unsigned long long int total = 0;
  for (short int i = 0; i < bytes * 8; i++)
  {
    unsigned long long int result = power(2, i);
    std::cout << "power result: " << result << '\n';
    total += result;
    std::cout << "total so far: " << total << '\n';
  }
  return total;
}

long long int power(int base, int exponent)
{
  unsigned long long int total = 1;
  for (int i = 1; i <= exponent; i++)
  {
    total *= base;
  }
  return total;
}

void print(int val)
{
  std::cout << "val: " << val << '\n';
  std::cout << "location: " << &val << "\n\n";
}

int main()
{
  int x = 5;
  int *y = &x;
  std::cout << "x: " << x << '\n';
  std::cout << "address: " << &x << "\n";
  std::cout << "y: " << y << '\n';
  std::cout << "address: " << &y << "\n";
  std::cout << "value: " << *y << "\n\n";

  x = 4;
  std::cout << "x: " << x << '\n';
  std::cout << "address: " << &x << "\n";
  std::cout << "y: " << y << '\n';
  std::cout << "address: " << &y << "\n";
  std::cout << "value: " << *y << "\n\n";

  // std::cout << z << '\n';
  // std::cout << &z << "\n\n";

  // x = 4;

  // std::cout << x << '\n';
  // std::cout << &x << "\n\n";

  // std::cout << *y << '\n';
  // std::cout << &y << "\n\n";

  // std::cout << *z << '\n';
  // std::cout << &z << "\n\n";

  return 0;
}