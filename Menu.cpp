/* 
 * File:   Submenu.cpp
 * Author: victorleal
 * 
 * Created on 13 de Outubro de 2012, 21:57
 */

#include "Menu.h"

Menu::Menu() {
    int opcao = 0;

    while (opcao != 4) {
        cout << "\n\tSISTEMA CONTROLE ESPETACULOS";
        cout << "\n1 - Bilhetes";
        cout << "\n2 - Espetaculos";
        cout << "\n3 - Clientes";
        cout << "\n4 - Sair";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                this->submenuBilhetes();
                break;
            case 2:
                this->submenuEspetaculos();
                break;
            case 3:
                this->submenuClientes();
                break;
            case 4:
                exit(0);
        }
    }
}

void Menu::submenuBilhetes() {
    int opcao = 0;
    while (opcao != 4) {
        cout << "\n\tBilhetes";
        cout << "\n1 - Cadastrar";
        cout << "\n2 - Deletar";
        cout << "\n3 - Atualizar";
        cout << "\n4 - Voltar";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                this->submenuBilhetes();
                break;
            case 2:
                this->submenuEspetaculos();
                break;
            case 3:
                this->submenuClientes();
                break;
            case 4:
                exit(0);
        }
    }
}

void Menu::submenuEspetaculos() {
    int opcao = 0;
    while (opcao != 4) {
        cout << "\n\tEspetaculos";
        cout << "\n1 - Cadastrar";
        cout << "\n3 - Editar";
        cout << "\n2 - Deletar";
        cout << "\n3 - Listar";
        cout << "\n4 - Voltar";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                Espetaculo e;
                e->cadastrar();
                break;
            case 2:
                Espetaculo e;
                e->editar();
                break;
            case 3:
                Espetaculo e;
                e->deletar();
                break;
            case 4:
                Espetaculo e;
                e->listar();
                break;
        }
    }
}

void Menu::submenuClientes() {
    int opcao = 0;
    while (opcao != 4) {
        cout << "\n\tClientes";
        cout << "\n1 - Cadastrar";
        cout << "\n2 - Deletar";
        cout << "\n3 - Atualizar";
        cout << "\n4 - Voltar";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                Cliente c;
                c->cadastrar();
                break;
            case 2:
                Cliente c;
                c->editar();
                break;
            case 3:
                Cliente c;
                c->deletar();
                break;
            case 4:
                Cliente c;
                c->listar();
                break;
        }
    }
}

Menu::~Menu() {
    delete this;
}

