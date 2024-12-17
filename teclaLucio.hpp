#pragma once

#include "calculadora.hpp"

class TeclaLucio: public Tecla {
  Teclado *teclado;
public:
  void pressione();

  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};
