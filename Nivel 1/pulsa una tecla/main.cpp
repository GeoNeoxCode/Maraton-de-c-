#include <iostream>

using namespace std;

int main()
{
  int contador, acumulador;
  acumulador=0;
  for(contador = 0; contador < 10; contador++)
  {
    acumulador = acumulador + contador;
  }
  cout << "\t\n La suma de los diez primeros números es :" <<  
     acumulador << "\n" << endl;
  cout << "Pulse una tecla para acabar...";
  cin.get();
  return 0;
}