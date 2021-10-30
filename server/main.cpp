#include <iostream>
#include "log.h"
#include "network.h"
#include "config.h"

Log logger = {};

int main()
{
    logger.infoln("Starting server service...");
    logger.success("Running the application on ");

    if(OPERATING_SYSTEM == LINUX) std::cout<<"linux"<<std::endl;
    else if(OPERATING_SYSTEM == WINDOWS) std::cout<<"windows"<<std::endl;
    else if(OPERATING_SYSTEM == MAC_OS) std::cout<<"mac os"<<std::endl;
    else
    {
        std::cout<<"unknown"<<std::endl;
        return 1;
    }
    if(!network::IsConnected())
    {
        logger.errorln("No Internet connection detected!");
        return 1;
    } else logger.successln("Connected to the Internet!");
    return 0;
}