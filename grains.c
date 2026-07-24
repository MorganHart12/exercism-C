#include "grains.h"
uint64_t square(uint8_t index) {
    int grains = index * index;

    return grains;
    

}


uint64_t total(void) {
    int total_grains = 0;
    int i = 0;
    do {
        total_grains += (i * i);
        i++;
    } while (i <= 64);

    return total_grains;
    
}