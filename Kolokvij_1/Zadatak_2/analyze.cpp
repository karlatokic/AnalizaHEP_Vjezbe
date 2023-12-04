#include "Analyzer.h"

int main(){

	Analyzer *analyzer;
	analyzer = new Analyzer();
	analyzer -> Plot2DHistogram();
	analyzer -> ~Analyzer();

return 0;

}
