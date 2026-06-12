#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet {
    private:
        int id;
        std::string nome;
        std::string tipo; // qual seria o animal
        int idade;
        std::string porte;
        bool possuiDeficiencia;
        bool castrado;

    public:
        Pet(int id, std::string nome, std::string tipo, int idade, std::string porte, bool possuiDeficiencia, bool castrado); // construtor padrão

        std::string getNome() const;
        std::string getTipo() const;
        int getIdade() const;
        std::string getPorte() const;
        bool getPossuiDeficiencia() const;
        bool getCastrado() const;

    void editar(std::string nome, std::string porte, int idade);
    void cadastrarPet();   // pergunta os dados ao usuário
    void exibirPet();      // mostra os dados cadastrados
};


#endif 