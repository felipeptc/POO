#ifndef _ALUNO_HPP
#define _ALUNO_HPP

#include "pessoa.hpp"
#include <iostream>
#include <string>

using namespace std;

class aluno{

private:
    int matricula;
    Pessoa *p;

public:

    aluno(string n="", int m=0);
    ~aluno();
    int obtemMatricula();
    void defineMatricula(int m);
    string obtemNome();
    void defineNome(string nome);
    string str();

};


#endif