#include"BigNum.h"
///<vector type long 
vector<long long>vec;


/**< Definition for overloading non-member functions
  * for overlaoding + operator
  *for each function we pass two constant by reference "left" & "right"
  *creating BigNum class object result and performing the arithmetic and returning its results.
*/
BigNum operator +(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x + right.x;
	return result;

}
/**< Definition for overloading non-member functions
* for overlaoding - operator
*for each function we pass two constant by reference "left" & "right"
*creating BigNum class object result and performing the arithmetic and returning its results.
*/
BigNum operator -(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x - right.x;
	return result;
}
/**< Definition for overloading non-member functions
* for overlaoding * operator
*for each function we pass two constant by reference "left" & "right"
*creating BigNum class object result and performing the arithmetic and returning its results.
*/
BigNum operator *(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x * right.x;
	return result;
}
/**< Definition for overloading non-member functions
* for overlaoding / operator
*for each function we pass two constant by reference "left" & "right"
*creating BigNum class object result and performing the arithmetic and returning its results.
*/
BigNum operator /(const BigNum&left, const BigNum&right) {

	BigNum result;

	result.x = left.x / right.x;
	return result;

}
/**< Definition for overloading non-member functions
* for overlaoding % operator
*for each function we pass two constant by reference "left" & "right"
*creating BigNum class object result and performing the arithmetic and returning its results.
*/
BigNum operator %(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x % right.x;
	return result;
}

/**< using vector to push two integers to store and passing it
*using vector to push two integers to store and passing it
*to overload the performing addition arithmetic between 3 BigNum class objects
*and displaying the final result.
*/
void displayAdd() {

	BigNum v1;
	vec.push_back(v1.x = 8);

	BigNum v2;
	vec.push_back(v2.x = 3);


	BigNum result;
	result.x = v1.x + v2.x;

	result = operator+(v1, v2);
	cout << "Addition: " << "X-values: " << v1.x << "  +  "
		<< v2.x << " = " << result.x << endl;
}
/**< using vector to push two integers to store and passing it
*using vector to push two integers to store and passing it
*to overload the performing subtraction arithmetic between 3 BigNum class objects
*and displaying the final result.
*/
void displaySub() {

	BigNum v1;
	vec.push_back(v1.x = 8);

	BigNum v2;
	vec.push_back(v2.x = 3);

	BigNum result;
	result.x = v1.x - v2.x;

	result = operator-(v1, v2);
	cout << "\nSubtraction: " << "X-values: " << v1.x << "  -  "
		<< v2.x << " = " << result.x << endl;
}
/**< using vector to push two integers to store and passing it
*using vector to push two integers to store and passing it
*to overload the performing Multiplication arithmetic between 3 BigNum class objects
*and displaying the final result.
*/
void displayMul() {
	BigNum v1;
	vec.push_back(v1.x = 8);

	BigNum v2;
	vec.push_back(v2.x = 3);

	BigNum result;
	result.x = v1.x * v2.x;

	result = operator*(v1, v2);
	cout << "\nMultiplication: " << "X-values: " << v1.x << "  *  "
		<< v2.x << " = " << result.x << endl;
}
/**< using vector to push two integers to store and passing it
*using vector to push two integers to store and passing it
*to overload the performing Divison arithmetic between 3 BigNum class objects
*and displaying the final result.
*/
void displayDiv() {
	BigNum v1;
	vec.push_back(v1.x = 8);

	BigNum v2;
	vec.push_back(v2.x = 3);

	BigNum result;
	result.x = v1.x / v2.x;

	result = operator/(v1, v2);
	cout << "\nDivision: " << "X-values: " << v1.x << "  /  "
		<< v2.x << " = " << result.x << endl;
}
/**< using vector to push two integers to store and passing it
*using vector to push two integers to store and passing it
*to overload the performing Modulation arithmetic between 3 BigNum class objects
*and displaying the final result.
*/
void displayMod() {
	BigNum v1;
	vec.push_back(v1.x = 8);

	BigNum v2;
	vec.push_back(v2.x = 7);

	BigNum result;
	result.x = v1.x % v2.x;

	result = operator%(v1, v2);
	cout << "\nModulation: " << "X-values: " << v1.x << "  %  "
		<< v2.x << " = " << result.x << endl;
}