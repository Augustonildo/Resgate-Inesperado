#include "ArvoreBinaria.hpp"

ArvoreBinaria::ArvoreBinaria()
{
    raiz = NULL;
}

ArvoreBinaria::~ArvoreBinaria()
{
    Limpa();
}

void ArvoreBinaria::Insere(char item){
    InsereRecursivo(raiz,item);
}

void ArvoreBinaria::InsereRecursivo(Nodo* &p, char item){
    if(p==NULL){
        p = new Nodo();
        p->item = item;
    } else {
        if(item > p->item){
            InsereRecursivo(p->direita, item);
        } else {
            InsereRecursivo(p->esquerda, item);
        }
    }
}

void ArvoreBinaria::Limpa(){
    ApagaRecursivo(raiz);
    raiz = NULL;
}

void ArvoreBinaria::ApagaRecursivo(Nodo *p){
    if(p!=NULL){
        ApagaRecursivo(p->esquerda);
        ApagaRecursivo(p->direita);
        delete p;
    }
}

char ArvoreBinaria::DecodificarMensagem(string mensagem){
    return DecodificarMensagemRecursivo(mensagem, raiz);
}

char ArvoreBinaria::DecodificarMensagemRecursivo(string mensagem, Nodo* p){
    if(!mensagem.length()) return p->item;
    int codigo = mensagem[0] - '0';
    if(codigo % 2 == 0){
        return DecodificarMensagemRecursivo(mensagem.substr(1), p->direita);
    }else{
        return DecodificarMensagemRecursivo(mensagem.substr(1), p->esquerda);
    }
}