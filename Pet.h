#ifndef PET_H
#define PET_H

#include <string>

class Pet {
private:
    std::string nome;
    int idade;
    std::string porte;
    bool possuiDeficiencia;
    bool castrado;

public:
    Pet(); // construtor padrão

    void cadastrarPet();   // pergunta os dados ao usuário
    void exibirPet();      // mostra os dados cadastrados
};


#endif