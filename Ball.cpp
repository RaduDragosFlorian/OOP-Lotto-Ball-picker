#include<iostream>
#include"Ball.h";
using namespace std;

Ball::Ball(int ballNoParam, bool extractedParam) {
	ballNo = ballNoParam;
	extracted = extractedParam;
}
void Ball::setBallNo(int ballNoParam) {
	ballNo = ballNoParam;
};
void Ball::setExtractedParam(bool extractedParam) {
	extracted = extractedParam;
};
int Ball::getBallNo() {
	return ballNo;
}
int Ball::getExtracted() {
	return extracted;
}