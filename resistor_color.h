#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
typedef enum {
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
    

} resistor_band_t;


int lookup (resistor_band_t color);

const resistor_band_t* list(void);
    
