#include <iostream>

int main() {

	float basePay = 12.50;
	float hoursWorked = 0.0;
	float overTime = 0.0;
	float totalPay = 0.0;
	float overTimePay = 0.0;


	std::cout << "Enter the hours worked for the week as a whole number: " << std::endl;
	std::cin >> hoursWorked;

	switch (hoursWorked > 0)
	{
	case 1: 
		if (hoursWorked > 40)
		{
			overTime = hoursWorked - 40;
			overTimePay = overTime * (basePay * 1.5);
			std::cout << "You worked " << overTime << " overtime hours\n" << std::endl;
			totalPay = (basePay * 40) + (overTimePay);
			std::cout << "Your total pay this week is $" << totalPay << std::endl;
		}
	case 2:
		if (hoursWorked <= 40)
		{
			totalPay = (basePay * hoursWorked);
			std::cout << "Your total pay this week is $" << totalPay << std::endl;
		}
		
		
	}
}
