#include <iostream>
#include "voice_recognition.h"
#include "command_processor.h"

int main() {
    std::cout << "Offline Voice Assistant Started. Say something..." << std::endl;

    VoiceRecognition recognizer;
    CommandProcessor processor;

    while (true) {
        std::string command = recognizer.listen();
        if (!command.empty()) {
            std::string response = processor.process(command);
            std::cout << "Assistant: " << response << std::endl;
        }
    }

    return 0;
}