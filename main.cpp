#include <iostream>
#include <vector>

#include "calculadoraLucio.hpp"

int main() {
  // Montando a calculadora como numa linha de produção
  TeclaLucio tecla1;
  tecla1.pressione();

  TecladoLucio teclado1;
  teclado1.adicioneTecla(tecla1);

  TelaLucio tela1;

  UcpLucio ucp1;
  ucp1.definaTela(&tela1);

  CalculadoraLucio calculadora1;
  calculadora1.definaTela(&tela1);
  calculadora1.definaTeclado(&teclado1);
  calculadora1.definaUcp(&ucp1);

  // Testando a calculadora
  calculadora1.obtenhaTela()->adicione(UM);
  calculadora1.obtenhaTela()->adicione(ZERO);

  std::cout << "All it's okey!\n";
  return 0;
}
