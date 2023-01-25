#ifndef ADVANCED_PROGRAMMING_EXERSIZE_4_DefaultIO_H
#define ADVANCED_PROGRAMMING_EXERSIZE_4_DefaultIO_H

#include <iostream>
#include <string>
#include "reader.h"

using namespace std;

class DefaultIO {
public:
    DefaultIO(){};
    virtual string read() {return "";};
    virtual void write(const string& output) {};
    virtual void writeFile(const string& filePath, const string& contents) {};
    virtual string saveData(string dataType) {return "";};
    virtual string readFile(const string& filePath) {return "";};
    virtual int writeFromFile(const string& data) {return 0;};
    

};

#endif