/* 
 * File:   TypeConverter.h
 * Author: PC
 *
 * Created on 8 de Outubro de 2012, 20:33
 */

#ifndef TYPECONVERTER_H
#define	TYPECONVERTER_H

#include <sstream>
#include <time.h>

using namespace std;

class TypeConverter{
    
private:
    char buffer[21];
    struct tm tm;
    
public:
    string convertFloatToString(float);
    string convertIntToString(int);
    float convertStringToFloat(string);
    int convertStringToInt(string);
    time_t convertStringToTime(string);
    string convertTimeToString(time_t);
};

#endif	/* TYPECONVERTER_H */

