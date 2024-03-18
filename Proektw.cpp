#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string word;
    cout << "Введите слово: ";
    cin >> word;

    int length = word.length();
    vector<bool> guessed(length, false);
    int tries = 0;

    while (tries < 6) {
        bool allGuessed = true;
        for (int i = 0; i < length; i++) {
            if (guessed[i]) {
                cout << word[i] << " ";
            }
            else {
                cout << "_ ";
                allGuessed = false;
            }
        }
        cout << endl;

        if (allGuessed) {
            cout << " Вы выиграли!" << endl;
            break;
        }

        char letter;
        cout << "Введите букву: ";
        cin >> letter;

        bool found = false;
        for (int i = 0; i < length; i++) {
            if (word[i] == letter) {
                guessed[i] = true;
                found = true;
            }
        }

        if (!found) {
            tries++;
            cout << "Неправильная попытка, осталось " << 5 - tries << " попыток" << endl;

           
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
        cout << "Вы проиграли! Слово было: " << word << endl;
    }

    return 0;
}