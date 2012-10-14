/* 
 * File:   FileHandler.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:05
 */

#include "FileHandler.h"

int FileHandler::deleteFile() {

}

int FileHandler::fileExists() {

}

FileHandler::FileHandler(string caminho) {
    this->path = caminho;

}

string FileHandler::getFileName() {
    return this->fileName;
}

string FileHandler::getFilePath() {
    return this->path;
}

string FileHandler::readFromFile() {

}

void FileHandler::setFileName(string name) {
    this->fileName = name;
}

void FileHandler::writeToFile(string object) {
    ofstream file;
    string name = this->getFilePath() + this->getFileName();
    file.open(name.c_str());
    if (file.is_open()) {
        file << object;
    }
    file.close();

}