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
            bool gostaDePatio;
            bool adaptaAmbienteFechado;
            bool sociavelComAnimais;
            bool sociavelComCriancas;
            std::string estiloPet;   // saideiro ou caseiro
            bool carenteAtencao;

        public:
            Pet();
            Pet(int id, std::string nome, std::string tipo, int idade, std::string porte,
            bool possuiDeficiencia, bool castrado,
            bool gostaDePatio, bool adaptaAmbienteFechado,
            bool sociavelComAnimais, bool sociavelComCriancas,
            std::string estiloPet, bool carenteAtencao); // construtor padrão

            int getId() const { return id; }
            std::string getNome() const { return nome; }
            std::string getTipo() const { return tipo; }
            int getIdade() const { return idade; }
            std::string getPorte() const { return porte; }
            bool getPossuiDeficiencia() const { return possuiDeficiencia; }
            bool getCastrado() const { return castrado; }
            bool getGostaDePatio() const { return gostaDePatio; }
            bool getAdaptaAmbienteFechado() const { return adaptaAmbienteFechado; }
            bool getSociavelComAnimais() const { return sociavelComAnimais; }
            bool getSociavelComCriancas() const { return sociavelComCriancas; }
            std::string getEstiloPet() const { return estiloPet; }
            bool getCarenteAtencao() const { return carenteAtencao; }

        void editar(std::string nome, std::string porte, int idade);
        void cadastrarPet();   // pergunta os dados ao usuário
        void exibirPet();      // mostra os dados cadastrados
};


#endif 