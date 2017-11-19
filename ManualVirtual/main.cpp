
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"

void whoAmI(Quadrangle * obj);


int main() 
{
	Rectangle rect(4,6);
	Square sqr(4);

	cout << "Rectangle area: " << rect.area() << endl;
	cout << "Square area: " << sqr.area() << endl;

	
	Quadrangle * pQuadrangle1 = &rect;
	Quadrangle * pQuadrangle2 = &sqr;
	whoAmI(pQuadrangle1);
	whoAmI(pQuadrangle2);
	
	return 0;
}

// get to WhoAmI method by the "the hard way"
void whoAmI(Quadrangle * obj)
{
	//get the virtual table pointer of object obj
	int* vfptr = *(int**)obj;

	//function fn is the second entry of the virtual table, so it's vfptr[1]
	((void(*)()) vfptr[1])();

}