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
};

class TeclaLucio: public Tecla {
public:
  Teclado *teclado;
  void pressione();
};

class CalculadoraLucio: public Calculadora {
public:
  Tela *tela;
  Ucp *ucp;
  Teclado *teclado;
};

class TecladoLucio: public Teclado {
public:
  Ucp *ucp;
  std::vector<Tecla *> teclas;
  void adicioneTecla(Tecla &tecla);
};
