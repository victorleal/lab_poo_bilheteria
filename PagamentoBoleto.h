/* 
 * File:   PagamentoBoleto.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:33
 */

#ifndef PAGAMENTOBOLETO_H
#define	PAGAMENTOBOLETO_H

#include "FormaPagamento.h"

class PagamentoBoleto : public FormaPagamento {
private:
    string bancoResponsavel;
    long numeroBoleto;

protected:
    void serialize();
    void showDetailsFormaPagamento();
    void unserialize();

public:
    string getBancoResponsavel();
    int getCodigoTipoPagamento();
    string getDescricaoTipoPagamento();
    long getNumeroBoleto();
    void setBancoResponsavel();
    void setNumeroBoleto();

};

#endif	/* PAGAMENTOBOLETO_H */

