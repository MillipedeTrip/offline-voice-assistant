cmake_minimum_required(VERSION 3.10)
project(offline-voice-assistant)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
find_package(PortAudio REQUIRED)
find_package(Vosk REQUIRED)

add_executable(offline-voice-assistant
    src/main.cpp
    src/voice_recognition.cpp
    src/command_processor.cpp
)

target_link_libraries(offline-voice-assistant
    ${OpenCV_LIBS}
    ${PortAudio_LIBRARIES}
    ${Vosk_LIBRARIES}
)