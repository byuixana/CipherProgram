#include "Encoder.h"
#include <iostream>
#include <cctype>
#include <algorithm>
#include <sstream>
#include <string>
#include <list>
#include <vector>
using namespace std;
Encoder::Encoder() {

}

void Encoder::Encode()
{
}

void Encoder::VigenereCipher(string word, string keyword)
{
	/*This function encodes a keyword and a word given by the user utilizing the Vignere Cipher using modulo and for loops.*/
	/*As of right now, the function assumes the input for keyword has already been made to match the size of word.*/
	char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	list<int> encoded_values;
		for (int word_i = 0; word_i < word.length(); word_i++)
		{
				int encoded_value = ((static_cast<int>(word[word_i])) - 65 + (static_cast<int>(keyword[word_i]))) % 26;

				encoded_values.push_back(encoded_value);
		}

		for (int encoded_value : encoded_values) {
			
			cout << alphabet[encoded_value];
		}
		cout << endl;
}

void Encoder::PigLatin(string word) {
	string add_on_end(1, word[0]);

	word.erase(0, 1);

	cout << word + add_on_end + "ay";

	cout << endl;
}

void Encoder::AtbashCipher(string word) {
	char alphabet[] = { 'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A' };
	
	for (char letter : word)
	{
		int letter_i = static_cast<int>(letter) - 65;

		char new_letter = alphabet[letter_i];

		cout << new_letter; 
		
	}
	cout << endl;
}



