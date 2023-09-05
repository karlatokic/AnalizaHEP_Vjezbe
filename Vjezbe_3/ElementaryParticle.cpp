#include "ElementaryParticle.h"

ElementaryParticle::ElementaryParticle(string _name, float _mass,bool _isBoson)
{
	name=_name;
	mass=_mass;
	isBoson=_isBoson;
}
void ElementaryParticle::printInfo()
{
	cout<<"Particle properties:\nname: "<<name<<"\nmass:"<<mass<<"\nisBoson:"<<isBoson<<"\n";
}
void ElementaryParticle::SetMomentumComponents(float _px, float _py, float _pz)
{
	float E;
	px=_px;
	py=_py;
	pz=_pz;
	E=sqrt(pow(px,2)+pow(py,2)+pow(pz,2)+pow(mass,2));
	
}
void ElementaryParticle::PrintTransverseMomentum()
{
	cout<<"pt="<<sqrt(pow(px,2)+pow(py,2))<<"GeV\n";

}

