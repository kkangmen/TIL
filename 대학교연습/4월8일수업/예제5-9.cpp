#include <iostream>
using namespace std;

class Circle{
    private:
    int radius;
    public:
    Circle(Circle& c);
    Circle(){radius = 1;}
    Circle(int radius){this->radius = radius;}
    double getArea(){return 3.14*radius*radius;}
};
Circle::Circle(Circle& c){
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << '\n';
}

int main(){
    Circle src(30);
    Circle dest(src);

    cout << "원복읜 면적 = " << src.getArea() << '\n';
    cout << "사본의 면적 = " << dest.getArea() << '\n';
}