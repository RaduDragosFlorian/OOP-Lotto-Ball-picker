#include <iostream>
#include"Ball.h";
#include"functions.h";
using namespace std;

int main()
{
    Ball *totalBalls=new Ball[50];
    populateArr(totalBalls);
    cout << totalBalls[49].getBallNo();
    cout << ballPicker(totalBalls);
    return 0;
}