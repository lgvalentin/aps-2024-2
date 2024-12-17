#pragma once

#include "calculadora.hpp"

class UcpLucio: public Ucp {
public:
  Tela *tela;

  void definaTela(Tela*);
  Tela* obtenhaTela();
};
