#include "adotanteFactory.h"

    Adotante AdotanteFactory::criarAdotante(int id){
        Adotante novoAdotante(id, "", "", false, "", "", false, false);
        novoAdotante.cadastrarAdotante();
        return novoAdotante;
    }