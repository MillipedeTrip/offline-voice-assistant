#include "../src/command_processor.h"
#include <cassert>

void test_process_commands() {
    CommandProcessor processor;
    assert(processor.process("hello") == "Hi there!");
    assert(processor.process("TIME") == "It's time to check your clock.");
    assert(processor.process("unknown") == "I didn't understand that.");
}

int main() {
    test_process_commands();
    return 0;
}