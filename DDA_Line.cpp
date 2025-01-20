#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;


void drawLineDDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;  
    int dy = y2 - y1;  
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);  
    float xinc = dx / (float)steps;  
    float yinc = dy / (float)steps;  

    float x = x1, y = y1;

    
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), RED);  
        x += xinc;  
        y += yinc;  
        delay(10); 
    }
}

int main() {
    int x1, y1, x2, y2;

    
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");


    drawLineDDA(x1, y1, x2, y2);

    
    cout << "Press Enter to close the graphics window..." << endl;
    cin.get(); 
    cin.get(); 

    closegraph();  
    return 0;
}

