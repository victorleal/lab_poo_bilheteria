/* 
 * File:   Pagamento.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:12
 */

#include "Pagamento.h"

string Pagamento::getClassName(){
    return "Pagamento";
}

void Pagamento::serialize() {

}

void Pagamento::unserialize() {

}

time_t Pagamento::getDataPagamento() {
    return this->dataPagamento;
}

FormaPagamento Pagamento::getFormaPagamento() {
    return this->formaPagamento;
}

float Pagamento::getValor() {
    return this->valor;
}

void Pagamento::setDataPagamento(time_t data) {
    this->dataPagamento = data;
}

void Pagamento::setFormaPagamento(FormaPagamento fp) {
    this->formaPagamento = fp;
}

void Pagamento::setValor(float valor) {
    this->valor = valor;
}

void Pagamento::show() {

}