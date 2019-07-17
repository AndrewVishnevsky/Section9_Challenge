// Section9_Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers{};
	int value{}, size{};
	char menu_input{};
	do{
		cout << "P - print numbers" << endl;
		cout << "A - add a number" << endl;
		cout << "M - display mean at the numbers" << endl;
		cout << "S - display the smallest number" << endl;
		cout << "L - display the largest number" << endl;
		cout << "Q - Quit" << endl;


		cin >> menu_input;

		switch (menu_input)
		{
		case'p':
		case'P':
			if (numbers.empty())
				cout << "List is a empty"<<endl;
			else
				for (auto val : numbers)
				{
					cout << val << " ";
				}
			break;
		case'a':
		case'A':
			if (numbers.empty())
			{
				cout << "Enter a size of vector: ";
				cin >> size;
				cout << "\nEnter a values of vector" << endl;
				for (int i = { 1 }; i <= size; ++i)
				{
					cout << "Element" << i << "=";
					cin >> value;
					numbers.push_back(value);
					
				}				
			}
			else
			{
				cout << "Add a number: ";
				cin >> value;
				numbers.push_back(value);
			}
			break;
		case 'M':
		case 'm':
			if (numbers.empty())
				cout << "List is a empty!";
			else
			{
				int sum_vector{};
				for (auto val : numbers)
				{
					sum_vector += val;
				}
				float mean = sum_vector / numbers.size();
				cout << " Mean of the all numbers = " << mean;
			}
			break;
		case 'S':
		case 's':
			if (numbers.empty())
				cout << "List is a empty!";
			else
			{
				auto min = min_element(begin(numbers), end(numbers));
				int minimum = *min;
				cout << "Minimum element = " << minimum;
			}
			break;
		case 'L':
		case 'l':
			if (numbers.empty())
				cout << "List is a empty!";
			else
			{
				auto max = max_element(begin(numbers), end(numbers));
				int maximum = *max;
				cout << "Minimum element = " << maximum;
			}
			break;
			
		default:
			break;
		}
		cout << endl;
	} while (menu_input != 'q' && menu_input != 'Q')
		;
		cout<<"Bye Bye"<<endl;
}

