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

class Rectangle : public Window_x_y{
public:
    float x_fig;
    float y_fig;
    static void rectangle(unsigned int, unsigned int, float, float);
};

class Multi_shape : public Window_x_y, public Rectangle{
public:
    static void multy_shape(unsigned int, unsigned int, float, float);
};


#endif
