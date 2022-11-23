#include "putellipsoid.h"
#include <cmath>

PutEllipsoid::PutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz, float _r, float _g, float _b, float _a){
    xcenter = _xcenter;
    ycenter = _ycenter;
    zcenter = _zcenter;
    rx = _rx;
    ry = _ry;
    rz = _rz;
    r = _r;
    g = _g;
    b = _b;
    a = _a;
}

void PutEllipsoid::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    float calcX, calcY, calcZ;
    for(int x = xcenter - rx; x < xcenter + rx; x++){
        for(int y = ycenter - ry; y < ycenter + ry; y++){
            for(int z = zcenter - rz; z < zcenter + rz; z++){
                calcX = pow(x-xcenter,2) / pow(rx,2);
                calcY = pow(y-ycenter,2) / pow(ry,2);
                calcZ = pow(z-zcenter,2) / pow(rz,2);

                if((calcX + calcY + calcZ) <= 1) t.putVoxel(x,y,z);
            }
        }
    }
}
