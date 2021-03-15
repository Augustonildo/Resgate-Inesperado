#include "ArvoreBinaria.hpp"
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 1){
        cout << "Erro! Não foi informado o arquivo de texto necessário para a execução do sistema" << endl;
        return -1;
    }

    ArvoreBinaria arvoreTransliteracao = ArvoreBinaria();
    ifstream arquivoComandos(argv[1]);
    string linhaArquivo;

    if(arquivoComandos.is_open()){
        getline(arquivoComandos, linhaArquivo);
        if(linhaArquivo[0] == 'A'){
            for(unsigned int i = 3; i < linhaArquivo.length(); i++){
                arvoreTransliteracao.Insere(linhaArquivo[i]);
            }
        }
        while(getline(arquivoComandos, linhaArquivo)){
            if(linhaArquivo[0] == 'C'){
                cout << linhaArquivo.substr(3) << endl;
                for(unsigned int i = 3; i < linhaArquivo.length(); i++){
                    
                }
            }else if(linhaArquivo[0] == 'D'){
                cout << linhaArquivo.substr(3) << endl;
                for(unsigned int i = 3; i < linhaArquivo.length(); i++){

                }
            }
        }

        arquivoComandos.close();
    } else {
        cout << "Erro! Arquivo " << argv[1] << " não foi encontrado" << endl;
        return -1;
    }
    
    return 0;
}