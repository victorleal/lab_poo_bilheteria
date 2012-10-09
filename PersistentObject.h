/* 
 * File:   PersistentObject.h
 * Author: PC
 *
 * Created on 8 de Outubro de 2012, 20:32
 */

#ifndef PERSISTENTOBJECT_H
#define	PERSISTENTOBJECT_H

using namespace std;

class PersistentObject{
    
private:
    int id;
    int removeFile();
    void writeFile();
    
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
    
protected:
    string serializedObject;
    virtual string getClassName();
    void resetSerialized();     
    virtual void serialize();
    virtual void unserialize();
};

#endif	/* PERSISTENTOBJECT_H */

