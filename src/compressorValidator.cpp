#include "../include/exceptions.h"
#include "../include/utils.h"
#include "../include/fileCompressor.h"

void validateCompressor(int argc, char* argv[]){
    bool validitySize = isValidSize(argc);
    bool validityInputFile = isValidInputFile(argv);

    if (!validitySize){
	throw SizeException();
    }

    if (!validityInputFile){
	throw InputFileException();
    }
}
