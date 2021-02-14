#ifndef CONTROL 
#define CONTROL 

#include "stoplicht-model.h"
#include "stoplicht-view.h"

class control{
    public:
        // view methods     
        void showLight();     
        // update (controller) methods     
        void setLight(int newLight);
        int print = 0;  
    private:
        model mod; 
        view vw;
};

#endif