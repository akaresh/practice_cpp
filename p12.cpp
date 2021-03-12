/* practicing math
pow(base, exponent) = 2^5 = pow(2, 5)
pi-value = M_PI*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float cubeSide = 5.4;
	float sphereRadius = 2.33;
	float coneRadius = 7.65;
	float coneHeight = 14;

	float volCube, volSphere, volCone = 0;

	volCube = pow(cubeSide, 3);
	cout << "Volume of Cube: " << volCube <<"\n";

	volSphere = (4.0/3.0) * M_PI * pow(sphereRadius, 3);
	cout << "Volume of Sphere: " << volSphere << "\n";

	volCone = M_PI * pow(coneRadius, 2) * coneHeight/3;
	// can also add int before volcone1 and will get int as answer
	cout << "Volume of Cone: " << volCone << "\n";

	int volCone1 = M_PI * pow(coneRadius, 2) * coneHeight/3;
	cout << "int(Volume of Cone): " << volCone1 << "\n";

	return 0;
}
