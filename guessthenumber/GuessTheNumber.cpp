#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int guess, attempt = 0;
	char again;
	do {
		srand(time(0));
		int ans = rand() % 100 + 1;
		cout << "Guess the Number between 1-100 in 5 attempts." << endl;
		do
		{
			cout << "Guess: ";
			cin >> guess;
			cin.ignore();
			if (guess == ans)
			{
				cout << "You have guessed correctly!" << endl;
				attempt++;
			}
			else if (guess > ans)
			{
				cout << "Too high!" << endl;
				attempt++;
			}
			else
			{
				cout << "Too low!" << endl;
				attempt++;
			}
		} while (guess != ans && attempt != 5);
		if (attempt == 5 && guess != ans)
			cout << "You failed to guess the number. The number was " << ans << endl;
		else if (attempt == 1)
			cout << "You guessed the number correctly in " << attempt << " attempt. The number is " << ans << endl;
		else
			cout << "You guessed the number correctly in " << attempt << " attempts. The number is " << ans << endl;
		cout << endl << "(R)etry or (Q)uit" << endl;
		cin >> again;
		if (toupper(again) == 'Q') {
			return 0;
		}
		while (toupper(again) != 'Q' && toupper(again) != 'R') {
			cout << endl << "type 'R' to retry and 'Q' to quit" << endl;
			cin >> again;
			if (toupper(again) == 'Q') {
				return 0;
			}
		}
		system("cls");

		attempt = 0;
	} while (toupper(again) == 'R');

}