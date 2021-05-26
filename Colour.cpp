//
// Created by developer on 19-05-21.
//
#include <iostream>
#include "Colour.h"
using namespace std;

class Colour {
    string colourName;
    float cyan, magenta, yellow, key;

    public:
        Colour(string name, float c, float m, float y, float k){
            colourName = name;
            cyan = c;
            magenta = m;
            yellow = y;
            key = k;
        }

        string getName(){
            return colourName;
        }

        float * getColour(){
            float colour[4] = {cyan, magenta, yellow, key};

            return colour;
        }

        float getCyan(){
            return cyan;
        }

        float getMagenta(){
            return magenta;
        }

        float getYellow(){
            return yellow;
        }

        float getKey(){
            return key;
        }
};



