#include "cutsphere.h"
#include <cmath>

CutSphere::CutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius){
    xcenter = _xcenter;
    ycenter = _ycenter;
    zcenter = _zcenter;
    radius = _radius;
}

void CutSphere::draw(Sculptor &t){
    float calcX, calcY, calcZ;
    for(int x = xcenter-radius; x < xcenter+radius; x++){
        for(int y = ycenter-radius; y < ycenter+radius; y++){
            for(int z = zcenter-radius; z < zcenter+radius; z++){
                calcX = pow(x-xcenter,2);
                calcY = pow(y-ycenter,2);
                calcZ = pow(z-zcenter,2);

                if((calcX + calcY + calcZ) <= pow(radius,2)) t.cutVoxel(x,y,z);
            }
        }
    }
}
