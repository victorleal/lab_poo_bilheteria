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
    string numeroBoleto;

protected:
    string serialize();
    void showDetailsFormaPagamento();
    void unserialize();

public:
    PagamentoBoleto::PagamentoBoleto(string, string);
    string getBancoResponsavel();
    int getCodigoTipoPagamento();
    string getDescricaoTipoPagamento();
    string getNumeroBoleto();
    void setBancoResponsavel(string);
    void setNumeroBoleto(string);
    string getClassName();

};

#endif	/* PAGAMENTOBOLETO_H */

