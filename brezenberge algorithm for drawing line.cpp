#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x1, x2, y1, y2, dx, dy, p, y, k;
    cout << "input point 1" << endl;
    cin >> x1 >> y1;
    cout << "input point 2" << endl;
    cin >> x2 >> y2;

    dy = y2 - y1;
    dx = x2 - x1;
    y = y1;
    p = 2 * dy - dx;
    putpixel(x1, y1, 7);
    for (k = x1 + 1; k <= x2; k++)
    {
        if (p >= 0)
        {
            y = y + 1;
        }
        putpixel(k, y, 7);
        if (p >= 0)
        {
            p = p + 2 * dy - 2 * dx;
        }
        else if (p < 0)
        {
            p = p + 2 * dy;
        }
    }

    getch();
}
