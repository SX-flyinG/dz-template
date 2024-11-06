#include <iostream> 
#include <ctime> 

using namespace std;


void check(int first, int second, char symbol);
template<typename T>
T add(T first, T second);
template<typename T>
T minuss(T first, T second);
template<typename T>
T multiply(T first, T second);
template<typename T>
T devite(T first, T second);
template<typename T>
T extraDevite(T first, T second);



void check(int first, int second, char symbol) {
	cout << "Function start" << endl;

	if (symbol == '+')
	{
		int result = add(first, second);
		cout << result;
	}
	else if (symbol == '-')
	{
		int result = minuss(first, second);
		cout << result;
	}
	else if (symbol == '*')
	{
		int result = multiply(first, second);
		cout << result;
	}
	else if (symbol == '/')
	{
		int result = devite(first, second);
		cout << result;
	}
	else {
		int result = extraDevite(first, second);
		cout << result;
	}
}

template<typename T>
T  add(T first, T second) {
	return first + second;
}

template<typename T>
T minuss(T first, T second) {
	return first - second;
}

template<typename T>
T multiply(T first, T second) {
	return first * second;
}

template<typename T>
T devite(T first, T second) {
	return first / second;
}

template<typename T>
T extraDevite(T first, T second) {
	return first % second;
}


int main()
{
	int firstnum, secNum;
	char symbol;
	cout << "First num : ";
	cin >> firstnum;
	cout << "Second num : ";
	cin >> secNum;
	cout << "Symbol : ";
	cin >> symbol;
	cout << endl;
	check(firstnum, secNum, symbol);
}