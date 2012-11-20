/* 
 * File:   FormaPagamento.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef FORMAPAGAMENTO_H
#define	FORMAPAGAMENTO_H

#include "PersistentObject.h"

class FormaPagamento : public PersistentObject {
protected:
    string getClassName();
    string serialize();
    virtual void showDetailsFormaPagamento();
    void unserialize();
public:
    virtual int getCodigoTipoPagamento();
    virtual string getDescricaoTipoPagamento();
};

#endif	/* FORMAPAGAMENTO_H */

