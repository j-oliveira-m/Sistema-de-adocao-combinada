#ifndef ADOTANTEFACTORY_H
#define ADOTANTEFACTORY_H
#include "adotante.h"

    // Classe responsável por criar objetos Adotante
    class AdotanteFactory {
        public:
            // Método estático: cria um adotante com base no ID
            // e chama o cadastro para preencher os dados
            static Adotante criarAdotante(int id);
    };

#endif 