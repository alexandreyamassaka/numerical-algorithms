#include "interpolation.hpp"


int main(){ 

    vector<pair<double, double>> points = {
        {1.0, 0.8415},
        {1.3, 1.2526},
        {1.7, 1.6858},
        {2.0, 1.8186}
    };
    Interpolator interpolacao(points, "lagrange");
    cout<<interpolacao.interpolate(1.5);  

    return 0;
}