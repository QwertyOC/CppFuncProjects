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




22

#include <iostream>
#include <string>
#include <vector>

void displayHangman(int attempts) {
    if (attempts == 6) {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
    else if (attempts == 5) {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "  O   |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
    else if (attempts == 4) {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "  O   |" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
    else if (attempts == 3) {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "  O   |" << std::endl;
        std::cout << " /|   |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
    else if (attempts == 2) {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "  O   |" << std::endl;
        std::cout << " /|\\  |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
    else if (attempts == 1) {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "  O   |" << std::endl;
        std::cout << " /|\\  |" << std::endl;
        std::cout << " /    |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
    else {
        std::cout << "  ____" << std::endl;
        std::cout << "  |   |" << std::endl;
        std::cout << "  O   |" << std::endl;
        std::cout << " /|\\  |" << std::endl;
        std::cout << " / \\  |" << std::endl;
        std::cout << "      |" << std::endl;
        std::cout << "__________" << std::endl;
    }
}

bool isWordGuessed(const std::string& word, const std::vector<char>& guessedLetters) {
    for (char letter : word) {
        if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) == guessedLetters.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "");
    std::string word = "Ава";
    std::vector<char> guessedLetters;

    int attempts = 6;

    while (attempts > 0) {
        displayHangman(attempts);

        for (char letter : word) {
            if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
                std::cout << letter << " ";
            }
            else {
                std::cout << "_ ";
            }
        }
        std::cout << std::endl;

        if (isWordGuessed(word, guessedLetters)) {
            std::cout << "Вы угодали!." << std::endl;
            break;
        }

        std::cout << "Угодай слово: ";
        char guess;
        std::cin >> guess;

        guessedLetters.push_back(guess);

        if (word.find(guess) == std::string::npos) {
            attempts--;
            std::cout << "Неправельная буква " << attempts << " жизни." << std::endl;
        }
    }

    if (attempts == 0) {
        displayHangman(attempts);
        std::cout << "Вы проиграли, слово было: " << word << std::endl;
    }

    return 0;
}
