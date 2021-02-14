#include "stoplicht-model.h"
#include <string> 
#include <iostream> 

using namespace std;

int model::getState(){
    return state;
}
// update (controller) methods     
int model::setState(int newState){
    if(newState < 1 || newState > 3 ){
        cout << "Input must be between 1 and 3!" << endl;
        return 1;
    }
    else{
        state = newState;
        return 0;
    }
    
} 