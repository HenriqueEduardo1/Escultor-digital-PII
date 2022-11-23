#include <iostream>
#include "sculptor.h"
#include "figurageometrica.h"
#include "interpretador.h"

using namespace std;

int main(){
    Sculptor *t_;

    Interpretador *parser = new Interpretador();

    vector <FiguraGeometrica*> figs;

    figs = parser->parse("C:/Users/henri/OneDrive/Documentos/UFRN/PA/Escultor3D-PII/file/arquivo-zumbi.txt");

    t_ = new Sculptor (parser->getDimx(), parser->getDimy(), parser->getDimz());

    for (size_t i=0; i <figs.size(); i++){
        figs[i] -> draw(*t_);
    }

    t_ -> writeOFF ((char*) "C:/Users/henri/OneDrive/Documentos/UFRN/PA/Escultor3D-PII/file/zumbi3D.OFF");

    return 0;
}
