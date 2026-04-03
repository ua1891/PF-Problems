#include <iostream>

using namespace std;

bool isBorder(int x, int y, int h) {
    // Borders of the bottom rectangle (0,0) to (2h,h)
    if ((x >= 0 && x <= 2 * h && (y == 0 || y == h)) || (y >= 0 && y <= h && (x == 0 || x == 2 * h)))
        return true;
    
    // Borders of the top part (h,h) to (2h,4h)
    if ((x >= h && x <= 2 * h && (y == h || y == 4 * h)) || (y >= h && y <= 4 * h && (x == h || x == 2 * h)))
        return true;
    
    return false;
}

bool isInside(int x, int y, int h) {
    // Inside bottom rectangle
    bool inBottom = (x > 0 && x < 2 * h && y > 0 && y < h);
    // Inside top part
    bool inTop = (x > h && x < 2 * h && y > h && y < 4 * h);
    
    return inBottom || inTop;
}

int main() {
    int h, x, y;
    cin >> h >> x >> y;
    
    if (isBorder(x, y, h)) {
        cout << "border" << endl;
    } else if (isInside(x, y, h)) {
        cout << "inside" << endl;
    } else {
        cout << "outside" << endl;
    }
    
    return 0;
}
