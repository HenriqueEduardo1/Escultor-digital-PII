#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe PutEllipsoid tem como objetivo criar um elipsóide.
 */
class PutEllipsoid:public FiguraGeometrica{
    protected:
        int xcenter, ycenter, zcenter, rx, ry, rz;
        float r,g,b,a;
    public:
        /*!
         * \brief A função PutEllipsoid recebe o centro da elipse e o raio para setar o voxel.
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
        PutEllipsoid(int xcenter,int ycenter,int zcenter,int rx ,int ry,int rz,float r,float g,float b,float a);
        void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
