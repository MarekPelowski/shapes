#include <iostream>
//template <typename T, typename U>

class Rectangle{
    private:
        double side1;
        double side2;
    public:

    Rectangle(double side1, double side2){
        this->side1 = side1;
        this->side2 = side2;
    }

    void changeSides(double side1, double side2){
        this->side1 = side1;
        this->side2 = side2;
    }

    double showArea(){
        return side1 * side2;
    }

    double showCircumference(){
        return (side1 * 2) + (side2 * 2);
    }

};

int main()
{   
    Rectangle rectangle1(213, 301.3);

    std::cout << rectangle1.showArea() << std::endl;
    std::cout << rectangle1.showCircumference() << std::endl;

    return 0;
}