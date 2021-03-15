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
        if(item < p->item){
            InsereRecursivo(p->esquerda, item);
        }
        else {
            InsereRecursivo(p->direita, item);
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