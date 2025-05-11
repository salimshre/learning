#include <iostream>

using namespace std;  // Avoids std:: prefix

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

void output_message(string message) {  // Fixed return type
    cout << message << endl;
}
