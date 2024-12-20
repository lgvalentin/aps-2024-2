#include "testes.hpp"

void Testes::mostreTodosDigitos(Tela &tela)
{
    tela.limpe();
    tela.adicione(UM);
    tela.adicione(DOIS);
    tela.adicione(TRES);
    tela.adicione(QUATRO);
    tela.definaSeparadorDecimal();
    tela.adicione(CINCO);
    tela.adicione(SEIS);
    tela.adicione(SETE);
    tela.adicione(OITO);
}

void Testes::teste123SOMA456(Ucp &ucp)
{
    ucp.obtenhaTela()->limpe();
    ucp.recebaDigito(UM);
    ucp.recebaDigito(DOIS);
    ucp.recebaDigito(TRES);

    ucp.recebaOperacao(SOMA);

    ucp.recebaDigito(QUATRO);
    ucp.recebaDigito(CINCO);
    ucp.recebaDigito(SEIS);

    ucp.recebaControle(IGUAL);
}
