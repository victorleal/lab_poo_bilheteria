/* 
 * File:   Cliente.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include "PersistentObject.h"

class Cliente : public PersistentObject{
    
private:
    string cpf;
    string email;
    string endereco;
    string nome;
    string telefone;
    
protected:
    string getClassName();
    void serialize();
    void unserialize();
    
public:
    string getCpf();
    string getEmail();
    string getEndereco();
    string getNome();
    string getTelefone();
    void setCpf(string);
    void setEmail(string);
    void setEndereco(string);
    void setNome(string);
    void setTelefone(string);
    void show();
    
};

#endif	/* CLIENTE_H */

