#include <iostream>
using namespace std;

int main() {
    float height, width, x0, y0, x1, y1;
    bool xIn = false, yIn = false;

    cin >> x0 >> y0 >> width >> height >> x1 >> y1;

    if(width >= 0) {
        if(x1 <= (x0 + width) && x1 >= x0)
            xIn = true;
    }
    else if(x0 >= 0) {
        if(x1 <= (x0 + width) && x1 >= width)
            xIn = true;
    } else {
        if(x1 >= (x0 + width) && x1 <= x0)
            xIn = true;
    }

    if(height >= 0) {
        if(y1 <= (y0 + height) && y1 >= y0)
            yIn = true;
    }
    else if(x0 >= 0) {
        if(y1 <= (y0 + height) && y1 >= height)
            yIn = true;
    } else {
        if(y1 >= (y0 + height) && y1 <= x0)
            yIn = true;
    }

    if(xIn && yIn)
        cout << "dentro";
    else
        cout << "fora";

    return 0;
}