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
    istringstream stream;
    ifstream arquivoComandos(argv[1]);
    string linhaArquivo, codificacao, decodificacao;

    if(arquivoComandos.is_open()){
        getline(arquivoComandos, linhaArquivo);
        if(linhaArquivo[0] == 'A'){
            for(unsigned int i = 3; i < linhaArquivo.length(); i++){
                arvoreTransliteracao.Insere(linhaArquivo[i]);
            }
        }
        while(getline(arquivoComandos, linhaArquivo)){
            if(linhaArquivo[0] == 'C'){
                for(unsigned int i = 3; i < linhaArquivo.length(); i++){
                    arvoreTransliteracao.CodificarCaractere(linhaArquivo[i]);
                }
                cout << endl;
            }else if(linhaArquivo[0] == 'D'){
                stream = istringstream(linhaArquivo.substr(4));
                while(getline(stream, decodificacao, 'x')){
                    cout << arvoreTransliteracao.DecodificarMensagem(decodificacao);
                }
                cout << endl;
            }
        }
        arquivoComandos.close();
    } else {
        cout << "Erro! Arquivo " << argv[1] << " não foi encontrado" << endl;
        return -1;
    }
    return 0;
}