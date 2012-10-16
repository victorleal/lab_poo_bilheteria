/* 
 * File:   PersistentObject.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:25
 */

#include "PersistentObject.h"
#include "FileHandler.h"

int PersistentObject::removeFile() {
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
    ofstream handler;
    handler.open(this->getFileName().c_str());
    this->writeFile();
    handler.close();
}

void PersistentObject::deleting() {
}

string PersistentObject::getField(int) {
}

string PersistentObject::getFileName() {
    string classe(this->getClassName());
    string underline("_");
    string id("2");
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