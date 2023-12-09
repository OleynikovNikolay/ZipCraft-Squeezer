#include<iostream>
#include<fstream>

class fileCompressor{
    public:
	std::string inputFile;
	std::string outputFile;

	void compressFile(const std::string &inputFile, const std::string &outputFile){
	    std::ifstream inFile(inputFile, std::ios::binary);
	    std::ofstream outFile(outputFile, std::ios::binary);

	    if (!inFile || !outFile){
		std::cerr << "Error opening input/output file" << std::endl;
		return;
	    }

	    char currentChar, nextChar;

	    unsigned char count = 1;

	    while (inFile.get(currentChar)){
		while (inFile.get(nextChar) && nextChar == currentChar){
		    count++;
		}

	    	outFile.write(reinterpret_cast<char *>(&count), sizeof(count));
	    	outFile.put(currentChar);
	    	count = 1;
	    }
	    
	    inFile.close();
	    outFile.close();
	}
};
