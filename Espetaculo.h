/* 
 * File:   Espetaculo.h
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef ESPETACULO_H
#define	ESPETACULO_H

#include "PersistentObject.h"
#include <time.h>

class Espetaculo : public PersistentObject{
    
private:
    time_t dataHorario;
    string descricao;
    string diretor;
    string elenco;
    float precoBilhete;
    string titulo;
    
protected:
    string getClassName();
    string serialize();
    void unserialize();
    
public:
    time_t getDataHorario();
    string getDescricao();
    string getDiretor();
    string getElenco();
    float getPrecoBilhete();
    string getTitulo();
    void setDataHorario(time_t);
    void setDescricao(string);
    void setDiretor(string);
    void setElenco(string);
    void setPrecoBilhete(float);
    void setTitulo(string);
    
};

#endif	/* ESPETACULO_H */

