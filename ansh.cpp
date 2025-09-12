#include <iostream>
using namespace std ;
class point {
    public:
    int x,y;
    float distance (int a, int b){
        float dist;
        sqrt ((x-a)*(x-a)+(y-b)*(y-b));
        return dist;
    }
};
int main(){
    point p1 , p2;
    cout<<"Enter the x and y of 1st \n";
    cin>>p1.x>>p2.y;
    cout<<"Enter the x and y of 2nd point \n";
    cin>>p2.x>>p2.y;
    float d;
    d=p1.distance(p2);
    cout<<d;

}