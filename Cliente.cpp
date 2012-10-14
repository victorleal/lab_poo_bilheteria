/* 
 * File:   Cliente.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 22:56
 */

#include "Cliente.h"

Cliente::Cliente(){
    this->SEP = "|";
}

string Cliente::getClassName() {
    return "Cliente";

}

string Cliente::serialize() {
    string serialize = this->getNome() + this->SEP + this->getCpf() + this->SEP;
    serialize += this->getEndereco() + this->SEP + this->getTelefone() + this->SEP;
    serialize += this->getEmail() + this->SEP;
    return serialize;
}

void Cliente::unserialize() {

}

string Cliente::getCpf() {
    return this->cpf;
}

string Cliente::getEmail() {
    return this->email;
}

string Cliente::getEndereco() {
    return this->endereco;
}

string Cliente::getNome() {
    return this->nome;
}

string Cliente::getTelefone() {
    return this->telefone;
}

void Cliente::setCpf(string cpf) {
    this->cpf = cpf;
}

void Cliente::setEmail(string email) {
    this->email = email;
}

void Cliente::setEndereco(string endereco) {
    this->endereco = endereco;
}

void Cliente::setNome(string nome) {
    this->nome = nome;
}

void Cliente::setTelefone(string telefone) {
    this->telefone = telefone;
}

void Cliente::show() {

}

void Cliente::cadastrar(){
    string nome, cpf, email, telefone, endereco;
    
    cout << "Digite o nome: ";
    cin >> nome;
    this->setNome(nome);
    cout << "Digite o CPF: ";
    cin >> cpf;
    this->setCpf(cpf);
    cout << "Digite o endereco: ";
    cin >> endereco;
    this->setEndereco(endereco);
    cout << "Digite o e-mail: ";
    cin >> email;
    this->setEmail(email);
    cout << "Digite o telefone: ";
    cin >> telefone;
    this->setTelefone(telefone);
    this->setId(1);
    
    this->create();
    
    FileHandler *fh = new FileHandler(this->getFileName());
    fh->writeToFile(this->serialize());
}
