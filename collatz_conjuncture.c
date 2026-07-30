#include "collatz_conjecture.h"

int steps(int start) {
    int count = 0;
    while (start != 1) {
    if ( start % 2 == 0) {
        int start = start / 2;
        count += 1;
        
    } else {
        int start = (start * 3) + 1;
        count += 1;
    }

    }    
    return count;
}