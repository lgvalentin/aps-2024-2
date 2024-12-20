#pragma once

#include <climits>

#include "calculadora.hpp"

class TelaLucioTeste: public Tela {
public:
  TelaLucioTeste();

  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};