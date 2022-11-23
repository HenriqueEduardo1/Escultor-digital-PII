#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe PutBox tem como objetivo crar uma caixa.
 */
class PutBox:public FiguraGeometrica{
    protected:
        int x0,x1,y0,y1,z0,z1;
        float r,g,b,a;

    public:
        /*!
         * \brief A função PutBox  recebe as posições inicias e finais da caixa, assim como a sua cor para criar o voxel.
         * \param x0 posição inicial no eixo x.
         * \param x1 posição final no eixo x.
         * \param y0 posição inicial no eixo y.
         * \param y1 posição final no eixo y.
         * \param z0 posição inicial no eixo z.
         * \param z1 posição final no eixo z.
         * \param r recebe a tonalidade de vermelho do voxel.
         * \param g recebe a tonalidade de verde do voxel.
         * \param b recebe a tonalidade de azul do voxel.
         * \param a recebe a opacidade do voxel.
         */
        PutBox(int _x0,int _x1,int _y0,int _y1, int _z0 ,int _z1,float _r,float _g,float _b,float _a);
        void draw(Sculptor &t);
};

#endif // PUTBOX_H
