/* 
 * File:   Bilhete.cpp
 * Author: victorleal
 * 
 * Created on 8 de Outubro de 2012, 22:48
 */

//Implementar métodos

#include "Bilhete.h"
#include "Espetaculo.h"

string Bilhete::getClassName() {

}

string Bilhete::serialize() {

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

void Bilhete::setPagamento(Pagamento pagamento) {
    this->pagamento = pagamento;
}

void Bilhete::show() {
}
