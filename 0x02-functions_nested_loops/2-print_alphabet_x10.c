#include "main.h"

void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++) {
        print_alphabet(); // Assuming this function exists and prints the alphabet
    }
}

int main(void) {
    print_alphabet_x10();

    return 0;
}
