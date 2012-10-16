/* 
 * File:   Menu.h
 * Author: victorleal
 *
 * Created on 14 de Outubro de 2012, 22:41
 */

#ifndef MENU_H
#define	MENU_H

#include <iostream>
#include "Interfaces.h"

using namespace std;

class Menu {
public:
    Interfaces i;
    Menu();
    void submenuClientes();
    void submenuEspetaculos();
    void submenuBilhetes();    
    Menu(const Menu& orig);
    virtual ~Menu();
private:

};

#endif	/* MENU_H */

