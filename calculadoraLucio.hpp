#include <iostream>
#include <vector>

#include "calculadora.hpp"

class TelaLucio: public Tela {
public:
  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};

class UcpLucio: public Ucp {
public:
  Tela *tela;

  void definaTela(Tela*);
  Tela* obtenhaTela();
};

class TeclaLucio: public Tecla {
  Teclado *teclado;
public:
  void pressione();

  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};

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

class TecladoLucio: public Teclado {
  Ucp *ucp;
  std::vector<Tecla *> teclas;
public:
  void adicioneTecla(Tecla &tecla);

  void definaUcp(Ucp*);
  Ucp* obtenhaUcp();
};
