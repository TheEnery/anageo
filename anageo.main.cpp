
#include <iostream>
#include <cmath>


int main() {

    const int width = 120, height = 30;
    const int size = width*height+1;
    char empty_field[size];
    for (int i = 0; i < size - 1; i++) {
        empty_field[i] = ' ';
    }
    empty_field[size - 1] = '\0';
    char field[size];

    double speed = 0.001;   //0.01 // 0.001 //0.001
    double frequency = 1.5; // 0.5 // 1.5   //2.5
    for (double i = 0.;; i += speed) {
        strcpy_s(field, empty_field);

        for (double j = 0.; j < width; j += 1.) {
            field[(int)round(sin((i + j) * frequency) * 14.5 + 14.5) * width + int(j)] = '0';
        }
        
        std::cout << field;
    }

    return 0;
}