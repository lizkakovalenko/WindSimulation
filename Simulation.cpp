#include <iostream>
#include <cmath>

const double Pi = 3.14159265358979323846;
const double Velocity = 20.0; // wind velocity in meters per second
const double Direction = 45.0; // wind direction in degrees

int main()
{
    double x, y, z; // position of object in 3D space
    double vx, vy, vz; // velocity of object in 3D space

    // convert wind direction to radians
    double dir = Direction * Pi / 180.0;

    // calculate wind velocity in x, y, and z directions
    vx = Velocity * cos(dir);
    vy = Velocity * sin(dir);
    vz = 0.0;

    // initialize position of object
    x = 0.0;
    y = 0.0;
    z = 0.0;

    // update position of object based on wind velocity
    x += vx;
    y += vy;
    z += vz;

    std::cout << "Position of object: (" << x << ", " << y << ", " << z << ")" << std::endl;
    std::cout << "Velocity of object: (" << vx << ", " << vy << ", " << vz << ")" << std::endl;

    return 0;
}
