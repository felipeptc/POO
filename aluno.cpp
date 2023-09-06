#include <sstream>
#include "aluno.hpp"

aluno :: aluno(string n,int m){

    p = new Pessoa(n);
    matricula = m;
    #ifdef DEBUG
    cout << "criu Aluno(" << p->obtemNome() << "," << matricula<< ") criando..." << endl;
    #endif
}

aluno :: ~aluno(){
    #ifdef DEBUG
    cout << "- Aluno(" << p->obtemNome() <<"," << matricula

}


