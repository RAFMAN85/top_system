#include "figures.h"

int main() {
    Sircle sircle;

    sircle.x=200;
    sircle.y=200;
    sircle.radius=100;
    //sircle(400,400,150);
    Sircle::sircle(sircle.x,sircle.y, sircle.radius);


    return 0;
}
