#include "Nodo.hpp"

using namespace std;

class ArvoreBinaria
{
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();
        void Insere(char item);
        void Limpa();
        void CodificarCaractere(char caractere);
        char DecodificarMensagem(string mensagem);

    private:
        void InsereRecursivo(Nodo* &p, char item);
        void ApagaRecursivo(Nodo* p);
        void CodificarCaractereRecursivo(char caractere, Nodo* p);
        char DecodificarMensagemRecursivo(string mensagem, Nodo* p);
        Nodo *raiz;
};