#ifndef PET_H
#define PET_H
#include <string>

    class Pet {
        private:
            int id;
            std::string nome;
            std::string tipo;
            int idade;
            std::string porte;
            bool possuiDeficiencia;
            bool castrado;
            bool gostaDePatio;
            bool adaptaAmbienteFechado;
            bool sociavelComAnimais;
            bool sociavelComCriancas;
            std::string estiloPet;
            bool carenteAtencao;

    public:
        Pet();
        Pet(int id, std::string nome, std::string tipo, int idade, std::string porte,
            bool possuiDeficiencia, bool castrado,
            bool gostaDePatio, bool adaptaAmbienteFechado,
            bool sociavelComAnimais, bool sociavelComCriancas,
            std::string estiloPet, bool carenteAtencao);

        int getId() const;
        std::string getNome() const;
        std::string getTipo() const;
        int getIdade() const;
        std::string getPorte() const;
        bool getPossuiDeficiencia() const;
        bool getCastrado() const;
        bool getGostaDePatio() const;
        bool getAdaptaAmbienteFechado() const;
        bool getSociavelComAnimais() const;
        bool getSociavelComCriancas() const;
        std::string getEstiloPet() const;
        bool getCarenteAtencao() const;

    void editar(std::string nome, std::string porte, int idade);
    void cadastrarPet();
    void exibirPet();
};

#endif
