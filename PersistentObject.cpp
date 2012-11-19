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
    int retorno = fh.deleteFile();
}

void PersistentObject::writeFile() {
    FileHandler *fh = new FileHandler(this->getFileName());
    fh->writeToFile(this->serialize());
}

string PersistentObject::getClassName() {
}

void PersistentObject::resetSerialized() {
}

string PersistentObject::serialize() {
}

void PersistentObject::unserialize() {
}

void PersistentObject::create() {
    this->setId();
    //FileHandler *fh = new FileHandler(this->getFileName());
    this->writeFile();
}

void PersistentObject::deleting() {
    
    this->removeFile();
}

string PersistentObject::getField(int) {
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

void PersistentObject::read() {
    FileHandler fh(this->getFileName());
    int a = fh.fileExists();
    if (a == 1) {
        this->serializedObject = fh.readFromFile();
        this->unserialize();
    } else {
        cout << " ai nao amigo" << endl;
    }
}

void PersistentObject::read(int id) {
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
}
