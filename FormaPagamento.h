/* 
 * File:   FormaPagamento.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef FORMAPAGAMENTO_H
#define	FORMAPAGAMENTO_H

#include "PersistentObject.h"


using namespace std;

class FormaPagamento : public PersistentObject{
protected:
    string getClassName();
    void serialize();
    void showDetailsFormaPagamento();
    void unserialize();
};

#endif	/* FORMAPAGAMENTO_H */

