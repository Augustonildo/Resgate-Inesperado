#include "Nodo.hpp"

class ArvoreBinaria
{
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();
        void Insere(char item);
        void Caminha(int tipo);
        void Limpa();

    private:
        void InsereRecursivo(Nodo* &p, char item);
        void ApagaRecursivo(Nodo* p);
        Nodo *raiz;
};