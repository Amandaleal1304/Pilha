#include <iostream>
#include <windows.h>
#define MAXTAM 4

using namespace std;

typedef struct TipoItem // o q vai pedir
{
    int id;
};

typedef struct Pilha
{ // a piha junto com o topo que vai ser usado
    TipoItem item[MAXTAM];
    int topo;
} TipoPilha;

void CriaPilhaVazia(TipoPilha *pilha)
{
    pilha->topo = 0;
    // inicia o topo da pilha igual a 0 a primeira da pilha
}

bool VerificaPilhaVazia(TipoPilha *pilha)
{
    return pilha->topo == 0;
}

bool VerificaPilhaCheia(TipoPilha *pilha)
{
    return pilha->topo == MAXTAM;
}

void Empilha(TipoPilha *pilha, TipoItem item)
{
    if (!VerificaPilhaCheia(pilha))
    {
        cout << "Pilha cheia!";
    }
    else
    {
        pilha->item[pilha->topo] = item; // a ultima posicao da pilha recebe um item
        // pilha itens na posicao da pilha  onde ta o topo recebe o item que mandou
        pilha->topo++; // sobe pra cima o topo
    }
}

void ExibePilha(TipoPilha *pilha)
{

    for (int i = pilha->topo - 1; i >= 0; i--)
    {
        cout << pilha->item[i].id << endl;
    }
}

    void Desempilha(TipoPilha * pilha, TipoItem * item)
    {
        if (!VerificaPilhaVazia)
        {
            cout << "Pilha Vazia!";
        }
        else
        {
            pilha->topo--;
            *item = pilha->item[pilha->topo];
        }
    }

    int TamanhoPilha(TipoPilha * pilha)
    {
        return pilha->topo;
    }