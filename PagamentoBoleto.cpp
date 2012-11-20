/* 
 * File:   PagamentoBoleto.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:14
 */

#include "PagamentoBoleto.h"
#include <sstream>

PagamentoBoleto::PagamentoBoleto(string bancoResponsavel, string numero) {
    this->setBancoResponsavel(bancoResponsavel);
    this->setNumeroBoleto(numero);
    this->SEP = "|";
}

string PagamentoBoleto::getClassName() {
    return "PagamentoBoleto";
}

string PagamentoBoleto::serialize() {
    this->serializedObject = "";
    
    stringstream id;
    id << this->getId();

    this->serializedObject += id.str() + this->SEP;
    this->serializedObject += this->getBancoResponsavel() + this->SEP;
    this->serializedObject += this->getNumeroBoleto() + this->SEP;

    return this->serializedObject;

}

void PagamentoBoleto::showDetailsFormaPagamento() {

}

void PagamentoBoleto::unserialize() {

}

string PagamentoBoleto::getBancoResponsavel() {
    return this->bancoResponsavel;
}

int PagamentoBoleto::getCodigoTipoPagamento() {
    return 2;
}

string PagamentoBoleto::getDescricaoTipoPagamento() {
    return "Boleto Bancario";
}

string PagamentoBoleto::getNumeroBoleto() {
    return this->numeroBoleto;
}

void PagamentoBoleto::setBancoResponsavel(string bancoResponsavel) {
    this->bancoResponsavel = bancoResponsavel;
}

void PagamentoBoleto::setNumeroBoleto(string numero) {
    this->numeroBoleto = numero;
}