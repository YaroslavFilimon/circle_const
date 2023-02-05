#include <iostream>
#include <cstdlib>
using namespace std;

bool in_circle(float x, float y,
    float cx, float cy, float r)
    
{
    
    const float dx = x - cx,
        dy = y - cy;

    return dx * dx + dy * dy <= r * r;
}

int main()
{
    cout << "Enter a sequence of coordinates x, y: ";
    
    for (float x, y; cin >> x >> y;)
    {
        const bool within_the_circle = in_circle(x, y, 1, -1, 3);
        cout << "(x, y) within the circle == " << within_the_circle << endl;
    }
    return EXIT_SUCCESS;
}