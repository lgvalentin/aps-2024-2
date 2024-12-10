#include "calculadoraLucio.hpp"

//====================================================
// TelaLucio
void TelaLucio::adicione(Digito digito)
{
  switch (digito)
  {
  case ZERO:
    std::cout << "0000\n0  0\n0  0\n0  0\n0000\n";
    break;
  case UM:
    std::cout << "  1 \n 11 \n  1 \n  1 \n1111\n";
    break;

  default:
    std::cout << "Dígito ainda não implementado!\n";
  }
}

void TelaLucio::limpe() { std::cout << "\n\n\n\n\n"; }

void TelaLucio::definaSinal(Sinal sinal)
{
  std::cout << (sinal == Sinal::NEGATIVO ? "-----\n" : "");
}

void TelaLucio::definaSeparadorDecimal()
{
  std::cout << "::\n";
}
//====================================================
// TeclaLucio

void TeclaLucio::pressione()
{
}

  void  TeclaLucio::definaTeclado(Teclado* teclado){ this->teclado = teclado;}
  Teclado* TeclaLucio::obtenhaTeclado(){return this->teclado;}
  
//====================================================
// TecladoLucio

void TecladoLucio::adicioneTecla(Tecla &tecla)
{
  teclas.push_back(&tecla);
}

void TecladoLucio::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp* TecladoLucio::obtenhaUcp() { return this->ucp; }

//====================================================
// UcpLucio
void UcpLucio::definaTela(Tela *tela) { this->tela = tela; }
Tela *UcpLucio::obtenhaTela() { return this->tela; }

void CalculadoraLucio::definaTela(Tela *tela) { this->tela = tela; }
Tela *CalculadoraLucio::obtenhaTela() { return this->tela; }

void CalculadoraLucio::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp *CalculadoraLucio::obtenhaUcp() { return this->ucp; }

void CalculadoraLucio::definaTeclado(Teclado *teclado) { this->teclado = teclado; }
Teclado *CalculadoraLucio::obtenhaTeclado() { return this->teclado; }
