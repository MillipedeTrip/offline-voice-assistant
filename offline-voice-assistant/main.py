import speech_recognition as sr
from assistant.core import listen, speak, process_command

def main():
    speak("Hello, I am your offline voice assistant. How can I help you?")
    while True:
        command = listen()
        if command:
            if "stop" in command or "exit" in command:
                speak("Goodbye!")
                break
            process_command(command)

if __name__ == "__main__":
    main()