#include "main.h"

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Running calculations." << endl;
	cout << argc << endl;
	for (int i; i != argc; i++)
	{
		cout << argv[i] << endl;
	}
	return 0;
}
