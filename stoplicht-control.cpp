#include "stoplicht-control.h"

using namespace std;

void control::showLight(){
    vw.showData(mod.getState());
}
// update (controller) methods     
void control::setLight(int newState){
    if(mod.setState(newState))
        print = 1;
}