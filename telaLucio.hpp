#pragma once

#include "calculadora.hpp"

class TelaLucio: public Tela {
public:
  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};