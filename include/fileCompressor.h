
#ifndef FILE_COMPRESSOR_H
#define FILE_COMPRESSOR_H

class fileCompressor{
    public:
	std::string inputFile;
	std::string outputFile;

	fileCompressor(const std::string &inputFile, const std::string &outputFile);

	void compressFile();
};

#endif //FILE_COMPRESSOR_H
