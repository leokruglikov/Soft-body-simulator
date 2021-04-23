#include <iostream>
#include "Vector2f.h"
#include "Dipole.h"
#include <vector>
#include <fstream>

//void simulate();

int main() {
    MPoint points[2]  {
            MPoint(lmh::Vector2f(0.0,0.0), lmh::Vector2f(0.0,0.0), lmh::Vector2f(0.0, 0.0), 5000),
            MPoint(lmh::Vector2f(0.0,12.0), lmh::Vector2f(0.0,0.0), lmh::Vector2f(0.0, 0.0), 5)
    };
    Spring spr(100.0, 0.4 , 10.0);

    Dipole dip(points[1], points[0], spr );
    Dipole* pd = &dip;
    std::cout<<sizeof(pd);
    //dip.simulate_euler();

    //simulate();

    return 0;
}

