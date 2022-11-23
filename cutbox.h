#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe CutBox tem como objetivo apagar uma figura do tipo caixa
 */

class CutBox :public FiguraGeometrica{
    protected:
        int x0,x1,y0,y1,z0,z1;
    public:
        /*!
         * \brief A função CutBox atua para apagar os voxels de uma figura do tipo caixa posicionada nos eixos x, y e z.
         * \param x0 é o x inicial.
         * \param x1 é o x final.
         * \param y0 é o y inicial.
         * \param y1 é o y final.
         * \param z0 é o z inicial.
         * \param z1 é o z final.
         */
        CutBox(int x0,int x1,int y0,int y1, int z0 ,int z1);
        void draw(Sculptor &t);
};

#endif // CUTBOX_H
