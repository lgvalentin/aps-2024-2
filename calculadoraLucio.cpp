#include "calculadoraLucio.hpp"

void CalculadoraLucio::definaTela(Tela *tela) { this->tela = tela; }
Tela *CalculadoraLucio::obtenhaTela() { return this->tela; }

void CalculadoraLucio::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp *CalculadoraLucio::obtenhaUcp() { return this->ucp; }

void CalculadoraLucio::definaTeclado(Teclado *teclado) { this->teclado = teclado; }
Teclado *CalculadoraLucio::obtenhaTeclado() { return this->teclado; }
