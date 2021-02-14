#ifndef VIEW 
#define VIEW 

#include <string> 

using namespace std; 

class view{
    public:
        void showData(int data);
        void fillLight(int color);
        void emptyLight();
        string test = "";
    private:
        string kleur[3];
};

#endif