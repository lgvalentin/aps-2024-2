#include <iostream>
#include <vector>

#include "telaLucio.hpp"
#include "teclaLucio.hpp"
#include "tecladoLucio.hpp"
#include "ucpLucio.hpp"
#include "calculadoraLucio.hpp"

#include "testes/testes.hpp"

int main()
{
  try
  {

    TelaLucio tela1;

    Testes::mostreTodosDigitos(tela1);

    UcpLucio ucp1;
    ucp1.definaTela(&tela1);

    Testes::teste123SOMA456(ucp1);

    return 0;

    // Montando a calculadora como numa linha de produção
    TeclaLucio tecla1;
    tecla1.pressione();

    TecladoLucio teclado1;
    teclado1.adicioneTecla(tecla1);

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

    std::cout << "All it's okey!\n";
  }
  catch (const char *error)
  {
    std::cout << "ERRO: " << error;
  }
  return 0;
}
