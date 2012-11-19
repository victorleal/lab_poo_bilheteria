/* 
 * File:   Menu.cpp
 * Author: victorleal
 * 
 * Created on 14 de Outubro de 2012, 22:41
 */

#include "Menu.h"
#include "FileHandler.h"

Menu::Menu() {
    int opcao = 0;
    while (opcao != 4) {
        cout << "\n\tSISTEMA DE CONTROLE DE ESPETACULOS";
        cout << "\n1 - Clientes";
        cout << "\n2 - Espetaculos";
        cout << "\n3 - Bilhetes";
        cout << "\n4 - Sair";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                this->submenuClientes();
                
                break;
            case 2:
                this->submenuEspetaculos();
                break;
            case 3:
                this->submenuBilhetes();
             
                break;
             
        }
    }
}

void Menu::submenuClientes() {
    int opcao = 0;
    while (opcao != 5) {
        cout << "\n\tCLIENTES";
        cout << "\n1 - Cadastrar";
        cout << "\n2 - Editar";
        cout << "\n3 - Excluir";
        cout << "\n4 - Listar";
        cout << "\n5 - Voltar";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                i.cadastrarCliente();
                break;
            case 2:
                i.editarCliente();
                break;
            case 3:
                i.excluirCliente();
                break;
            case 4:
                i.listarCliente();
                break;
        }
    }
}

void Menu::submenuEspetaculos() {
    int opcao = 0;
    while (opcao != 5) {
        cout << "\n\tESPETACULOS";
        cout << "\n1 - Cadastrar";
        cout << "\n2 - Editar";
        cout << "\n3 - Excluir";
        cout << "\n4 - Listar";
        cout << "\n5 - Voltar";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                i.cadastrarEspetaculo();
                break;
            case 2:
                i.editarEspetaculo();
                break;
            case 3:
                i.excluirEspetaculo();
                break;
            case 4:
                i.listarEspetaculo();
                break;
        }
    }
}

void Menu::submenuBilhetes() {
    int opcao = 0;
    while (opcao != 5) {
        cout << "\n\tBILHETES";
        cout << "\n1 - Cadastrar";
        cout << "\n2 - Editar";
        cout << "\n3 - Excluir";
        cout << "\n4 - Listar";
        cout << "\n5 - Sair";
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                i.cadastrarBilhete();
                break;
            case 2:
                i.editarBilhete();
                break;
            case 3:
                i.excluirBilhete();
                break;
            case 4:
                i.listarBilhete();
                break;
        }
    }
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {
}

