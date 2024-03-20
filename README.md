#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string words[] = { "Бокс", "роблокс", "казино", "программирование", "банка" };
int nWords = sizeof(words) / sizeof(words[0]);

string selectWord(const string words[], int n) {
    srand(time(0));
    int index = rand() % n;
    return words[index];
}

bool isWordGuessed(const string& word, const string& guessedLetters) {
    for (char letter : word) {
        if (guessedLetters.find(letter) == string::npos) {
            return false;
        }
    }
    return true;
}

void printWord(const string& word, const string& guessedLetters) {
    for (char letter : word) {
        if (guessedLetters.find(letter) != string::npos) {
            cout << letter << " ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "");
    string word = selectWord(words, nWords);
    string guessedLetters;
    int tries = 0;

    while (tries < 6) {
        cout << "Угадайте слово: ";
        printWord(word, guessedLetters);

        char guess;
        cout << "Введите букву: ";
        cin >> guess;

        if (guessedLetters.find(guess) != string::npos) {
            cout << "Вы ввели неправелную букву" << endl;
        }
        else {
            guessedLetters += guess;
            if (isWordGuessed(word, guessedLetters)) {
                cout << "МегаХороош: " << word << endl;
                break;

            }
            else {
                cout << "Неправельно" << endl;
                tries++;
                cout << "Осталось попыток: " << 6 - tries << endl;
                switch (tries) {
                case 1:
                    cout << "  _______" << endl;
                    cout << " |       |" << endl;
                    cout << " |       O" << endl;
                    cout << " |" << endl;
                    cout << " |" << endl;
                    cout << "/|\ " << endl;
                    break;
                case 2:
                    cout << "  _______" << endl;
                    cout << " |       |" << endl;
                    cout << " |       O" << endl;
                    cout << " |       |" << endl;
                    cout << " |" << endl;
                    cout << "/|\ " << endl;
                    break;
                case 3:
                    cout << "  _______" << endl;
                    cout << " |       |" << endl;
                    cout << " |       O" << endl;
                    cout << " |      /|" << endl;
                    cout << " |" << endl;
                    cout << "/|\ " << endl;
                    break;
                case 4:
                    cout << "  _______" << endl;
                    cout << " |       |" << endl;
                    cout << " |       O" << endl;
                    cout << " |      /|\\" << endl;
                    cout << " |" << endl;
                    cout << "/|\ " << endl;
                    break;
                case 5:
                    cout << "  _______" << endl;
                    cout << " |       |" << endl;
                    cout << " |       O" << endl;
                    cout << " |      /|\\" << endl;
                    cout << " |      /" << endl;
                    cout << "/|\ " << endl;
                    break;
                case 6:
                    cout << "  _______" << endl;
                    cout << " |       |" << endl;
                    cout << " |       O" << endl;
                    cout << " |      /|\\" << endl;
                    cout << " |      / \\" << endl;
                    cout << "/|\ " << endl;
                    break;
            }
        }
    }

    if (tries == 6) {
        cout << "Вы проиграли, у вас закончились попытки : " << word << endl;
    }

    return 0;
}
