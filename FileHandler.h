/* 
 * File:   FileHandler.h
 * Author: PC
 *
 * Created on 8 de Outubro de 2012, 20:33
 */

#ifndef FILEHANDLER_H
#define	FILEHANDLER_H

#include "PersistentObject.h"

class FileHandler : public PersistentObject{
    
private:
    string fileName;
    
public:
    string path;
    
    int deleteFile();
    int fileExists();
    FileHandler(string);
    FileHandler();
    string getFileName();
    string getFilePath();
    string readFromFile();
    void setFileName(string);
    void writeToFile(string);
    void listFiles();
    string getNextId(string);
    string *listFiles();
    
};

#endif	/* FILEHANDLER_H */

