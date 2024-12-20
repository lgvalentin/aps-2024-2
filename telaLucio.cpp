#include "telaLucio.hpp"
#include "console.hpp"
#include <iostream>


const char* TelaLucio::DIGITOS[][TelaLucio::TOTAL_DIGITOS][TelaLucio::ALTURA_DIGITOS] = {
{
    {"0000","0  0","0  0","0  0","0000"},
    {"  1 "," 11 ","  1 ","  1 ","1111"},
    {"2222","   2","2222","2   ","2222"},
    {"3333","   3"," 333","   3","3333"},
    {"4  4","4  4","4444","   4","   4"},
    {"5555","5   ","5555","   5","5555"},
    {"666 ","6   ","6666","6  6","6666"},
    {"7777","   7","  7 "," 7  "," 7  "},
    {"8888","8  8","8888","8  8","8888"},
    {"9999","9  9","9999","   9"," 999"},
    {" "," "," "," ","."}
},
{
    {"☹☹☹☹","☹  ☹","☹  ☹","☹  ☹","☹☹☹☹"},
    {"  ☹ ","  ☹ ","  ☹ ","  ☹ ","☹☹☹☹"},
    {"☹☹☹☹","   ☹","☹☹☹☹","☹   ","☹☹☹☹"},
    {"☹☹☹☹","   ☹"," ☹☹☹","   ☹","☹☹☹☹"},
    {"☹  ☹","☹  ☹","☹☹☹☹","   ☹","   ☹"},
    {"☹☹☹☹","☹   ","☹☹☹☹","   ☹","☹☹☹☹"},
    {"☹☹☹ ","☹   ","☹☹☹☹","☹  ☹","☹☹☹☹"},
    {"☹☹☹☹","   ☹","  ☹ "," ☹  "," ☹  "},
    {"☹☹☹☹","☹  ☹","☹☹☹☹","☹  ☹","☹☹☹☹"},
    {"☹☹☹☹","☹  ☹","☹☹☹☹","   ☹"," ☹☹☹"},
    {" "," "," "," ","☹"}
},
{
    {"████","█  █","█  █","█  █","████"},
    {"  █ ","  █ ","  █ ","  █ ","████"},
    {"████","   █","████","█   ","████"},
    {"████","   █"," ███","   █","████"},
    {"█  █","█  █","████","   █","   █"},
    {"████","█   ","████","   █","████"},
    {"███ ","█   ","████","█  █","████"},
    {"████","   █","  █ "," █  "," █  "},
    {"████","█  █","████","█  █","████"},
    {"████","█  █","████","   █"," ███"},
    {""," ","","","◆"}
}
};

void TelaLucio::mostarDigito(Digito digito, unsigned char indexPosition){
  for(int i = 1; i<= ALTURA_DIGITOS; i++){
    Console::setCursor(i, indexPosition*LARGURA_DIGITOS+1); 
    std::cout << DIGITOS[this->modeloDigitosCorrente][digito][i-1];
  }

  if(indexPosition == this->posicaoDecimal)
    std::cout << DIGITOS[this->modeloDigitosCorrente][10][4];

  std::cout << std::endl;
}

void TelaLucio::atualizar(){
  Console::clearScreen();
  for(int i=0; i < this->digitosCount; i++){
    this->mostarDigito(this->digitos[i], MAX_DIGITOS-this->digitosCount+i);
  }
}

TelaLucio::TelaLucio(){
  Console::init(0,0);
  this->limpe();
}

void TelaLucio::adicione(Digito digito)
{
  this->digitos[this->digitosCount++] = digito;

  this->atualizar();
}

void TelaLucio::limpe() { 
  this->digitosCount = 0;
  this->sinal = Sinal::POSITIVO;
  this->posicaoDecimal = UCHAR_MAX; 

  this->atualizar();
}

void TelaLucio::definaSinal(Sinal sinal)
{
  this->sinal = sinal;
  this->atualizar();
}

void TelaLucio::definaSeparadorDecimal()
{
  this->posicaoDecimal = digitosCount-1;
  this->atualizar();
}
