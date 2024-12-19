#include "ucpLucio.hpp"

bool UcpLucio::temOperacao()
{
    return this->operacaoCorrente != NULL;
}

void UcpLucio::armazeneDigito(Digito digito)
{
    if (this->temOperacao())
    {
        if (this->digitosOperando2Count == 0)
        {
            this->tela->limpe();
        }
        this->digitosOperando2[this->digitosOperando2Count++] = digito;
    }
    else
    {
        this->digitosOperando1[this->digitosOperando1Count++] = digito;
    }
}

void UcpLucio::calculeIgual()
{
    int num1 = this->convertaDigitosParaNumero(this->digitosOperando1, this->digitosOperando1Count);
    int num2 = this->convertaDigitosParaNumero(this->digitosOperando2, this->digitosOperando2Count);

    switch (*this->operacaoCorrente)
    {
    case SOMA:
        num1 = num1 + num2;
    default:
        throw "UCP::Operacao ainda nao implementada";
    }

    this->convertaNumeroParaDigitos(num1, this->digitosOperando1, &this->digitosOperando1Count);
}

int UcpLucio::convertaDigitosParaNumero(Digito *digitos, unsigned char count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
        result = result * 10 + digitos[i];
    return result;
}
int UcpLucio::convertaNumeroParaDigitos(int numero, Digito *digitos, unsigned char *count)
{
    *count = 0;

    while (numero > 0)
    {
        Digito digito = Digito(numero % 10);
        digitos[*count++] = digito;
        numero /= 10;
    }

    // Reverse Digitos
    for (int i=0; i < *count/2; i++){
        Digito digito = digitos[i];
        digitos[i] = digitos[*count-i-1];
        digitos[*count-i-1] = digito;
    }

    return 0;
}

//=========================================
// PUBLICs
void UcpLucio::definaTela(Tela *tela) { this->tela = tela; }
Tela *UcpLucio::obtenhaTela() { return this->tela; }

void UcpLucio::recebaDigito(Digito digito)
{
    this->armazeneDigito(digito);

    this->tela->adicione(digito);
}

void UcpLucio::recebaOperacao(Operacao operacao)
{
    if (this->temOperacao())
        this->operacaoCorrente = new Operacao();

    *(this->operacaoCorrente) = operacao;
}

void UcpLucio::recebaControle(Controle controle)
{
    switch (controle)
    {
    case IGUAL:
        this->calculeIgual();
        break;
    default:
        throw "UCP::Operacao ainda nao implementada";
    }
}
