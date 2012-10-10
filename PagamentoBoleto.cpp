/* 
 * File:   PagamentoBoleto.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:14
 */

#include "PagamentoBoleto.h"

void PagamentoBoleto::serialize() {

}

void PagamentoBoleto::showDetailsFormaPagamento() {

}

void PagamentoBoleto::unserialize() {

}

string PagamentoBoleto::getBancoResponsavel() {
    return this->bancoResponsavel;
}

int PagamentoBoleto::getCodigoTipoPagamento() {
    return this->getCodigoTipoPagamento();
}

string PagamentoBoleto::getDescricaoTipoPagamento() {
    return this->getDescricaoTipoPagamento();
}

long PagamentoBoleto::getNumeroBoleto() {
    return this->numeroBoleto;
}

void PagamentoBoleto::setBancoResponsavel(string bancoResponsavel) {
    this->bancoResponsavel = bancoResponsavel;
}

void PagamentoBoleto::setNumeroBoleto(long numero) {
    this->numeroBoleto = numero;
}