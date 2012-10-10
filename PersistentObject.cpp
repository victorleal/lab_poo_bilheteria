/* 
 * File:   PersistentObject.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:25
 */

#include "PersistentObject.h"

int PersistentObject::removeFile() {
}

void PersistentObject::writeFile() {
}

string PersistentObject::getClassName() {
}

void PersistentObject::resetSerialized() {
}

void PersistentObject::serialize() {
}

void PersistentObject::unserialize() {
}

void PersistentObject::create() {
    char opcao[5];
    strcpy(opcao, ".txt");
    
    char file[30];
    strcpy(file, this->getFileName().c_str());
    
    strcat(file, opcao);
    
    ofstream handler;
    handler.open(file);
}

void PersistentObject::deleting() {
}

string PersistentObject::getField(int) {
}

string PersistentObject::getFileName() {
    string classe(this->getClassName());
    string underline("_");
    string id("1");
    string extensao(".txt");
    string file = classe + underline + id + extensao;
    return file;
}

int PersistentObject::getId() {
    return this->id;
}

void PersistentObject::read() {
}

void PersistentObject::read(int) {
}

void PersistentObject::setId(int id) {
    this->id = id;
}

void PersistentObject::show() {
}

void PersistentObject::update() {
}