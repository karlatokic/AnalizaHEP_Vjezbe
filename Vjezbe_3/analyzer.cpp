#include "ElementaryParticle.h"
#include<fstream>
int main()
{
	ElementaryParticle *Higgs= new ElementaryParticle("Higgs bosom",125,1);
	Higgs->SetMomentumComponents(40,30,60);
	
  return 0;
}
