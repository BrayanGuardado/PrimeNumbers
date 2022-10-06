#include<iostream>
using namespace std;

class PrimerNumber {
public:
	void getPrimeNumbers();
};

void PrimerNumber::getPrimeNumbers() {

	int inputNumber = 0, increment = 0;
	int primeCounter = 0, primeNumber = 2;

	system("cls");
	cout << "Type the limit number: ";
	cin >> inputNumber;

	while (inputNumber > primeCounter) {
		
		increment = 0;
		for (int i = 1; i <= primeNumber; i++) {
			if (primeNumber % i == 0) {	
				increment++;
			}
		}
		if (increment == 2) {
			cout << primeNumber<<" ";
			primeCounter++;
		}
		primeNumber++;
	}
}

int main() {

	int exit = 0;
	PrimerNumber number;
	while (exit != 2) {

		number.getPrimeNumbers();

		cout << "\n\nDo you want to do another operation?: " << endl;
		cout << "1) Yes" << endl;
		cout << "2) No" << endl;
		cout << "Option: ";
		cin >> exit;

	}

	return  0;
}
