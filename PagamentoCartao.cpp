/* 
 * File:   PagamentoCartao.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:20
 */

#include "PagamentoCartao.h"
#include <sstream>

PagamentoCartao::PagamentoCartao(string bandeira, string numero) {
    this->setBandeiraCartao(bandeira);
    this->setNumeroCartao(numero);
    this->SEP = "|";
}

string PagamentoCartao::getClassName(){
    return "PagamentoCartao";
}

string PagamentoCartao::serialize() {
    this->serializedObject = "";
    
    stringstream str;
    str << this->getId();

    this->serializedObject += str.str() + this->SEP;
    this->serializedObject += this->getBandeiraCartao() + this->SEP;
    this->serializedObject += this->getNumeroCartao() + this->SEP;

    return this->serializedObject;
}

void PagamentoCartao::showDetailsFormaPagamento() {
}

void PagamentoCartao::unserialize() {
}

string PagamentoCartao::getBandeiraCartao() {
    return this->bandeira;
}

int PagamentoCartao::getCodigoTipoPagamento() {
    return 1;
}

string PagamentoCartao::getDescricaoTipoPagamento() {
    return "Cartao de Credito";
}

string PagamentoCartao::getNumeroCartao() {
    return this->numeroCartao;
}

void PagamentoCartao::setBandeiraCartao(string bandeira) {
    this->bandeira = bandeira;
}

void PagamentoCartao::setNumeroCartao(string numero) {
    this->numeroCartao = numero;
}