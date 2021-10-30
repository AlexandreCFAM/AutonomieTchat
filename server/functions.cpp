#include "functions.h"
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

std::string run(std::string command)
{
    char buffer[128];
    std::string result = "";

    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        return "-1";
    }

    while (!feof(pipe)) {
    
    if (fgets(buffer, 128, pipe) != NULL)
        result += buffer;
   }

   pclose(pipe);
   return result;
}

char *convertStringToCharPointer(std::string str) // Attention, cette fonction retourne un mauvais pointeur !
{
    const char *ToReturn = str.c_str();
    return (char*)ToReturn;
}