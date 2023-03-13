#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"Ball.h";
using namespace std;
void populateArr(Ball totalBalls[]) {
	for (int i = 1; i <= 49; i++) {
		totalBalls[i].setBallNo(i);
		totalBalls[i].setExtractedParam(0);
	}
}
void randomize(int &randIndex) {
	srand(time(NULL));
	randIndex = 1 + (rand() % 49);
}
int ballPicker(Ball totalBalls[]) {
	int randIndex;
	randomize(randIndex);
	if (totalBalls[randIndex].getExtracted() == 1) {
		randomize(randIndex);
		ballPicker;
	}
	else
		return totalBalls[randIndex].getBallNo();
}