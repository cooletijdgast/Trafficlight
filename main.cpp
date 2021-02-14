#include "stoplicht-control.h"
#include <iostream> 
#include <unistd.h>

using namespace std; 

int main() {   
    model model;
    control light ;
    unsigned int microsecond = 1000000;
    
    for(int i = 1; i < 4; i++){
        light.setLight(i);
        if(!light.print){
            light.showLight();
            usleep(1 * microsecond);
        } 
    }

    cout << endl;
    return 0; 
}