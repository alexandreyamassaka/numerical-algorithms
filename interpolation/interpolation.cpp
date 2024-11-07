#include "interpolation.hpp"

Interpolator::Interpolator(const vector<pair<double, double>>& points, const string& method):points(points), method(method){
    if(method == "newton"){
        calculateNewtonCoefficients();
    }
}

double Interpolator::interpolate(double x){
    if(method == "lagrange"){
        return lagrangeInterpolate(x);
    }
    else if(method == "newton"){
        return newtonInterpolate(x);
    }
    else{
        throw invalid_argument("Unknow interpolation method");
    }
}

double Interpolator::lagrangeInterpolate(double x){
    double interpolationPoint = 0;
    for(int i = 0; i<points.size();i++){
        double product = 1;
        for(int j = 0; j<points.size();j++){
            if(j!=i){
                product *= (x-points[j].first)/(points[i].first-points[j].first);
            }
        }
        interpolationPoint += points[i].second * product;
    }
    return interpolationPoint;
}

