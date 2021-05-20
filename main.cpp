#include <iostream>
#include <jsoncpp/json/value.h>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include "Colour.cpp"

using namespace std;
namespace pt = boost::property_tree;



int main() {
    pt::ptree root;

    string filePath = "/home/developer/Desktop";
    string fileName = "colours";

    pt::read_json(filePath + "/" + fileName + ".json", root);

    vector<Colour> colours = {};

    for(pt::ptree::value_type& v : root.get_child("colours")){
        string name = v.second.get<string>("colourName");
        int c = v.second.get<int>("cValue");
        int m = v.second.get<int>("mValue");
        int y = v.second.get<int>("yValue");
        int k = v.second.get<int>("kValue");

        Colour newColour = Colour(name, c, m, y, k);

        colours.push_back(newColour);
    }

    for(Colour colour : colours){
        cout << colour.getName() << " " << colour.getCyan() << " " << colour.getMagenta() << " " << colour.getYellow() << " " << colour.getKey() << " " <<"\n";

    }
}
