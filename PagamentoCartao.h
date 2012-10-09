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
    long numeroCartao;
    
protected:
    void serialize();
    void showDetailsFormaPagamento();
    void unserialize();
    
public:
    string getBandeiraCartao();
    int getCodigoTipoPagamento();
    string getDescricaoTipoPagamento();
    long getNumeroCartao();
    void setBandeiraCartao(string);
    void setNumeroCartao(long);
    
};

#endif	/* PAGAMENTOCARTAO_H */

