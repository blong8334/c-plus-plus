#include <iostream>

int add(int, int);
int bobby();
// int add(int, int, char);

int add(int x, int y, char s)
{
  return x + y;
}

int main()
{
  std::cout << add(1, 2) << '\n';

  return 0;
}