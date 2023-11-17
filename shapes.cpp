#include <iostream>

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

    void showShape(){
        if(side1 > 2 && side2 > 2){
            drawShape();
        }
        else{
            std::cout << "Invalid sides";
        }

    }

    void drawShape(){
        for(int i = 0; i < side1 / 2 - 1; i++){
            std::cout << "  ";
        }
        std::cout << side1 << "cm" << std::endl;

        for(int i = 0; i < side1; i++){
            std::cout << "- ";
        }

        std::cout << std::endl;

        for(int i = 0; i < side2 - 2; i++){
            std::cout << "- ";
            for(int i = 0; i < side1-2; i++){
                std::cout << "  ";
            }

            if(i == side2 / 2 - 1){
                std::cout << "- ";
                std::cout << side2 << "cm\n";
                continue;
            }
            std::cout << "- \n";


        }

        for(int i = 0; i < side1; i++){
            std::cout << "- ";
        }
    }


};

int main()
{   
    Rectangle rectangle1(12, 12);

    rectangle1.showShape();

    return 0;
}