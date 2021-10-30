#include "log.h"
#include "network.h"
#include <string>
#include "main.h"
#include "config.h"
#include "functions.h"
#include <iostream>

bool network::IsConnected()
{
    std::string url = "www.google.com";
    logger.infoln("Checking internet connection...");
    std::string command;
    #if OPERATING_SYSTEM == LINUX
        command = "ping -c 1 ";
    #elif OPERATING_SYSTEM == WINDOWS
        command = "ping ";
    #elif OPERATING_SYSTEM == MAC_OS
        command = "ping -c ";
    #else
        command = "Operating System not detected!";
    #endif
    
    std::string output = run(command + url);
    
    #if OPERATING_SYSTEM == LINUX
       char *c = &output[0];
       if(c[0] == *(char*)"P") return true;
       else if(c[0] == *(char*)"p") return false;
       else return false;
    #elif OPERATING_SYSTEM == WINDOWS
        //TODO
        return true;
    #elif OPERATING_SYSTEM == MAC_OS
        //TODO
        return true;
    #else
        // Si on a ça, c'est qu'il y a une erreur donc on return false
        return false;
    #endif
}