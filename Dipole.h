//
// Created by leokr on 4/22/2021.
//
#include "Spring.h"
#include <array>
#include <vector>
#include <functional>

#ifndef SOFT_BODY_SIMULATOR_DIPOLE_H
#define SOFT_BODY_SIMULATOR_DIPOLE_H
class Dipole{
public:
    Dipole(const MPoint& a, const MPoint& b, const Spring& s);


    MPoint gA() const;
    MPoint gB() const;

    void sA(const MPoint&);
    void sB(const MPoint&);

    void simulate_euler();

    void simulate_RK4();

    std::function<double (double)> F;




private:
    MPoint A;
    MPoint B;
    Spring spr;

    std::array<double , 2> comp_next(std::vector<double>& x, std::vector<double>& v, int n);


};

#endif //SOFT_BODY_SIMULATOR_DIPOLE_H
