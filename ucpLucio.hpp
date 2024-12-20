#pragma once

#include "calculadora.hpp"



class UcpLucio: public Ucp {
  Tela *tela;

  static const char MAX_DIGITOS = 8;
  Digito digitosOperando1[MAX_DIGITOS];
  unsigned char digitosOperando1Count = 0;
  Digito digitosOperando2[MAX_DIGITOS];
  unsigned char digitosOperando2Count = 0;
  
  Operacao *operacaoCorrente = NULL;
  
  void armazeneDigito(Digito digito);  
  bool temOperacao();
  void calculeIgual();  
  
  int convertaDigitosParaNumero(Digito*, unsigned char);
  int convertaNumeroParaDigitos(int numero, Digito*, unsigned char*);

  void mostreDigitos(Digito*, unsigned char);

public:
  void definaTela(Tela*);
  Tela* obtenhaTela();
  
  void recebaDigito(Digito);
  void recebaOperacao(Operacao);
  void recebaControle(Controle);
  
};
