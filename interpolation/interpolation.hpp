#ifndef INTERPOLATION_HPP
#define INTERPOLATION_HPP
#include <iostream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

class Interpolator{
private:

    vector<pair<double, double>> points;   //vector of the data points
    string method;                         //interpolation method          
    vector<double> polynomialCoefficients; //vector of polynomial's coefficients

    double lagrangeInterpolate(double x);
    double newtonInterpolate(double x);
    void calculateNewtonCoefficients();
    string lagrangePolynomial();
    string newtonPolynomial();

public:
    //initialize class with data points and interpolation method
    Interpolator(const vector<pair<double, double>>& points, const string& method);
    double interpolate(double x);
    string getPolynomial();
    void setMethod();
};


#endif