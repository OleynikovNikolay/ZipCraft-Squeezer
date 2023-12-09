#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include<stdexcept>

class SizeException : public std::runtime_error{
    public:
	SizeException() : std::runtime_error("Usage: ./ZIPCRAFT-SQUEEZER -compress inputfile outputfile"){}
};


class InputFileException : public std::runtime_error{
    public:
	InputFileException() : std::runtime_error("Not valid input file"){}
};

class OutputFileException : public std::runtime_error{
    public:
	OutputFileException() : std::runtimte_error("Not valud output file"){}
};

#endif //EXCEPTIONS_H
