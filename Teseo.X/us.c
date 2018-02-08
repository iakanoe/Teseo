#include "us.h"

enum{};

void initUS(){
    TRIS_ECHO_IZQ = INPUT;
    TRIS_ECHO_CEN = INPUT;
    TRIS_ECHO_DER = INPUT;
    
    TRIS_TRIG_IZQ = OUTPUT;
    TRIS_TRIG_CEN = OUTPUT;
    TRIS_TRIG_DER = OUTPUT;
}

void updateUS(){
    US
}


void updateIzq(){
    
}