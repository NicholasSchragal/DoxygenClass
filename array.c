/*! \file
\brief The main documentation
\mainpage
\details
This is some example code with documentation.

\author Nick Schragal
\date November 15, 2021
*/

#include <stdio.h>

/*!
\brief Adds tthe first two elements of an array

\details
Given the array of doubles a[] in the arguments, it first changes the 0th element to 2.0 and then adds the first two elements.

It reutrns the sum of the first two elements:
\f[
sum=a_0+a_1
\f]

\author Nick Schragal
\date November 15, 2021

\todo Have to check if the array has at least 2 elements

@param a[] an array of doubles that will be changed

\return sum a double with the sum of the first two array elements
*/

double addE1(double a[])
{
	double sum;
	
	a[0] = 2.0;
	sum = a[0] + a[1];

	return sum;
}

/*!
\brief Main function

\details
This is just the main function

v2.0 this was corrected

v1.0 First Attempt

\author Nick Schragal
\version 2.0
\date November 15, 2021
*/

int main(void)
{
    double a[2] = {1.0, 1.0};
    double sum = addE1(a);
    
    printf("%f\n",sum);
    
    return 0;
}
    