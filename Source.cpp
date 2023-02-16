#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"

//temperature converter (C to K) with errors.

/*double ctok(double c)
{
	int k = c + 273.15; //wrong data type for floating-point
	return int //missing semicolon...and what are we returning?
}

int main()
{
	double c = 0;
	cin >> d; //reading input to incorrect, un-initialised var. input not contextualised.
	double k = ctok("c"); //function expects double as argument
	Cout << k << '/n' ; //cout capitalised, output isn't contextualised
}

*/

double ctok(double c)
{
	constexpr double cmin = -273.15;

	if (c < cmin)
		error("Invalid C input.");

	double k = c + 273.15;
	return k;
}

double ktoc(double k)
{
	constexpr double kmin = 0.0;
	if (k < kmin)
		error("Invalid K input.");

	double c = k - 273.15;
	return c;

}

double ctof(double c)
{
	constexpr double cmin = -293.15;

	if (c < cmin) error("Invalid C input.");

	double f = (c * (9 / 5)) + 32;
	return f;
}

double ftoc(double f)
{
	constexpr double fmin = (-293.15 * (9 / 5)) + 32;

	if (f < fmin) error("Invalid F temperature.");

	double c = ((f - 32) * 5) / 9;
	return c;
}

//int main()		C to K, K to C
//{
//	//smallest possible celcius temp.
//
//	double input = 0.0; //init input
//
//	cout << "Please input the temperature value followed by it's symbol. Supported measures:\n(c)-\tcelsius to kelvin\n(k)-\tkelvin to celcius\nFor example: 23 c.\n";
//
//	for (char op = ' '; cin >> input >> op;) { //init operator, get input for inpt and operator.
//		switch (op) {
//		case 'c':case 'C': //for C to K conversion.
//			cout << ctok(input) << " K\n";
//			break;
//
//		case'k': case 'K': // K-C conversion.
//			cout << ktoc(input) << " C\n";
//			break;
//
//		default:
//			cout << "Temp character not recognised!\n";
//			break;
//
//		}
//	}
//}

int main()			//C to F, F to C
{
	double input = 0.0; //init input

	cout << "Please input the temperature value followed by it's symbol. Supported measures:\n(c)-\tcelsius to fahrenheit\n(k)-\tfahrenheit to celcius\nFor example: 23 c.\n";

	for (char op = ' '; cin >> input >> op;) { //init operator, get input for inpt and operator.
		switch (op) {
		case 'c':case 'C': //for C to K conversion.
			cout << ctof(input) << " F\n";
			break;

		case'f': case 'F': // K-C conversion.
			cout << ftoc(input) << " C\n";
			break;

		default:
			cout << "Temp character not recognised!\n";
			break;

		}
	}
}