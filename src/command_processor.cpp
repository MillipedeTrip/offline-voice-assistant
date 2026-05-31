#include "command_processor.h"
#include <algorithm>

CommandProcessor::CommandProcessor() {
    commands = {
        {"hello", "Hi there!"},
        {"time", "It's time to check your clock."},
        {"exit", "Goodbye!"}
    };
}

std::string CommandProcessor::process(const std::string& command) {
    std::string lowerCommand = command;
    std::transform(lowerCommand.begin(), lowerCommand.end(), lowerCommand.begin(), ::tolower);

    for (const auto& pair : commands) {
        if (lowerCommand.find(pair.first) != std::string::npos) {
            return pair.second;
        }
    }
    return "I didn't understand that.";
}