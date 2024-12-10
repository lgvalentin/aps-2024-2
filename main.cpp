#include <iostream>
#include <vector>

#include "calculadoraLucio.hpp"

int main() {

  TeclaLucio tecla1;
  tecla1.pressione();

  TecladoLucio teclado1;
  teclado1.adicioneTecla(tecla1);

  TelaLucio t1;
  t1.adicione(ZERO);
  t1.adicione(UM);
  t1.limpe();
  t1.definaSinal(NEGATIVO);
  t1.adicione(UM);
  t1.definaSeparadorDecimal();
  t1.adicione(ZERO);

  std::cout << "All it's okey!\n";
  return 0;
}
