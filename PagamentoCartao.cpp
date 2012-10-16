/* 
 * File:   PagamentoCartao.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:20
 */

#include "PagamentoCartao.h"

string PagamentoCartao::serialize() {
}

void PagamentoCartao::showDetailsFormaPagamento() {
}

void PagamentoCartao::unserialize() {
}

string PagamentoCartao::getBandeiraCartao() {
    return this->bandeira;
}

int PagamentoCartao::getCodigoTipoPagamento() {
    return this->getCodigoTipoPagamento();
}

string PagamentoCartao::getDescricaoTipoPagamento() {
    return this->getDescricaoTipoPagamento();
}

long PagamentoCartao::getNumeroCartao() {
    return this->numeroCartao;
}

void PagamentoCartao::setBandeiraCartao(string bandeira) {
    this->bandeira = bandeira;
}

void PagamentoCartao::setNumeroCartao(long numero) {
    this->numeroCartao = numero;
}