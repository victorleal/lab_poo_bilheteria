/* 
 * File:   Submenu.h
 * Author: Epcom
 *
 * Created on 13 de Outubro de 2012, 21:57
 */

#ifndef MENU_H
#define	MENU_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Menu {
public:
    Menu();
    virtual ~Menu();
    void submenuBilhetes();
    void submenuEspetaculos();
    void submenuClientes();

};

#endif	/* SUBMENU_H */

