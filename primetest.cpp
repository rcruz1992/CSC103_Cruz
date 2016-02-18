/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	int count=0;

	while(cin >> n)
	{
		if(n == 2)
			cout << "1\n";
		else if(n == 1 || n == 0)
			cout << "0\n";
		else
		{
			for(int i=1;i<n;i++)
			{
				if(n % i == 0)
					count++;
				else if(count > 1)
					break;
			}

			if(count == 1)
			{
				cout << "1\n";
				count=0;
			}	
			else
			{
				cout << "0\n";
				count=0;
			}
		}
	}
	return 0;
}
