/* 
 * File:   PagamentoCartao.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:33
 */

#ifndef PAGAMENTOCARTAO_H
#define	PAGAMENTOCARTAO_H

#include "FormaPagamento.h"

class PagamentoCartao : public FormaPagamento{
private:
    string bandeira;
    string numeroCartao;
    
protected:
    string serialize();
    void showDetailsFormaPagamento();
    void unserialize();
    
public:
    PagamentoCartao::PagamentoCartao(string , string);
    string getBandeiraCartao();
    int getCodigoTipoPagamento();
    string getDescricaoTipoPagamento();
    string getNumeroCartao();
    void setBandeiraCartao(string);
    void setNumeroCartao(string);
    string getClassName();
    
};

#endif	/* PAGAMENTOCARTAO_H */

