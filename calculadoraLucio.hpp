#pragma once

#include <iostream>
#include <vector>

#include "calculadora.hpp"

class CalculadoraLucio: public Calculadora {
  Tela *tela;
  Ucp *ucp;
  Teclado *teclado;
public:
  void definaTela(Tela*);
  Tela* obtenhaTela();

  void definaUcp(Ucp*);
  Ucp* obtenhaUcp();

  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};

