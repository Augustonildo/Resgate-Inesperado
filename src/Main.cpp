#include "ArvoreBinaria.hpp"
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
    istringstream stream;

    if(argc < 1){
        cout << "Erro! Não foi informado o arquivo de texto necessário para a execução do sistema" << endl;
        return -1;
    }

    ifstream arquivoComandos(argv[1]);

    if(arquivoComandos.is_open()){
        arquivoComandos.close();
    } else {
        cout << "Erro! Arquivo " << argv[1] << " não foi encontrado" << endl;
        return -1;
    }
    
    return 0;
}