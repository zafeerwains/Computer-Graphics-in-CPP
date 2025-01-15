#include <iostream>
#include <graphics.h>
using namespace std;

int main() {
    // Initialize graphics
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Declare variables for triangle coordinates and translation factors
    int x1, y1, x2, y2, x3, y3, tx, ty;

    // Input triangle coordinates
    cout << "Enter the first vertex of the triangle (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the second vertex of the triangle (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter the third vertex of the triangle (x3 y3): ";
    cin >> x3 >> y3;

    // Draw the original triangle
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    cout << "Original triangle drawn. Press any key to continue...\n";
    getch();

    // Input translation factors
    cout << "Enter the translation factors (tx ty): ";
    cin >> tx >> ty;

    // Apply the translation
    x1 += tx;
    y1 += ty;
    x2 += tx;
    y2 += ty;
    x3 += tx;
    y3 += ty;

    // Clear the screen and draw the translated triangle
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    cout << "Translated triangle drawn. Press any key to exit...\n";
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}

