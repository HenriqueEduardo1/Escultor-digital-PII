#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe CutEllipsoid tem como objetivo apagar um elipsóide.
 */
class CutEllipsoid:public FiguraGeometrica{
    protected:
        int xcenter, ycenter, zcenter, rx, ry, rz;
    public:
        /*!
         * \brief A função CutEllipsoid recebe o centro da elipse e o raio para apagar o voxel.
         * \param xcenter recebe o centro da elipse no eixo x.
         * \param ycenter recebe o centro da elipse no eixo y.
         * \param zcenter recebe o centro da elipse no eixo z.
         * \param rx recebe o raio em x.
         * \param ry recebe o raio em y.
         * \param rz recebe o raio em z.
         * \param r recebe a tonalidade de vermelho do voxel.
         * \param g recebe a tonalidade de verde do voxel.
         * \param b recebe a tonalidade de azul do voxel.
         * \param a recebe a opacidade do voxel.
         */
        CutEllipsoid(int xcenter,int ycenter,int zcenter,int rx ,int ry,int rz);
        void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
