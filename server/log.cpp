#include "log.h"
#include <string>
#include <iostream>

void Log::info(std::string text)
{
    Log::write(LOG_INFO_FLAG, text);
}

void Log::infoln(std::string text)
{
    Log::info(text);
    std::cout<<std::endl;
}

void Log::success(std::string text)
{
    Log::write(LOG_SUCCESS_FLAG, text);
}

void Log::successln(std::string text)
{
    Log::success(text);
    std::cout<<std::endl;
}

void Log::error(std::string text)
{
    Log::write(LOG_ERROR_FLAG, text);
}

void Log::errorln(std::string text)
{
    Log::error(text);
    std::cout<<std::endl;
}

void Log::write(char LOG_FLAG, std::string text)
{
    std::cout<<"["<<LOG_FLAG<<"] "<<text;
}