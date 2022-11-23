#include "cutellipsoid.h"
#include <cmath>

CutEllipsoid::CutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz){
    xcenter = _xcenter;
    ycenter = _ycenter;
    zcenter = _zcenter;
    rx = _rx;
    ry = _ry;
    rz = _rz;
}

void CutEllipsoid::draw(Sculptor &t){
    float calcX, calcY, calcZ;
    for(int x = xcenter - rx; x < xcenter + rx; x++){
        for(int y = ycenter - ry; y < ycenter + ry; y++){
            for(int z = zcenter - rz; z < zcenter + rz; z++){
                calcX = pow(x-xcenter,2) / pow(rx,2);
                calcY = pow(y-ycenter,2) / pow(ry,2);
                calcZ = pow(z-zcenter,2) / pow(rz,2);

                if((calcX + calcY + calcZ) <= 1) t.cutVoxel(x,y,z);
            }
        }
    }
}
