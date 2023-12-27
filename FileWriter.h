#ifndef IFILEWRITER_H
#define IFILEWRITER_H

#include <fstream>
#include <iostream>

class FileWriter
{
public:
    FileWriter();
    ~FileWriter();

    bool open(std::string filename);
    bool close();
    void writeChar(char &c);
    void writeLine(std::string &line);

private:
    std::ofstream out_file;

};

#endif