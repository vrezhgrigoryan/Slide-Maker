#include "IElement.h"

void Line::print(std::ostream& output)
{
	output << "------LINE------\n";
	output << "( " << x << ", " << y << ")";
	output << "Length of line is " << length << "\n";
}
void Circle::print(std::ostream& output) 
{
	output << "------CIRCLE------\n";
	output << "( " << x << ", " << y << ")";
	output << "Radius of circle is " << R << "\n";
}

void Square::print(std::ostream& output)
{
	output << "------SQUARE------\n";
	output << "( " << x << ", " << y << ")";
	output << "Edge of square is " << a << "\n";
}
void Regtangle::print(std::ostream& output) 
{
	output << "------REGTANGLE------\n";
	output << "( " << x << ", " << y << ")";
	output << "Edges of square are " << a << " and " << b << "";
}