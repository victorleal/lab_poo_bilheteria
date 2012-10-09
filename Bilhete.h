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

using namespace std;

class Bilhete : public PersistentObject {
private:
    Cliente cliente;
    string codigoBilhete;
    Espetaculo espetaculo;
    Pagamento pagamento;

public:
    string getClassName();
    Cliente getCliente();
    string getCodigoBilhete();
    Espetaculo getEspetaculo();
    Pagamento getPagamento();
    void Serialize();
    void setCodigoBilhete(string codigoBilhete);
    void setEspetaculo(Espetaculo espetaculo);
    void setPagamento(Pagamento pagamento);
    void show();
    void unserialize();
};


#endif	/* BILHETE_H */

