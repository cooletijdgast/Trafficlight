#ifndef MODEL 
#define MODEL 

#include <string> 

using namespace std; 

class model{
    public:
        // view methods     
        int getState();     
        // update (controller) methods     
        int setState(int newState); 
    
    private:     
    // state data     
        int state = 0;
};

#endif 