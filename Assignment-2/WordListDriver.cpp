#include "WordList.h"

#include <fstream>
#include <assert.h>

//const std::string basePath = R"(E:\Assignment-02\)";

int main()
{
	WordList wordList("Seuss.txt");
	std::ofstream fout("SeussWordList.txt");
	assert(fout.good());
	wordList.Print(fout);
	wordList.Print(fout, "wh");
	wordList.Print(fout, "the");
	fout.close();
	return 0;
}