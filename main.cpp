#include "figures.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>


int main() {

    std::string input;

    getline(std::cin, input);

    std::stringstream ss(input);
    std::string token;
    std::vector<std::string> buffer;

    while (getline(ss, token, ' ')){
        buffer.push_back(token);
    }

    if(input=="help"){
        std::cout<<"Программа принимает несколько аргументов через пробел."<<std::endl;
        std::cout<<"Для разных фигур небходимо разное количество аргументов."<<std::endl;
        std::cout<<"Первый аргумент - это название фигуры"<<std::endl;
        std::cout<<"Если представленные фигуры не удовлетворяют ожидаемому перечню, "<<std::endl;
        std::cout<<"вы можете самостоятельно задать количество сторон фигуры. "<<std::endl;
        std::cout<<"Примеры:  "<<std::endl;
        std::cout<<"Sircle 700 700 100 "<<std::endl;
        std::cout<<"После названия фигуры, первые два аргумента это всегла размер окна, "<<std::endl;
        std::cout<<"в котором будет выведена фигура. "<<std::endl;
        std::cout<<"После размера окна идут параметры фигуры. "<<std::endl;
        std::cout<<"Rectangle x y x1 y1 "<<std::endl;
        std::cout<<"где x1 и y1 это стороны прямоугольника"<<std::endl;
        std::cout<<"Для фигур Triangle Octagon и  Custom используется следующий вид: "<<std::endl;
        std::cout<<"Triangle/Octagon x y x1 "<<std::endl;
        std::cout<<"где x1 это строна фигуры"<<std::endl;
        std::cout<<"Для Custom добавляется четвертый аргумент, задающий количество сторон желаемой фигуры "<<std::endl;

    }
    else{
        if(buffer[0]=="Sircle"){
            Sircle::sircle(atoi(buffer[1].c_str()), atoi(buffer[2].c_str()), stof(buffer[3]));
        }
        else if(buffer[0]=="Rectangle"){
            Rectangle::rectangle(atoi(buffer[1].c_str()), atoi(buffer[2].c_str()), stof(buffer[3]), stof(buffer[4]));
        }
        else if(buffer[0]=="Triangle"){
            Multi_shape::multy_shape(atoi(buffer[1].c_str()), atoi(buffer[2].c_str()), stof(buffer[3]),3);
        }
        else if(buffer[0]=="Octagon"){
            Multi_shape::multy_shape(atoi(buffer[1].c_str()), atoi(buffer[2].c_str()), stof(buffer[3]),8);
        }
        else if(buffer[0]=="Custom"){
            Multi_shape::multy_shape(atoi(buffer[1].c_str()), atoi(buffer[2].c_str()), stof(buffer[3]), stof(buffer[4]));
        }
    }


    //sircle.x=200;
    //sircle.y=200;
    //sircle.radius=100;
    //sircle(400,400,150);
    //Sircle::sircle(sircle.x,sircle.y, sircle.radius);
    //Rectangle::rectangle(400,400,200,200);
    //Multi_shape::multy_shape(400, 400, 80,5);

    return 0;
}
