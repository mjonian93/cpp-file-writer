#include "FileWriter.h"

FileWriter::FileWriter()
{

}

FileWriter::~FileWriter()
{

}

bool FileWriter::open(std::string filename)
{
    out_file.open(filename);
    return !out_file ? false : true;
}

bool FileWriter::close()
{
    out_file.close();
    return !out_file ? true : false;
}


void FileWriter::writeChar(char &c)
{
    out_file << c << std::endl;
}

void FileWriter::writeLine(std::string &line)
{
    out_file << line << std::endl;
}
