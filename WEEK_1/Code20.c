/*In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow- Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:

White = Max(Red/255, Green/255, Blue/255)

cyan=((White-Red/255)/ White)

Magenta =(( White-Green/255)/ White)

Yellow = ((White-Blue/255)/ White)

Black=1-White

Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/

#include <stdio.h>

void rgb_to_cmyk(int red, int green, int blue, double *cyan, double *magenta, double *yellow, double *black) {
    double red_frac = (double)red / 255.0;
    double green_frac = (double)green / 255.0;
    double blue_frac = (double)blue / 255.0;

    double white = red_frac > green_frac ? (red_frac > blue_frac ? red_frac : blue_frac) : (green_frac > blue_frac ? green_frac : blue_frac);

    *cyan = (white - red_frac) / white;
    *magenta = (white - green_frac) / white;
    *yellow = (white - blue_frac) / white;
    *black = 1 - white;
}

int main() {
    int red, green, blue;
    printf("Enter the values of Red, Green, and Blue (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);

    double cyan, magenta, yellow, black;
    if (red == 0 && green == 0 && blue == 0) {
        cyan = magenta = yellow = 0.0;
        black = 1.0;
    } else {
        rgb_to_cmyk(red, green, blue, &cyan, &magenta, &yellow, &black);
    }

    printf("CMYK values: C=%.2f, M=%.2f, Y=%.2f, K=%.2f\n", cyan, magenta, yellow, black);

    return 0;
}
/*OUTPUT:
Enter the values of Red, Green, and Blue (0-255): 150 75 0
CMYK values: C=0.00, M=0.50, Y=1.00, K=0.41*/