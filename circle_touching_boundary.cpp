#include <graphics.h>
#include <iostream>

using namespace std;

int main() {
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Get maximum screen dimensions
    int max_x = getmaxx(); // width of the screen
    int max_y = getmaxy(); // height of the screen

    // Calculate the center of the screen
    int center_x = max_x / 2;
    int center_y = max_y / 2;

    // Calculate the minimum distance from the center to the edges of the screen
    int min_distance_to_edge = min(center_x, center_y);

    // Start drawing circles, gradually increasing the radius
    for (int radius = 10; radius <= min_distance_to_edge; radius += 10) {
        circle(center_x, center_y, radius); // Draw a circle at the center
        
        delay(50); // Delay to make the drawing visible step by step
    }

    cout << "Press Enter to close the graphics window..." << endl;
    cin.get();  // Wait for the user to press Enter

    closegraph();  // Close the graphics window
    return 0;
}

