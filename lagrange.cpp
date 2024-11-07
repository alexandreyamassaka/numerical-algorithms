#include <iostream>
#include <vector>
using namespace std;

//interpolar valor usando polinomio de lagrange

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

//complexidade: O(n2)
//adicoes e multiplicacoes: 2n^2 + 3n + 1
//divisoes: n+1

int main(){

	vector<double> abscissas = {-0.5, 0, 1, 2.0};
	vector<double> ordenadas = {-1, 0, 2, 16};
	double pontoInterpolar = 0;
	cin>>pontoInterpolar;

	cout<<interpolacaoLagrange(4, abscissas, ordenadas, pontoInterpolar)<<endl;

	return 0;
}
