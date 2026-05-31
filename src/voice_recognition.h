#ifndef VOICE_RECOGNITION_H
#define VOICE_RECOGNITION_H

#include <string>

class VoiceRecognition {
public:
    VoiceRecognition();
    ~VoiceRecognition();
    std::string listen();
};

#endif