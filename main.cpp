/* 
 * File:   main.cpp
 * Author: PC
 *
 * Created on 8 de Outubro de 2012, 20:31
 */

#include <cstdlib>
#include <iostream>
#include "TypeConverter.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    TypeConverter tc;
    time_t tempo;
    tempo = tc.convertStringToTime("09/10/2012 20:33:00");
    cout << tc.convertTimeToString(tempo);
    return 0;
}

