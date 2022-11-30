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
