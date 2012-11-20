/* 
 * File:   Bilhete.cpp
 * Author: victorleal
 * 
 * Created on 8 de Outubro de 2012, 22:48
 */

//Implementar métodos

#include "Bilhete.h"
#include "Espetaculo.h"
#include <sstream>

Bilhete::Bilhete() {
    this->SEP = "|";
}

string Bilhete::getClassName() {
    return "Bilhete";
}

string Bilhete::serialize() {
    this->serializedObject = "";

    stringstream id;
    id << this->getId();

    stringstream idCliente;
    idCliente << this->getCliente().getId();

    stringstream idEspetaculo;
    idEspetaculo << this->getEspetaculo().getId();

    stringstream idPagamento;
    idPagamento << this->getPagamento().getId();
    
    string codBilhete = idEspetaculo.str()  + "-" + id.str();
    this->setCodigoBilhete(codBilhete);

    this->serializedObject += id.str() + this->SEP;
    this->serializedObject += this->getCodigoBilhete() + this->SEP;
    this->serializedObject += idCliente.str() + this->SEP;
    this->serializedObject += idEspetaculo.str() + this->SEP;
    this->serializedObject += idPagamento.str() + this->SEP;

    return this->serializedObject;
}

void Bilhete::unserialize() {

}

Cliente Bilhete::getCliente() {
    return this->cliente;
}

string Bilhete::getCodigoBilhete() {
    return this->codigoBilhete;
}

Espetaculo Bilhete::getEspetaculo() {
    return this->espetaculo;
}

Pagamento Bilhete::getPagamento() {
    return this->pagamento;
}

void Bilhete::setCodigoBilhete(string codigoBilhete) {
    this->codigoBilhete = codigoBilhete;
}

void Bilhete::setEspetaculo(Espetaculo espetaculo) {
    this->espetaculo = espetaculo;
}

void Bilhete::setCliente(Cliente cliente) {
    this->cliente = cliente;
}

void Bilhete::setPagamento(Pagamento pagamento) {
    this->pagamento = pagamento;
}

void Bilhete::show() {
}
