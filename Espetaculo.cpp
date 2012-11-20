/* 
 * File:   Espetaculo.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:01
 */

#include "Espetaculo.h"
#include "FileHandler.h"

Espetaculo::Espetaculo() {
    this->SEP = "|";
}

string Espetaculo::getClassName() {
    return "Espetaculo";
}

string Espetaculo::serialize() {
    TypeConverter tc;

    this->serializedObject = "";

    stringstream str;
    str << this->getId();

    this->serializedObject += this->getTitulo() + this->SEP;
    this->serializedObject += this->getDescricao() + this->SEP;
    this->serializedObject += this->getDiretor() + this->SEP;
    this->serializedObject += this->getElenco() + this->SEP;
    this->serializedObject += tc.convertFloatToString(this->getPrecoBilhete()) + this->SEP;
    this->serializedObject += tc.convertTimeToString(this->getDataHorario()) + this->SEP;

    return this->serializedObject;
}

void Espetaculo::unserialize() {
    int cont = 0;
    int cont2 = 0;
    int cont3 = 0;

    char string[this->serializedObject.length()];
    char recebe[7][25];

    TypeConverter tc;

    strcpy(string, this->serializedObject.c_str());

    for (cont = 0; cont < 7; cont++) {
        for (; string[cont2] != '|'; cont2++) {
            recebe[cont][cont3] = string[cont2];
            cont3++;
        }
        recebe[cont][cont3] = '\0';
        cont2++;
        cont3 = 0;
    }

    this->setId(tc.convertStringToInt(recebe[0]));
    this->setTitulo(recebe[1]);
    this->setDescricao(recebe[2]);
    this->setDiretor(recebe[3]);
    this->setElenco(recebe[4]);
    this->setPrecoBilhete(tc.convertStringToFloat(recebe[5]));
    this->setDataHorario(tc.convertStringToTime(recebe[6]));
}

time_t Espetaculo::getDataHorario() {
    return this->dataHorario;
}

string Espetaculo::getDescricao() {
    return this->descricao;
}

string Espetaculo::getDiretor() {
    return this->diretor;
}

string Espetaculo::getElenco() {
    return this->elenco;
}

float Espetaculo::getPrecoBilhete() {
    return this->precoBilhete;
}

string Espetaculo::getTitulo() {
    return this->titulo;
}

void Espetaculo::setDataHorario(time_t dataHorario) {
    this->dataHorario = dataHorario;
}

void Espetaculo::setDescricao(string descricao) {
    this->descricao = descricao;
}

void Espetaculo::setDiretor(string diretor) {
    this->diretor = diretor;
}

void Espetaculo::setElenco(string elenco) {
    this->elenco = elenco;
}

void Espetaculo::setPrecoBilhete(float precoBilhete) {
    this->precoBilhete = precoBilhete;
}

void Espetaculo::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Espetaculo::show() {
    TypeConverter tc;

    int retorno = this->read();

    if (retorno == 1) {
        cout << "Dados Espetaculo" << endl;
        //Impressao dos dados na tela
        cout << "ID: " << this->getId() << endl;
        cout << "Titulo: " << this->getTitulo() << endl;
        cout << "Descricao: " << this->getDescricao() << endl;
        cout << "Diretor: " << this->getDiretor() << endl;
        cout << "Elenco: " << this->getElenco() << endl;
        cout << "Preco Bilhete: " << this->getPrecoBilhete() << endl;
        cout << "Data/Horario: " << tc.convertTimeToString(this->getDataHorario()) << endl;
    } else {
        this->setId(-1);
    }
}

void Espetaculo::listar(){
    FileHandler fh;
    string *objects = fh.listFiles(this->getClassName());
    int cont = 0;
    
    while(objects[cont] != "\0"){
        this->serializedObject = objects[cont];
        cout << this->getField(1) << " - " << this->getField(2) << endl;
        cont++;
    }
}
