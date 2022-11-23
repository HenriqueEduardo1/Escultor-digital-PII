#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/*!
 * \brief A classe FiguraGeometrica é o construtor de uma figura.
 */
class FiguraGeometrica{
    public:
        virtual void draw(Sculptor &t) = 0;

};

#endif // FIGURAGEOMETRICA_H
