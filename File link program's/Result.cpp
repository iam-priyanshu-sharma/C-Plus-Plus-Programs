#include <iostream>
#include "marks only file use.cpp"
using namespace std;
class marks1 : public result
{
	public:
	void printmarks()
	{
		marks();
		percentage();
		display();
	}
};

int main()
{
  marks1 C;
  C.printmarks();
  return 0;
}
