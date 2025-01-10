#include <graphics.h>
#include <iostream>

using namespace std;

int main()
{
    // Initialize graphics mode using the character array
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    // Define grid size (rows and columns)
    int rows = 100;
    int cols = 200;

    // Get maximum screen dimensions
    int max_x = getmaxx();
    int max_y = getmaxy();

    // Calculate the size of each cell
    int cell_width = max_x / cols;
    int cell_height = max_y / rows;

    // Draw vertical lines
    for (int i = 0; i <= cols; i++)
    {
        line(i * cell_width, 0, i * cell_width, max_y);
    }

    // Draw horizontal lines
    for (int i = 0; i <= rows; i++)
    {
        line(0, i * cell_height, max_x, i * cell_height);
    }

    cout << "Press Enter to close the graphics window..." << endl;
    cin.get();    // Wait for user input
                  //	getch(); can also be used
    closegraph(); // Close the graphics window
    return 0;
}
