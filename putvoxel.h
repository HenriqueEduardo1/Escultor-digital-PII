#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe PutVoxel seta um voxel.
 */
class PutVoxel : public FiguraGeometrica{
    protected:
        int x,y,z;
        float r,g,b,a;
    public:
        /*!
         * \brief A função PutVoxel recebe e seta as posições do voxel.
         * \param x recebe a posição x.
         * \param y recebe a posição y.
         * \param z recebe a posição z.
         * \param r recebe a tonalidade de vermelho do voxel.
         * \param g recebe a tonalidade de verde do voxel.
         * \param b recebe a tonalidade de azul do voxel.
         * \param a recebe a opacidade do voxel.
         */
        PutVoxel(int _x , int _y, int _z, float _r, float _g, float _b , float _a);
        void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
