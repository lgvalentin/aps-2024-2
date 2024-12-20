#pragma once

#include <climits>

#include "calculadora.hpp"

class TelaLucio: public Tela {
  static const unsigned char MAX_DIGITOS = 8;
  static const unsigned char MODELOS_DIGITOS = 3;
  static const unsigned char TOTAL_DIGITOS = 11;
  static const unsigned char LARGURA_DIGITOS = 5;
  static const unsigned char ALTURA_DIGITOS = 5;
  static const char* DIGITOS[MODELOS_DIGITOS][TOTAL_DIGITOS][ALTURA_DIGITOS];
  unsigned char modeloDigitosCorrente = 2;

  Digito digitos[MAX_DIGITOS];
  unsigned char digitosCount;
  Sinal sinal;
  unsigned char posicaoDecimal;

  void atualizar();
  void mostarDigito(Digito, unsigned char);
public:
  TelaLucio();

  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};