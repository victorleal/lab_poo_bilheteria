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
    string serialized;
    //sstream str;
    //str << this->getId().;
    serialized = "1" + this->SEP;
    serialized += this->getNome() + this->SEP;
    serialized += this->getCpf() + this->SEP;
    serialized += this->getEndereco() + this->SEP;
    serialized += this->getTelefone() + this->SEP;
    serialized += this->getEmail();
    
    return serialized;

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

