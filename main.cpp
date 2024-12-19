#include <iostream>
#include <vector>

#include "telaLucio.hpp"
#include "teclaLucio.hpp"
#include "tecladoLucio.hpp"
#include "ucpLucio.hpp"
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
  calculadora1.obtenhaTela()->limpe();
  calculadora1.obtenhaTela()->definaSinal(NEGATIVO);
  calculadora1.obtenhaTela()->adicione(UM);
  calculadora1.obtenhaTela()->adicione(ZERO);
  calculadora1.obtenhaTela()->definaSeparadorDecimal();
  calculadora1.obtenhaTela()->adicione(UM);

  
  ucp1.obtenhaTela()->limpe();
  ucp1.recebaDigito(UM);
  ucp1.recebaDigito(DOIS);
  ucp1.recebaDigito(TRES);

  ucp1.recebaOperacao(SOMA);

  ucp1.recebaDigito(QUATRO);
  ucp1.recebaDigito(CINCO);
  ucp1.recebaDigito(SEIS);

  std::cout << "All it's okey!\n";
  return 0;
}
