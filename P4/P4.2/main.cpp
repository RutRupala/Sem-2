#include<iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        Point& display(){
            cout << "Point(" << x << ", " << y << ")" << endl;
            return *this;
        }
        Point& move(int x, int y){
            this->x += x;
            this->y += y;
            return *this;
        }
};

int main(){
    Point p(3, 4);
    p.display();
    p.move(1, 2).move(2, 3).display();

    return 0;
}