/* 
 * File:   Interfaces.cpp
 * Author: victorleal
 * 
 * Created on 14 de Outubro de 2012, 23:14
 */

#include "Interfaces.h"
#include "Cliente.h"
#include "dirent.h"
#include <stdio.h>

Interfaces::Interfaces() {
}

void Interfaces::cadastrarCliente() {
    Cliente c;
    string nome, telefone, endereco, email, cpf;

    cout << "\nCadastro Cliente";

    cout << "\n\tDigite o nome: ";
    cin.clear();
    cin >> nome;
    c.setNome(nome);

    cout << "\n\tDigite o CPF: ";
    cin.clear();
    cin >> cpf;
    c.setCpf(cpf);

    cout << "\n\tDigite o endereco: ";
    cin.clear();
    cin >> endereco;
    c.setEndereco(endereco);

    cout << "\n\tDigite o telefone: ";
    cin.clear();
    cin >> telefone;
    c.setTelefone(telefone);

    cout << "\n\tDigite o e-mail: ";
    cin.clear();
    cin >> email;
    c.setEmail(email);

    c.create();

}

void Interfaces::cadastrarEspetaculo() {
}

void Interfaces::cadastrarBilhete() {
}

void Interfaces::editarCliente() {
    
    Cliente c;
    int id;
    
    cout << "ID do Cliente: ";
    cin.clear();
    cin >> id;
    c.setId(id);
    //---------
    
    unsigned char isDir = 0x4;
    unsigned char isFile = 0x8;

    DIR *dir = opendir("arquivos/");
    struct dirent *entrada;
    string cliente;
    
    
    cliente = "Cliente_.txt";
    
    while(entrada = readdir(dir))
    {
        if(entrada->d_type == isFile)
        {
            cout <<entrada->d_name;
        }
    }
    
    
    closedir(dir);
}

void Interfaces::editarEspetaculo() {
}

void Interfaces::editarBilhete() {
}

void Interfaces::excluirCliente() {
    Cliente c2;
    c2.setId(2);
    c2.deleting();
}

void Interfaces::excluirEspetaculo() {
}

void Interfaces::excluirBilhete() {
}

void Interfaces::listarCliente() {
    Cliente c2;
    c2.setId(2);
    c2.read();
    cout << "\nNome: " << c2.getNome() << "\n";
    cout << "\nSei la: " << c2.getCpf() << "\n";
    
}

void Interfaces::listarEspetaculo() {
}

void Interfaces::listarBilhete() {
}

Interfaces::Interfaces(const Interfaces& orig) {
}

Interfaces::~Interfaces() {
}

