// CipherProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Encoder.h"
using namespace std;

int main()
{
    /*In this program, I will have the user enter a word to encode and put it through three different ciphers, Vigenere, Caesar, and Rail Cipher*/
   
    Encoder encoder;

    string vigenereWord;

    string vigenereKeyWord;
    cout << "Vigenere cipher" << endl;

    cout << "Enter a word: ";

    cin >> vigenereWord;

    cout << "Enter a key word that is the same amount of letters: ";

    cin >> vigenereKeyWord;

    cout << "Pig Latin" << endl;

    string piglatinWord;

    cout << "Enter a word: ";

    cin >> piglatinWord;

    cout << "Atbash cipher" << endl;

    string atbashWord;

    cout << "Enter a word: ";

    cin >> atbashWord;



    encoder.VigenereCipher(vigenereWord, vigenereKeyWord);
    encoder.PigLatin(piglatinWord);
    encoder.AtbashCipher(atbashWord);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
