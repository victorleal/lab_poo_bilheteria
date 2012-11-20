/* 
 * File:   Pagamento.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:12
 */

#include "Pagamento.h"
#include "TypeConverter.h"

Pagamento::Pagamento(){
    this->SEP = "|";
}

string Pagamento::getClassName(){
    return "Pagamento";
}

string Pagamento::serialize() {
    TypeConverter tc;
    
    this->serializedObject = "";
    
    stringstream id;
    id << this->getId();
    
    stringstream idFormaPagamento;
    idFormaPagamento << this->getFormaPagamento()->getId();
    
    stringstream tipoFormaPagamento;
    tipoFormaPagamento << this->getFormaPagamento()->getCodigoTipoPagamento();
    
    this->serializedObject += id.str() + this->SEP;
    this->serializedObject += tc.convertTimeToString(this->getDataPagamento()) + this->SEP;
    this->serializedObject += tc.convertFloatToString(this->getValor()) + this->SEP;
    this->serializedObject += tipoFormaPagamento.str() + this->SEP;
    this->serializedObject += idFormaPagamento.str() + this->SEP;
    
    return this->serializedObject;
}

void Pagamento::unserialize() {

}

time_t Pagamento::getDataPagamento() {
    return this->dataPagamento;
}

FormaPagamento* Pagamento::getFormaPagamento() {
    return this->formaPagamento;
}

float Pagamento::getValor() {
    return this->valor;
}

void Pagamento::setDataPagamento(time_t data) {
    this->dataPagamento = data;
}

void Pagamento::setFormaPagamento(FormaPagamento *fp) {
    this->formaPagamento = fp;
}

void Pagamento::setValor(float valor) {
    this->valor = valor;
}

void Pagamento::show() {

}
