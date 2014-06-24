#pragma once
#include <string>
#include <vector>
#include <ostream>
#include <list>

class WordList
{
private:
	void Load();		//What parameters needed?
	void Reflect();		//Didn't check yet what it is and what it should do.

	class WordData
	{
	public:
		WordData();
		WordData(std::string& word, int& lineNumber);
		~WordData();


		int Frequency;
		std::string Word;
		std::vector<int> LineNumbers;

		void AddOccurence(int lineNumber);
		int GetFrequency();
		const std::string* GetWord();
		const std::vector<int>* GetLineNumbers();
		int Compare(const std::string* comparedTo);
		void Print(std::ostream &stream);
	};

public:
	WordList();
	WordList(const std::string& fileName);
	~WordList();

	int Getsize();
	void Print(std::ofstream& stream, const std::string& beginsWith = "");

	std::string SourceFileName;
	std::list<WordData> Words;
};

