/* 
 * File:   Espetaculo.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:01
 */

#include "Espetaculo.h"

string Espetaculo::getClassName(){
    return "Espetaculo";
}

void Espetaculo::serialize(){
    
}

void Espetaculo::unserialize(){
    
}

time_t Espetaculo::getDataHorario(){
    return this->dataHorario;
}

string Espetaculo::getDescricao(){
    return this->descricao;
}

string Espetaculo::getDiretor(){
    return this->diretor;
}

string Espetaculo::getElenco(){
    return this->elenco;
}

float Espetaculo::getPrecoBilhete(){
    return this->precoBilhete;
}

string Espetaculo::getTitulo(){
    return this->titulo;
}

void Espetaculo::setDataHorario(time_t dataHorario){
    this->dataHorario = dataHorario;
}

void Espetaculo::setDescricao(string descricao){
    this->descricao = descricao;
}

void Espetaculo::setDiretor(string diretor){
    this->diretor = diretor;
}

void Espetaculo::setElenco(string elenco){
    this->elenco = elenco;
}

void Espetaculo::setPrecoBilhete(float precoBilhete){
    this->precoBilhete = precoBilhete;
}

void Espetaculo::setTitulo(string titulo){
    this->titulo = titulo;
}
