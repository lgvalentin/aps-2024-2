#include <iostream>
#include <vector>

/** Cabeçalho */
class Calculadora;
class Tecla;
class Ucp;
class Teclado;
class Tecla;

enum Digito { ZERO, UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE };

enum Operacao {
  SOMA,
  SUBTRACAO,
  MULTIPLICACAO,
  DIVISAO,
  RADICIACAO,
  PORCENTAGEM
};

enum Controle {
  LIGA_LIMPA_ERRO,
  DESLIGA,
  MEMORIA_LEITURA_ESCRITA,
  MEMORIA_SOMA,
  MEMORIA_SUBTRACAO,
  IGUAL,
  SEPARADOR_DECIMAL
};

enum Sinal{POSITIVO, NEGATIVO};

class Tela {
public:
  virtual void adicione(Digito) = 0;
  virtual void limpe() = 0;
  virtual void definaSinal(Sinal) = 0;
  virtual void definaSeparadorDecimal() = 0;
};

class Ucp {
public:
  virtual void definaTela(Tela*) = 0;
  virtual Tela* obtenhaTela() = 0;
};

class Tecla {
public:
  virtual void pressione() = 0;

  virtual void definaTeclado(Teclado*) = 0;
  virtual Teclado* obtenhaTeclado() = 0;
};

class Calculadora {
public:
  virtual void definaTela(Tela*) = 0;
  virtual Tela* obtenhaTela()= 0;

  virtual void definaUcp(Ucp*) = 0;
  virtual Ucp* obtenhaUcp()= 0;

  virtual void definaTeclado(Teclado*) = 0;
  virtual Teclado* obtenhaTeclado() = 0;
};

class Teclado {
public:
  virtual void adicioneTecla(Tecla &tecla) = 0;

  virtual void definaUcp(Ucp*) = 0;
  virtual Ucp* obtenhaUcp() = 0;
};
