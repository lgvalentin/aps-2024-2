#include "tecladoLucio.hpp"

void TecladoLucio::adicioneTecla(Tecla &tecla)
{
  teclas.push_back(&tecla);
}

void TecladoLucio::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp* TecladoLucio::obtenhaUcp() { return this->ucp; }

void TecladoLucio::recebaDigito(Digito digito){
  if(this->ucp) this->ucp->recebaDigito(digito);    
}
void TecladoLucio::recebaOperacao(Operacao operacao){
  if(this->ucp) this->ucp->recebaOperacao(operacao);        
}
void TecladoLucio::recebaControle(Controle controle){
  if(this->ucp) this->ucp->recebaControle(controle);    
}
