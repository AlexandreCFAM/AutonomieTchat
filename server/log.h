#ifndef __LOG__H
#define __LOG__H

#include <string>

#define LOG_INFO_FLAG 'i'
#define LOG_SUCCESS_FLAG '+'
#define LOG_ERROR_FLAG '-'

class Log
{
public:
    void info(std::string text);
    void infoln(std::string text);
    void success(std::string text);
    void successln(std::string text);
    void error(std::string text);
    void errorln(std::string text);
private:
    void write(char LOG_FLAG, std::string text);
};

#endif