#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include "figurageometrica.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Interpretador{
    protected:
        int dimx, dimy, dimz;
        float r, g, b, a;
    public:
        Interpretador();
        vector<FiguraGeometrica *> parse(std::string filename);
        int getDimx();
        int getDimy();
        int getDimz();
};


#endif
