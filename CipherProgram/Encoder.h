#pragma once
#include <string>
using namespace std;
class Encoder
{
private:
	string cipher_type;


public:
	Encoder();

	void Encode();

	void VigenereCipher(string word, string keyword);

	void PigLatin(string word);

	void AtbashCipher(string word);
};

