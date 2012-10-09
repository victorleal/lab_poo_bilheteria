/* 
 * File:   PersistentObject.h
 * Author: PC
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef PERSISTENTOBJECT_H
#define	PERSISTENTOBJECT_H

#include <iostream>

using namespace std;

class PersistentObject {
    
private:
    int id;
    
    int removeFile();
    void writeFile();

protected:
    string serializedObject;
    
    virtual string getClassName();
    void resetSerialized();
    virtual void serialize();
    virtual void unserialize();

public:
    string SEP;

    void create();
    void deleting();
    string getField(int);
    string getFileName();
    int getId();
    void read();
    void read(int);
    void setId(int);
    virtual void show();
    void update();

};

#endif	/* PERSISTENTOBJECT_H */

