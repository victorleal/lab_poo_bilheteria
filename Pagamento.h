/* 
 * File:   Pagamento.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef PAGAMENTO_H
#define	PAGAMENTO_H

#include <time.h>

#include "PersistentObject.h"
#include "FormaPagamento.h"

class Pagamento : public PersistentObject {
    
private:
    int codigoTipoPagamento;
    time_t dataPagamento;
    FormaPagamento formaPagamento;
    float valor;
    
protected:
    string getClassName();
    string serialize();
    void unserialize();
    
public:
    time_t getDataPagamento();
    FormaPagamento getFormaPagamento();
    float getValor();
    void setDataPagamento(time_t);
    void setFormaPagamento(FormaPagamento);
    void setValor(float);
    void show();

};

#endif	/* PAGAMENTO_H */

