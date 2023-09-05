#include<iostream>
#include<cmath>
#include<cstdlib> 
using namespace std; 
class ElementaryParticle {

	public:
	ElementaryParticle(string _name, float _mass, bool _isBoson);
	void printInfo();
	void SetMomentumComponents(float _px, float _py, float _pz);
	void PrintTransversMomentum();
	string name;
	float mass,px,py,pz,E;
	bool isBoson;
};
