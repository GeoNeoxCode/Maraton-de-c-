#include <iostream>
#include <string> // Para usar el tipo string

int main() {
  int numero_entero = 10;
  double numero_decimal = 3.14;
  char caracter = 'A';
  std::string texto = "Ejemplo";
  bool valor_booleano = true;

  std::cout << "Entero: " << numero_entero << std::endl;
  std::cout << "Decimal: " << numero_decimal << std::endl;
  std::cout << "Carácter: " << caracter << std::endl;
  std::cout << "Texto: " << texto << std::endl;
  std::cout << "Booleano: " << valor_booleano << std::endl;

  return 0;
}