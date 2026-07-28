#include "resistor_color.h"


int lookup (resistor_band_t color) {
    return color;
}

const resistor_band_t* list(void) {
     const resistor_band_t all_colors[] = {
    black,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white
    };
   
}