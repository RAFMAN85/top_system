#ifndef TOP_SYSTEM_TEST_FIGURES_H
#define TOP_SYSTEM_TEST_FIGURES_H

class Window_x_y{
public:
    unsigned int x;
    unsigned int y;

};

class Sircle : public Window_x_y{
public:
    float radius;
    static void sircle(unsigned int, unsigned int, float);
};

#endif
