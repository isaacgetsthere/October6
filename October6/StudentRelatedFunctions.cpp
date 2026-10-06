#include"StudentRelatedFunctions.h"
#include<fstream>

vector<string> getAllStudentNames(string fileName)
{
	ifstream fin(fileName);
	if (!fin.is_open())
	{
		cout << "Error opening file: " << fileName << endl;
		return {};
	}
	vector<string> allNames;

	string currentName;
	while (getline(fin, currentName))
	{
		//cout << currentName << endl;
		allNames.push_back(currentName);
	}
	fin.close();
	return allNames;
}

string getLongestName(vector<string> names)
{
	string currentLongestName = "";
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i].length() > currentLongestName.length())
		{
			currentLongestName = names[i];
		}
	}
	return currentLongestName;
}

void demoSimpleArray()
{

	vector<string> groceryList =
	{
	"Milk",
	"Eggs",
	"Bread",
	"Cheese",
	"Fruits",
	"Vegetables"
	};

	groceryList.push_back("Butter");

	cout << "the size of the grocery list is: " << groceryList.size() << endl;

	for (int i = 0; i < groceryList.size(); i++)
	{
		cout << groceryList[i] << endl;
	}
}
