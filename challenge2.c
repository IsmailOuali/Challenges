#include <stdio.h>
#include <math.h>

int main() {
    struct point {
        float x, y;
    };

    struct point p1, p2;
    printf("Entrez les coordonnées du point 1 :\n");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Entrez les coordonnées du point 2 :\n");
    scanf("%f %f", &p2.x, &p2.y);

    float dis = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));

    printf("La distance est : %.1f\n", dis);

    return 0; 
}