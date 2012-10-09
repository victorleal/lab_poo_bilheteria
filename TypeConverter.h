/* 
 * File:   TypeConverter.h
 * Author: PC
 *
 * Created on 8 de Outubro de 2012, 20:33
 */

#ifndef TYPECONVERTER_H
#define	TYPECONVERTER_H

using namespace std;

class TypeConverter{
    
public:
    string convertFloatToString(float);
    float convertStringToFloat(string);
    time_t convertStringToTime(string);
    string convertTimeToString(time_t);
};

#endif	/* TYPECONVERTER_H */

