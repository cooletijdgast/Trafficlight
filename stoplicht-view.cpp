#include "stoplicht-view.h"
#include <iostream> 

using namespace std;

void view::showData(int data){
    int temp = 0;
    test = "        ##\n"
        "       _[]_\n"
        "      [____]\n"
        ".-----'    '-----.\n";
    cout << test;
    
    for(int i = 0; i < 3; i++){
        if(temp == (data - 1))
            fillLight(data - 1);
        else
            emptyLight();
        temp++;
    }

    test = "'-----.____.-----'\n\n";
    cout << test;
}

void view::fillLight(int color){
    kleur[0] = "31m";
    kleur[1] = "33m";
    kleur[2] = "32m";

    cout <<  "|     .====.     |\n|    /";
    for(int i = 0; i < 6; i++)
        cout << "\x1B[" << kleur[color] << "#\033[0m";
    cout << "\\    |\n";

    cout << "|   [";
    for(int i = 0; i < 8; i++)
        cout << "\x1B[" << kleur[color] << "#\033[0m";
    cout << "]   |\n";

    cout << "|    \\";
    for(int i = 0; i < 6; i++)
        cout << "\x1B[" << kleur[color] << "#\033[0m";
    cout << "/    |\n";

    cout << "|     .====.     |\n";

}

void view::emptyLight(){
    string temp = "|     .====.     |\n"
                  "|    /      \\    |\n"
                  "|   [        ]   |\n"
                  "|    \\      /    |\n"
                  "|     .====.     |\n";
    cout << temp;
}