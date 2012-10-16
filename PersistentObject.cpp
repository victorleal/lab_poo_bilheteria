/* 
 * File:   PersistentObject.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:25
 */

#include <sstream>

#include "PersistentObject.h"
#include "FileHandler.h"

int PersistentObject::removeFile() {
}

void PersistentObject::writeFile() {
    FileHandler* fh = new FileHandler(this->getClassName());
    fh->setFileName(this->getFileName());
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
    string file = this->getFileName();
    ofstream handler;
    handler.open(file.c_str());
    handler.close();
}

void PersistentObject::deleting() {
}

string PersistentObject::getField(int) {
}

string PersistentObject::getFileName() {
    string classe(this->getClassName());
    string extensao(".txt");
    
    stringstream ss;
    ss << this->getId();
    
    string file = classe + "_";
    file = file + ss.str();
    file = file + extensao;
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