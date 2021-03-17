#include <iostream>

class Nodo
{
    public:
        Nodo();
    
    private:
        char item;
        Nodo *esquerda;
        Nodo *direita;
    
    friend class ArvoreBinaria;
};