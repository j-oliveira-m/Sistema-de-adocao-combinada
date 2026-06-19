#ifndef ADOTANTE_H
#define ADOTANTE_H
#include <string>
#include<iostream>

    using namespace std;
    
    // Classe que representa um adotante
    class Adotante {    
        private:
            int id;        // atributos que serão utilizados no macth
            string nome;
            bool animalComdeficiencia;
            bool temPatio;
            string preferenciaPorte; // pequeno, médio, grande
            string estiloVida;   // saideiro ou caseiro
            bool temTempoLivre;         // tempo disponivel
            bool dispostoAtencao;   // pode dar atenção a pets carentes

        public:

            Adotante();
            Adotante(int id, string nome, bool animalComdeficiencia, bool temPatio, string preferenciaPorte,
                    string estiloVida, bool temTempoLivre, bool dispostoAtencao);

        // Métodos principais
        void cadastrarAdotante();  // Preenche os dados via entrada do usuário
        void exibirAdotante();    // Mostra os dados na tela

                // Getters: acesso seguro aos atributos
                int getId() const {return id; }
                string getNome() const {return nome; }
                bool getanimalComdeficiencia() const {return animalComdeficiencia; }
                bool getTemPatio() const {return temPatio; }
                string getPreferenciaPorte() const {return preferenciaPorte; }
                string getEstiloVida() const {return estiloVida; }
                bool getTemTempoLivre() const {return temTempoLivre; }
                bool getDispostoAtencao() const {return dispostoAtencao; }


    };





#endif