#include "Pet.h"
#include <iostream>
using namespace std;

    Pet::Pet() : id(-1), nome(""), tipo(""), idade(0), porte(""),
             possuiDeficiencia(false), castrado(false),
             gostaDePatio(false), adaptaAmbienteFechado(false),
             sociavelComAnimais(false), sociavelComCriancas(false),
             estiloPet(""), carenteAtencao(false) {}

    Pet::Pet(int id, string nome, string tipo, int idade, string porte,
         bool possuiDeficiencia, bool castrado,
         bool gostaDePatio, bool adaptaAmbienteFechado,
         bool sociavelComAnimais, bool sociavelComCriancas,
         string estiloPet, bool carenteAtencao)
            : id(id), nome(nome), tipo(tipo), idade(idade), porte(porte),
            possuiDeficiencia(possuiDeficiencia), castrado(castrado),
            gostaDePatio(gostaDePatio), adaptaAmbienteFechado(adaptaAmbienteFechado),
            sociavelComAnimais(sociavelComAnimais), sociavelComCriancas(sociavelComCriancas),
            estiloPet(estiloPet), carenteAtencao(carenteAtencao) {}

        int Pet::getId() const { return id; }
        string Pet::getNome() const { return nome; }
        string Pet::getTipo() const { return tipo; }
        int Pet::getIdade() const { return idade; }
        string Pet::getPorte() const { return porte; }
        bool Pet::getPossuiDeficiencia() const { return possuiDeficiencia; }
        bool Pet::getCastrado() const { return castrado; }
        bool Pet::getGostaDePatio() const { return gostaDePatio; }
        bool Pet::getAdaptaAmbienteFechado() const { return adaptaAmbienteFechado; }
        bool Pet::getSociavelComAnimais() const { return sociavelComAnimais; }
        bool Pet::getSociavelComCriancas() const { return sociavelComCriancas; }
        string Pet::getEstiloPet() const { return estiloPet; }
        bool Pet::getCarenteAtencao() const { return carenteAtencao; }

    void Pet::cadastrarPet() {
        cout << "Digite o nome do pet: ";
        getline(cin, nome);

        cout << "Digite o tipo do animal: ";
        getline(cin, tipo);

        cout << "Digite a idade do animal: ";
        cin >> idade;
        cin.ignore();

        cout << "Digite o porte: ";
        getline(cin, porte);

    char resposta;

        cout << "Possui deficiência (s/n): ";
        cin >> resposta;
        possuiDeficiencia = (resposta == 's' || resposta == 'S');

        cout << "É castrado (s/n): ";
        cin >> resposta;
        castrado = (resposta == 's' || resposta == 'S');

        cout << "Gosta de pátio (s/n): ";
        cin >> resposta;
        gostaDePatio = (resposta == 's' || resposta == 'S');

        cout << "Adapta-se a ambiente fechado (s/n): ";
        cin >> resposta;
            adaptaAmbienteFechado = (resposta == 's' || resposta == 'S');

        cout << "Sociável com animais (s/n): ";
        cin >> resposta;
        sociavelComAnimais = (resposta == 's' || resposta == 'S');

        cout << "Sociável com crianças (s/n): ";
        cin >> resposta;
        sociavelComCriancas = (resposta == 's' || resposta == 'S');

        cin.ignore();
        cout << "Estilo do pet (saideiro/caseiro): ";
        getline(cin, estiloPet);

        cout << "É carente de atenção (s/n): ";
        cin >> resposta;
        carenteAtencao = (resposta == 's' || resposta == 'S');
        cin.ignore();
}

    void Pet::exibirPet() {
        cout << "\n--- Dados do Pet ---\n";
        cout << "ID: " << id << "\n";
        cout << "Nome: " << nome << "\n";
        cout << "Tipo: " << tipo << "\n";
        cout << "Idade: " << idade << "\n";
        cout << "Porte: " << porte << "\n";
        cout << "Deficiência: " << (possuiDeficiencia ? "Sim" : "Não") << "\n";
        cout << "Castrado: " << (castrado ? "Sim" : "Não") << "\n";
        cout << "Gosta de pátio: " << (gostaDePatio ? "Sim" : "Não") << "\n";
        cout << "Adapta ambiente fechado: " << (adaptaAmbienteFechado ? "Sim" : "Não") << "\n";
        cout << "Sociável com animais: " << (sociavelComAnimais ? "Sim" : "Não") << "\n";
        cout << "Sociável com crianças: " << (sociavelComCriancas ? "Sim" : "Não") << "\n";
        cout << "Estilo do pet: " << estiloPet << "\n";
        cout << "Carente de atenção: " << (carenteAtencao ? "Sim" : "Não") << "\n";
}

