
#include "../include/utils.h"
#include "../include/commandsHandler.h"
#include<iostream>
#include<string>

int main(int argc, char* argv[]){
    if (argc < 2){
	std::cerr << "Usage: " << argv[0] << "--command" << std::endl;
	return EXIT_FAILURE;
    }

    toLower(argv[1]);
    std::string command = argv[1];

    if (command=="-help"){
	showHelp();
    } else if (command=="-compress"){
	try{
	    executeFileCompressor(argc, argv);
        } catch (SizeException& ex){
            std::cerr << ex.what() << std::endl;
	} catch (fileException& ex){
	    std::cerr << ex.what() << std::endl;
	}
    } else {
	std::cerr << "Unknown command: " << command << endl;
    }
    return EXIT_SUCCESS;
}
