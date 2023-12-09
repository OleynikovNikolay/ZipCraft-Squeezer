cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(ZIPCRAFT-SQUEEZER VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/mac)

add_executable(ZIPCRAFT-SQUEEZER 
                    ../src/main.cpp
		    ../src/fileCompressor.cpp
                    ../src/compressorValidator.cpp
		    ../src/commandsHandler.cpp)

target_include_directories(ZIPCRAFT-SQUEEZER PRIVATE ../include)
