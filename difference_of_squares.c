#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) {
    int total = 0;
    for (number = number; number > 0; number--) {
        total += number;
    }
    int squared_total = total * total;
    return squared_total;
    
}
unsigned int square_of_sum(unsigned int number) {
    int total = 0;
    for (number = number; number > 0; number--) {
        total += number * number;
    }
    return total;
    
}
unsigned int difference_of_squares(unsigned int number) {
    unsigned int a = sum_of_squares(number);
    unsigned int b = square_of_sum(number);

    return b - a;
    
}