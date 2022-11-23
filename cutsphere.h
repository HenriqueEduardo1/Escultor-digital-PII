#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe CutSphere tem como objetivo apagar uma esfera.
 */
class CutSphere:public FiguraGeometrica{
    protected:
        int xcenter, ycenter, zcenter, radius;
    public:
        /*!
         * \brief A função CutSphere recebe o centro da esfera e seu raio para apagar os voxels da mesma.
         * \param xcenter recebe a posição central do eixo x.
         * \param ycenter recebe a posição central do eixo y.
         * \param zcenter recebe a posição central do eixo z.
         * \param radius recebe o raio da esfera.
         * \param r recebe a tonalidade de vermelho do voxel.
         * \param g recebe a tonalidade de verde do voxel.
         * \param b recebe a tonalidade de azul do voxel.
         * \param a recebe a opacidade do voxel.
         */
        CutSphere(int xcenter,int ycenter,int zcenter ,int radius);
        void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
