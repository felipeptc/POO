#include "pessoa.hpp"

Pessoa :: Pessoa(string n){
    nome = n;
    #ifdef DEBUG
    cout << "criou Pessoa("<< nome << ") destruida..."<< endl;
    #endif
}

Pessoa::~Pessoa() {
    #ifdef DEBUG
    cout << "destruiu Pessoa(" << nome << ")destruida..." << ednl;
    #endif
}

void Pessoa :: defineNome(string n) { nome = n; }

string Pessoa :: obtemNome() {return nome; }