#include<iostream>
#include<ifstream>

#ifndef UTILS_H
#define UTILS_H

inline void toLower(char *str){
    while (*str){
	*str = tolower(*str);
	str++;
    }
}

inline bool fileExists(const std::string &fileName){
    std::ifstream file(fileName);
    return file.good();
}

inline bool isValidSize(int argc){
    return argc==4;
}

inline bool isValidInputFile(char* argv[]){
    std::string inputFile;
    inputFile = argv[2];

    return fileExists(inputFile);
}

inline bool isValidOutputFile(char* argv[]){
    std::string outputFile;
    outputFile = argv[3];

    return fileExists(outputFile);
}

#endif // UTILS_H
