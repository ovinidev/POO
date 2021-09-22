#include <iostream>
#include <cctype>

std::string hasUppercase(std::string name)
{
  for (int i = 0; static_cast<int>(name.size()); i++)
  {
    if (isupper(name[i]))
      return "Tem letra maiúscula";
  };
  return "Nao tem letra maiúscula";
};

int main()
{
  std::cout << hasUppercase("Estamos em Quarentena") << std::endl;
  return 0;
}
