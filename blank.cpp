#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;


//----------------------------------------------
int main() {

	bool ans;
	int score=0, missed=0;

	srand(time(NULL));

	while(score!=38) {
		score=0;
		missed=0;
		for (int i=0; i<43; i++) {
			ans=rand()%2;

			if(ans) {
				score+=2;
			}
			else {
				missed++;
				if(missed>10) {
					score-=2;
				}
			}
		}

	}


	cout << "Puntaje: " << score;

	cout << endl << missed ;

	return 0;
}
//----------------------------------------------
