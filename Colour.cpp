//
// Created by developer on 19-05-21.
//
#include <iostream>
#include "Colour.h"
using namespace std;

class Colour {
    string colourName;
    int cyan, magenta, yellow, key;

    public:
        Colour(string name, int c, int m, int y, int k){
            colourName = name;
            cyan = c;
            magenta = m;
            yellow = y;
            key = k;
        }

        string getName(){
            return colourName;
        }

        int * getColour(){
            int colour[4] = {cyan, magenta, yellow, key};

            return colour;
        }

        int getCyan(){
            return cyan;
        }

        int getMagenta(){
            return magenta;
        }

        int getYellow(){
            return yellow;
        }

        int getKey(){
            return key;
        }
};



