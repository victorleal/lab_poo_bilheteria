/* 
 * File:   Cliente.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 22:56
 */

#include "Cliente.h"
#include "FileHandler.h"
#include <stdio.h>

Cliente::Cliente() {
    this->SEP = "|";
    //this->create();
}

string Cliente::getClassName() {
    return "Cliente";

}

string Cliente::serialize() {
    string serialized = "";

    stringstream str;
    str << this->getId();

    serialized += this->getNome() + this->SEP;
    serialized += this->getCpf() + this->SEP;
    serialized += this->getEndereco() + this->SEP;
    serialized += this->getTelefone() + this->SEP;
    serialized += this->getEmail() + this->SEP;
    
    return serialized;

}

void Cliente::unserialize() {
    int aux[5];
    int cont = 0;
    int cont2 = 0;
    int cont3 = 0;
    char string[this->serializedObject.length()];
    strcpy(string, this->serializedObject.c_str());
    //string str = this->serializedObject;
    char recebe[5][25];

    for (cont = 0; cont < 5; cont++) {
        for (; string[cont2] != '|'; cont2++) {
            recebe[cont][cont3] = string[cont2];
            cont3++;
        }
        recebe[cont][cont3] = '\0';
        cont2++;
        cont3 = 0;
    }

    this->setNome(recebe[0]);
    this->setCpf(recebe[1]);
    this->setEndereco(recebe[2]);
    this->setTelefone(recebe[3]);
    this->setEmail(recebe[4]);

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

