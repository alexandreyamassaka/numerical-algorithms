#include "interpolation.hpp"

Interpolador(const vector<pair<double, double>>& points, const string& method){

}

double Interpolator::lagrangeInterpolate(double x){
    
}


double interpolacaoLagrange(int numeroPontos, const vector<double>& x,const vector<double>& y, double pontoInterpolar){
	double pontoInterpolado = 0;
	for(int i = 0; i<numeroPontos;i++){
		double c = 1; double d = 1;
		for(int j = 0; j<numeroPontos; j++){
			if(j!=i){
				c *= (pontoInterpolar-x[j]);
				d *= (x[i]-x[j]);
			}
		}
		pontoInterpolado += y[i]*(c/d);

	}
	return pontoInterpolado;
}
