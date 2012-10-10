/* 
 * File:   Bilhete.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:31
 */

#ifndef BILHETE_H
#define	BILHETE_H

#include "PersistentObject.h"
#include "Cliente.h"
#include "Espetaculo.h"
#include "Pagamento.h"

class Bilhete : public PersistentObject {
    
private:
    Cliente cliente;
    string codigoBilhete;
    Espetaculo espetaculo;
    Pagamento pagamento;
    
protected:
    string getClassName();
    void serialize();
    void unserialize();

public:
    Cliente getCliente();
    string getCodigoBilhete();
    Espetaculo getEspetaculo();
    Pagamento getPagamento();
    void setCodigoBilhete(string codigoBilhete);
    void setEspetaculo(Espetaculo espetaculo);
    void setPagamento(Pagamento pagamento);
    void show();
    
};


#endif	/* BILHETE_H */

