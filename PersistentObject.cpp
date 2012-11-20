/* 
 * File:   PersistentObject.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:25
 */

#include "PersistentObject.h"
#include "FileHandler.h"
#include "TypeConverter.h"

int PersistentObject::removeFile()//André 17/10/2012 ****
{
    FileHandler fh(this->getFileName());
    return fh.deleteFile();
}

void PersistentObject::writeFile() {
    FileHandler *fh = new FileHandler(this->getFileName());
    fh->writeToFile(this->serialize());
}

string PersistentObject::getClassName() {
}

void PersistentObject::resetSerialized() {
    this->serializedObject = "";
}

string PersistentObject::serialize() {
}

void PersistentObject::unserialize() {
}

void PersistentObject::create() {
    this->setId();
    this->writeFile();
}

void PersistentObject::deleting() {
    int retorno = this->removeFile();
    if (retorno == 0) {
        cout << "Erro ao tentar excluir registro. Tente Novamente" << endl;
    } else {
        cout << "Registro excluido com sucesso!" << endl;
    }
}

string PersistentObject::getField(int field) {

    int cont = 0;
    int cont2 = 0;
    int qtdePipe = 0;

    int campo = field - 1;

    char string[this->serializedObject.length()];
    char recebe[25];

    strcpy(string, this->serializedObject.c_str());
    for (cont = 0; string[cont] != '\0'; cont++) {
        if (string[cont] == '|') {
            qtdePipe++;
        }
        if (campo == qtdePipe) {
            if(string[cont] == '|'){
                cont++;
            }
            recebe[cont2] = string[cont];
            cont2++;
        }
    }
    recebe[cont2] = '\0';
    
    return recebe;
}

string PersistentObject::getFileName() {
    string classe(this->getClassName());
    string underline("_");

    stringstream id;
    id << this->getId();

    string extensao(".txt");
    string file = classe + underline + id.str() + extensao;
    return file;
}

int PersistentObject::getId() {
    return this->id;
}

int PersistentObject::read() {
    FileHandler fh(this->getFileName());
    int a = fh.fileExists();
    if (a == 1) {
        this->serializedObject = fh.readFromFile();
        this->unserialize();
        return 1;
    } else {
        perror("Registro nao encontrado"); //cout << "Objeto nao encontrado" << endl;
        return 0;
    }
}

int PersistentObject::read(int id) {
    this->setId(id);
    this->read();
}

void PersistentObject::setId() {
    FileHandler fh;
    TypeConverter tc;
    this->id = tc.convertStringToInt(fh.getNextId(this->getClassName()));
}

void PersistentObject::setId(int id) {
    this->id = id;
}

void PersistentObject::show() {
}

void PersistentObject::update() {
    FileHandler *fh = new FileHandler(this->getFileName());
    fh->writeToFile(this->serialize());
}

void PersistentObject::listar(){
    FileHandler fh;
    string *objects = fh.listFiles(this->getClassName());
    int cont = 0;
    
    while(objects[cont] != "\0"){
        this->serializedObject = objects[cont];
        cout << this->getField(1) << " - " << this->getField(2) << endl;
        cont++;
    }
}
