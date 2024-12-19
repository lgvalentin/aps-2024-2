#pragma once

#include "calculadora.hpp"

class TecladoLucio: public Teclado {
  Ucp *ucp;
  std::vector<Tecla *> teclas;
public:
  void adicioneTecla(Tecla &tecla);

  void definaUcp(Ucp*);
  Ucp* obtenhaUcp();

  void recebaDigito(Digito);
  void recebaOperacao(Operacao);
  void recebaControle(Controle);
};