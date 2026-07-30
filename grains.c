#include "grains.h"
uint64_t square(uint8_t index) {
    uint64_t grains = 1;
      if (index == 0) {
          return 0;
      } 
        
       for (index = index; index > 1; index--) {
            grains *= 2;
        }
    return grains;
    
}


uint64_t total(void) {
    uint64_t current_grain = 1;
    uint64_t total_grains = 1;
    int i = 64;
    
    for (i = i; i > 1; i--) {
        current_grain *= 2;
        total_grains += current_grain;
    }


    
    return total_grains;
}