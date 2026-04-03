#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <cctype>
#include <algorithm>

using namespace std;

// ASCII art for hangman stages
const string HANGMAN_STAGES[] = {
    "  +---+\n"
    "  |   |\n"
    "      |\n"
    "      |\n"
    "      |\n"
    "      |\n"
    "=========",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    "      |\n"
    "      |\n"
    "      |\n"
    "=========",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    "  |   |\n"
    "      |\n"
    "      |\n"
    "=========",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|   |\n"
    "      |\n"
    "      |\n"
    "=========",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    "      |\n"
    "      |\n"
    "=========",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    " /    |\n"
    "      |\n"
    "=========",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    " / \\  |\n"
    "      |\n"
    "========="
};

const int MAX_TRIES = 6; // Number of hangman stages - 1

class HangmanGame {
private:
    vector<string> wordList;
    string secretWord;
    string guessedWord;
    int remainingTries;
    vector<char> guessedLetters;

    void loadWordList(const string& filename) {
        ifstream file(filename);
        if (!file) {
            cerr << "Error opening word list file. Using default words.\n";
            wordList = {"apple", "banana", "computer", "programming", 
                       "hangman", "elephant", "keyboard", "algorithm"};
            return;
        }

        string word;
        while (file >> word) {
            wordList.push_back(word);
        }
    }

    string selectRandomWord() {
        srand(static_cast<unsigned int>(time(0)));
        return wordList[rand() % wordList.size()];
    }

    void initializeGame() {
        secretWord = selectRandomWord();
        guessedWord = string(secretWord.length(), '_');
        remainingTries = MAX_TRIES;
        guessedLetters.clear();
    }

    void displayGame() {
        cout << "\nCurrent word: ";
        for (char c : guessedWord) {
            cout << c << " ";
        }
        cout << "\n\n";

        cout << "Guessed letters: ";
        for (char c : guessedLetters) {
            cout << c << " ";
        }
        cout << "\n\n";

        cout << HANGMAN_STAGES[MAX_TRIES - remainingTries] << "\n\n";
        cout << "Remaining tries: " << remainingTries << "\n";
    }

    bool makeGuess(char guess) {
        guess = tolower(guess);
        
        // Check if letter was already guessed
        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            cout << "You already guessed that letter!\n";
            return false;
        }

        guessedLetters.push_back(guess);

        // Check if letter is in the word
        bool correctGuess = false;
        for (size_t i = 0; i < secretWord.length(); ++i) {
            if (tolower(secretWord[i]) == guess) {
                guessedWord[i] = secretWord[i];
                correctGuess = true;
            }
        }

        if (!correctGuess) {
            remainingTries--;
            cout << "Incorrect guess!\n";
        } else {
            cout << "Good guess!\n";
        }

        return correctGuess;
    }

    bool isGameOver() {
        if (guessedWord == secretWord) {
            cout << "\nCongratulations! You guessed the word: " << secretWord << "\n";
            return true;
        }

        if (remainingTries <= 0) {
            cout << "\nGame over! You ran out of tries.\n";
            cout << "The word was: " << secretWord << "\n";
            return true;
        }

        return false;
    }

public:
    HangmanGame(const string& wordFile = "words.txt") {
        loadWordList(wordFile);
    }

    void play() {
        cout << "Welcome to Hangman!\n";
        
        char playAgain;
        do {
            initializeGame();
            
            while (!isGameOver()) {
                displayGame();
                
                char guess;
                cout << "Enter your guess (a-z): ";
                cin >> guess;
                
                // Input validation
                while (!isalpha(guess)) {
                    cout << "Please enter a valid letter (a-z): ";
                    cin >> guess;
                }
                
                makeGuess(guess);
            }
            
            cout << "\nWould you like to play again? (y/n): ";
            cin >> playAgain;
            
        } while (tolower(playAgain) == 'y');
        
        cout << "Thanks for playing Hangman!\n";
    }
};

int main() {
    HangmanGame game;
    game.play();
    return 0;
}