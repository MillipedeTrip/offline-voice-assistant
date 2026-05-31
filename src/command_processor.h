#ifndef COMMAND_PROCESSOR_H
#define COMMAND_PROCESSOR_H

#include <string>
#include <map>

class CommandProcessor {
public:
    CommandProcessor();
    std::string process(const std::string& command);
private:
    std::map<std::string, std::string> commands;
};

#endif