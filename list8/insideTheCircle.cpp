#include <iostream>
#include <cmath>
using namespace std;

int distance(float x1, float y1, float x2, float y2) {
    float distanceX = pow((x2 - x1), 2);
    float distanceY = pow((y2 - y1), 2);
    float totalDistance = sqrt(distanceX + distanceY);

    return totalDistance;
}

bool insideCircle(float radius, float x0, float y0, float x1, float y1) {
    float dist = distance(x0, y0, x1, y1);

    if((radius - dist) >= 0)
        return true;
    else
        return false;
}

int main() {
    float radius, x0, y0, x1, y1;

    cin >> radius >> x0 >> y0 >> x1 >> y1;

    if(insideCircle(radius, x0, y0, x1, y1))
        cout << "O ponto está dentro";
    else
        cout << "O ponto está fora";

    return 0;
}