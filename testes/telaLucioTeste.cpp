
#include "telaLucioTeste.hpp"

TelaLucioTeste::TelaLucioTeste(){

}

void TelaLucioTeste::adicione(Digito digito)
{
  switch (digito)
  {
  case ZERO:
    std::cout << "0000\n0  0\n0  0\n0  0\n0000\n";
    break;
  case UM:
    std::cout << "  1 \n 11 \n  1 \n  1 \n1111\n";
    break;
  case DOIS:
    std::cout << "2222\n   2\n2222\n2   \n2222\n";
    break;
  case TRES:
    std::cout << "3333\n   3\n 333\n   3\n3333\n";
    break;
  case QUATRO:
    std::cout << "4  4\n4  4\n4444\n   4\n   4\n";
    break;
  case CINCO:
    std::cout << "55555\n5   \n55555\n   5\n55555\n";
    break;
  case SEIS:
    std::cout << "666 \n6   \n6666\n6  6\n6666\n";
    break;
  case SETE:
    std::cout << "7777\n   7\n  7 \n 7  \n 7  \n";
    break;
  case OITO:
    std::cout << "8888\n8  8\n8888\n8  8\n8888\n";
    break;
  case NOVE:
    std::cout << "9999\n9  9\n9999\n   9\n 999\n";
    break;

  default:
    std::cout << digito << std::endl;
    std::cout << "Tela::Dígito ainda não implementado!\n";
  }
}

void TelaLucioTeste::limpe() { std::cout << "\n\n\n\n\n"; }

void TelaLucioTeste::definaSinal(Sinal sinal)
{
  std::cout << (sinal == Sinal::NEGATIVO ? "-----\n" : "");
}

void TelaLucioTeste::definaSeparadorDecimal()
{
  std::cout << "::\n";
}
