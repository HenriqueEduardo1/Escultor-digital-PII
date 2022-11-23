#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe CutVoxel apaga um voxel.
 */
class CutVoxel:public FiguraGeometrica{
    protected:
        int x,y,z;
    public:
        /*!
         * \brief CutVoxel é a função que recebe a posição do voxel.
         * \param x é a posição do voxel no eixo x.
         * \param y é a posição do voxel no eixo y.
         * \param z é a posição do voxel no eixo z.
         */
        CutVoxel(int x,int y,int z);
        void draw(Sculptor &t) ;

};

#endif // CUTVOXEL_H
