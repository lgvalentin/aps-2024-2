#include "tecladoLucio.hpp"

void TecladoLucio::adicioneTecla(Tecla &tecla)
{
  teclas.push_back(&tecla);
}

void TecladoLucio::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp* TecladoLucio::obtenhaUcp() { return this->ucp; }
