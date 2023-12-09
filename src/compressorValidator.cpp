#include "../include/exceptions.h"
#include "../include/utils.h"

void validateCompressor(int argc, char* argv[]){
    bool validitySize = isValidSize(argc);
    bool validityInputFile = isValidInputFile(argv);
    bool validityOutputFile = isValidOutputFile(argv);

    if (!validitySize){
	throw SizeException();
    }

    if (!validityInputFile){
	throw InputFileException();
    }

    if (!validityOutputFile){
	throw OutputFileException();
    }
}
