
#include <iostream>
#include "../include/utils.h"
#include "../include/compressorValidator.h"
#include "../include/fileCompressor.h"


void showHelp(){
    std::cout << "Options:" << std::endl;
    std::cout << "  ./ZIPCRAFT-SQUEEZER [-help; -compress]" << std::endl;
    std::cout << "  -help                         Shows navigation page." << std::endl;
    std::cout << "                                Usage: -help" << std::endl;
    std::cout << "  -compress                     Compresses the input file." << std::endl;
    std::cout << "                                Usage: -compress inputfile outputfile" << std::endl;
}

void executeFileCompressor(int argc, char* argv[]){
    for (int i=0; i<2; i++){
	toLower(argv[i]);
    }

    validateCompressor(argc, argv);

    std::string inputFile = argv[2];
    std::string outputFile = argv[3];

    fileCompressor fileObject(inputFile, outputFile);

    fileObject.compressFile();
}
