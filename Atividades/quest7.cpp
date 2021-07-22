#include <iostream>
#include <cctype>

void hasLowercase(std::string name)
{
  std::string newName;
  for (int i = 0; i <= static_cast<int>(name.size()); i++)
  {
    newName += tolower(name[i]);
  }
  std::cout << newName << std::endl;
}
int main()
{
  hasLowercase("ESTAMOS EM QUARENTENA");
  return 0;
}
