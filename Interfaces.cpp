/* 
 * File:   Interfaces.cpp
 * Author: victorleal
 * 
 * Created on 14 de Outubro de 2012, 23:14
 */

#include "Interfaces.h"
#include "Cliente.h"

Interfaces::Interfaces() {
}

void Interfaces::cadastrarCliente(){
    Cliente c;
    string nome, telefone, endereco, email, cpf;
    
    cout << "\nCadastro Cliente";
    
    cout << "\n\tDigite o nome: ";
    cin.clear();
    cin >> nome;
    c.setNome(nome);
    
    cout << "\n\tDigite o CPF: ";
    cin.clear();
    cin >> cpf;
    c.setCpf(cpf);
    
    cout << "\n\tDigite o endereco: ";
    cin.clear();
    cin >> endereco;
    c.setEndereco(endereco);
    
    cout << "\n\tDigite o telefone: ";
    cin.clear();
    cin >> telefone;
    c.setTelefone(telefone);
    
    cout << "\n\tDigite o e-mail: ";
    cin.clear();
    cin >> email;
    c.setEmail(email);
    
    c.create();
}
void Interfaces::cadastrarEspetaculo(){}
void Interfaces::cadastrarBilhete(){}
void Interfaces::editarCliente(){}
void Interfaces::editarEspetaculo(){}
void Interfaces::editarBilhete(){}
void Interfaces::excluirCliente(){}
void Interfaces::excluirEspetaculo(){}
void Interfaces::excluirBilhete(){}
void Interfaces::listarCliente(){}
void Interfaces::listarEspetaculo(){}
void Interfaces::listarBilhete(){}

Interfaces::Interfaces(const Interfaces& orig) {
}

Interfaces::~Interfaces() {
}

