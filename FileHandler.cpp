/* 
 * File:   FileHandler.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:05
 */

#include "FileHandler.h"
#include "TypeConverter.h"
#include <dirent.h>

int FileHandler::deleteFile() {
    string fileName;
    int retorno = 0;
    string caminho = "arquivos/";
    fileName = caminho + this->getFileName();

    if (this->fileExists()) { //se o arquivo existir
        if (remove(fileName.c_str()) == 0) { //tente remover
            retorno = 1;
        }
    }

    return retorno;
}

int FileHandler::fileExists() {
    unsigned char isFile = 0x8;
    DIR *dir = opendir("arquivos/");
    struct dirent *entrada;

    while (entrada = readdir(dir)) {
        if (entrada->d_type == isFile) {
            if (entrada->d_name == this->getFileName()) {
                return 1;
            }
        }
    }

    return 0;
}

string FileHandler::getNextId(string classe) {
    TypeConverter tc;
    string conteudo = "";
    int nextId;

    string name = "arquivos/id" + classe + ".txt";
    ifstream fin(name.c_str());

    if (fin.is_open()) {
        char ch;
        while (fin.get(ch)) {
            conteudo.append(1, ch);
        }
        fin.close();
    }

    nextId = tc.convertStringToInt(conteudo);
    nextId++;

    ofstream fin2(name.c_str());
    conteudo = tc.convertIntToString(nextId);
    fin2.write(conteudo.c_str(), conteudo.size());

    return conteudo;
}

FileHandler::FileHandler(string name) {
    fstream handler;
    this->setFileName(name);
    string filename = this->getFilePath() + this->getFileName();
    handler.open(filename.c_str());
    handler.close();
}

FileHandler::FileHandler() {

}

string FileHandler::getFileName() {
    return this->fileName;
}

string FileHandler::getFilePath() {
    string path = "arquivos/";
    return path;

}

string FileHandler::readFromFile() {
    string conteudo = "";
    string name = this->getFilePath() + this->getFileName();
    ifstream fin(name.c_str(), ios::out);

    if (fin.is_open()) {
        char ch;
        while (fin.get(ch)) {
            conteudo.append(1, ch);
        }
        fin.close();
    }

    return conteudo;
}

void FileHandler::setFileName(string name) {
    this->fileName = name;
}

void FileHandler::writeToFile(string object) {
    ofstream handler;
    string file = this->getFilePath() + this->getFileName();
    handler.open(file.c_str());
    handler.write(object.c_str(), object.size());
    handler.close();
}
