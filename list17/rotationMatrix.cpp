#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265
using namespace std;

void translateVec(double point[][1]);
void rotateVec(double point[][1]);

int main() {
    double x, y;
    char input;

    cin >> x >> y >> input;

    double point[2][1] = {x, y};
    cout << fixed << setprecision(2) << "( " << point[0][0] << " , " << point[1][0] << " ) -";

    while(input == 't' || input == 'r') {
        if(input == 't') {
            translateVec(point);
        }
        if(input == 'r') {
            rotateVec(point);
        }

        cin >> input;
    }

    return 0;
}

void translateVec(double point[][1]) {
    double addX, addY;
    cin >> addX >> addY;

    point[0][0] = point[0][0] + addX;
    point[1][0] = point[1][0] + addY;

    cout << fixed << setprecision(2) << "> ( " << point[0][0] << " , " << point[1][0] << " ) -";
}

void rotateVec(double point[][1]) {
    double angle;
    cin >> angle;

    angle = angle * PI / 180;

    double rotation[2][2] = {{cos(angle), sin(angle)}, {-sin(angle), cos(angle)}};

    double pointX = point[0][0] * rotation[0][0] + point[1][0] * rotation[0][1];
    double pointY = point[0][0] * rotation[1][0] + point[1][0] * rotation[1][1];
    point[0][0] = pointX;
    point[1][0] = pointY;

    cout << fixed << setprecision(2) << "> ( " << point[0][0] << " , " << point[1][0] << " ) -";
}