#include <iostream>
using namespace std;

int main(){
    float a, b, x, y, z;
    cin >> a >> b >> x >> y;
    if(x<0 and y>0){
        z=(a*x)-(b*y);
    } else if(x>=0 and y<=0){
        z=(a*(x*x))-(b*(y*y));
    } else {
        z=(a*x)-(b*(y*y));
    }
    cout << z;
 }
