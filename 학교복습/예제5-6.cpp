#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle();
    Circle(int radius);
    ~Circle();
    int getRadius(){
        return radius;
    }
    void setRadius(int radius){
        this->radius = radius;
    }
};

Circle::Circle(){
    radius = 1;
    cout << "积己磊 角青 radius = " << radius << '\n';
}
Circle::Circle(int radius){
    this->radius = radius;
    cout << "积己磊 角青 radius = " << radius << '\n';
}
Circle::~Circle(){
    cout << "家戈磊 角青 radius = " << radius << '\n';
}
void increaseCircle(Circle& c){
    int r = c.getRadius();
    c.setRadius(r+1);
}
int main(){
    Circle waffle(30);
    increaseCircle(waffle);
    cout << waffle.getRadius() << '\n';
    return 0;
}