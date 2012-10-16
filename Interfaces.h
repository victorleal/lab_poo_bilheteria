/* 
 * File:   Interfaces.h
 * Author: victorleal
 *
 * Created on 14 de Outubro de 2012, 23:14
 */

#ifndef INTERFACES_H
#define	INTERFACES_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Interfaces {
public:
    Interfaces();

    //Chamadas funções classe - INICIO
    void cadastrarCliente();
    void cadastrarEspetaculo();
    void cadastrarBilhete();
    void editarCliente();
    void editarEspetaculo();
    void editarBilhete();
    void excluirCliente();
    void excluirEspetaculo();
    void excluirBilhete();
    void listarCliente();
    void listarEspetaculo();
    void listarBilhete();
    //Chamadas funções classe - FIM

    Interfaces(const Interfaces& orig);
    virtual ~Interfaces();
private:

};

#endif	/* INTERFACES_H */

