#include <stdio.h>
#include <math.h>

int main() {
    int r, g, b;
    
    int colors[5][3] = {
        {0, 0, 0},       // Black
        {255, 0, 0},     // Red
        {0, 255, 0},     // Green
        {0, 0, 255},     // Blue
        {255, 255, 255}  // White
    };
    
    char *colorNames[5] = {"Black", "Red", "Green", "Blue", "White"};
    
    printf("Enter R,G,B\n");
    
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);
    
    double minDistance = -1;
    int nearestIndex = 0;
    
    for (int i = 0; i < 5; i++) {
        double distance = sqrt(
            pow(r - colors[i][0], 2) + 
            pow(g - colors[i][1], 2) + 
            pow(b - colors[i][2], 2)
        );
        
        if (minDistance == -1 || distance < minDistance) {
            minDistance = distance;
            nearestIndex = i;
        }
    }
    
    printf("The nearest color is %s\n", colorNames[nearestIndex]);
    
    return 0;
}
