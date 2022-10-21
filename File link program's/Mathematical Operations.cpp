using namespace std;

class Arithmetic_operations
{
protected:
	int a, b, num1, num2, div = 0, rem_div = 0, n, sum = 0, i, number, choice, z, mul;
	float sq, q;

public:
	void calc()
	{
		cout << "************Calculator************" << endl;
		cout << "***************Menu***************" << endl;
		cout << "* 1. Addition                    *" << endl;
		cout << "* 2. Subtraction                 *" << endl;
		cout << "* 3. Multiplication              *" << endl;
		cout << "* 4. Division                    *" << endl;
		cout << "* 5. Remainder Division          *" << endl;
		cout << "* 6. Square                      *" << endl;
		cout << "* 7. Square Root                 *" << endl;
		cout << "**********************************" << endl;
		cout << "Enter Your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nHow many numbers you want to add: ";
			cin >> n;
			cout << "\nPlease enter the number one by one: ";
			for (i = 1; i <= n; i++)
			{
				cin >> number;
				sum = sum + number;
			}
			cout << "\n Sum of the numbers = " << sum;
			break;

		case 2:
			cout << " \n Enter the First number = ";
			cin >> num1;
			cout << "\n Enter the Second number = ";
			cin >> num2;
			z = num1 - num2;
			cout << "\nSubtraction of the numbers = " << z;
			break;

		case 3:
			cout << " \n Enter the First number = ";
			cin >> num1;
			cout << "\n Enter the Second number = ";
			cin >> num2;
			mul = num1 * num2;
			cout << "\n Multiplication of two numbers = " << mul;
			break;

		case 4:
			cout << " \n Enter the First number = ";
			cin >> num1;
			cout << "\n Enter the Second number = ";
			cin >> num2;
			while (num2 == 0)
			{
				cout << "\n Divisor cannot be zero"
						"\n Please enter the divisor once again:";
				cin >> num2;
			}
			div = num1 / num2;
			cout << "\n Division of two numbers = " << div;
			break;
		case 5:
			cout << " \n Enter the First number = ";
			cin >> num1;
			cout << "\n Enter the Second number = ";
			cin >> num2;
			while (num2 == 0)
			{
				cout << "\n Divisor cannot be zero"
						"\n Please enter the divisor once again:";
				cin >> num2;
			}
			rem_div = num1 % num2;
			cout << "\nRemainder division of two numbers = " << rem_div;
			break;

		case 6:
			cout << " \n Enter a number to find the Square: ";
			cin >> num1;
			sq = num1 * num1;
			cout << " \n Square of " << num1 << " is : " << sq;
			break;
		case 7:
			cout << "\n Enter the number to find the Square Root:";
			cin >> num1;
			q = sqrt(num1);
			cout << " \n Square Root of " << num1 << " is : " << q;
			break;
		default:
			cout << "\nInvalid Choice Try Next Time.";
		}
	}
};
