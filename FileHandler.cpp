/* 
 * File:   FileHandler.cpp
 * Author: victorleal
 *
 * Created on 8 de Outubro de 2012, 23:05
 */

#include "FileHandler.h"

int FileHandler::deleteFile() {

}

int FileHandler::fileExists(){
    
}

FileHandler::FileHandler(string name){
    this->setFileName(name);
}

string FileHandler::getFileName(){
    return this->fileName;
}

string FileHandler::getFilePath(){
    
}

string FileHandler::readFromFile(){
    
}

void FileHandler::setFileName(string name){
    this->fileName = name;
}

void FileHandler::writeToFile(string object){
    ofstream handler;
    handler.open(this->getFileName().c_str()); 
    handler.write(object.c_str(), object.size());
    handler.close();
}