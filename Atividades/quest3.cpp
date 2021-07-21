#include <iostream>

int returnsZero()
{
  static unsigned x = 0;
  return x++;
};

int main()
{
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  std::cout << returnsZero() << std::endl;
  return 0;
}
