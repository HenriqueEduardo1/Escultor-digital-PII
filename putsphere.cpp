#include "putsphere.h"
#include <cmath>

PutSphere::PutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float _r, float _g, float _b, float _a){
    xcenter = _xcenter;
    ycenter = _ycenter;
    zcenter = _zcenter;
    radius = _radius;
    r = _r;
    g = _g;
    b = _b;
    a = _a;
}

void PutSphere::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    float calcX, calcY, calcZ;
    for(int x = xcenter-radius; x < xcenter+radius; x++){
        for(int y = ycenter-radius; y < ycenter+radius; y++){
            for(int z = zcenter-radius; z < zcenter+radius; z++){
                calcX = pow(x-xcenter,2);
                calcY = pow(y-ycenter,2);
                calcZ = pow(z-zcenter,2);

                if((calcX + calcY + calcZ) <= pow(radius,2)) t.putVoxel(x,y,z);
            }
        }
    }
}
