#include "Generator.h"

int main(){

	Generator*generator;
	generator = new Generator();
	generator -> GeneratePDF();
	delete generator;

return 0;

}
