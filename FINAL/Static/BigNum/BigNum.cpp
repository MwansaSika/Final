#include"BigNum.h"
vector<long long>vec;
BigNum operator +(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x + right.x;
	return result;

}
BigNum operator -(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x - right.x;
	return result;
}
BigNum operator *(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x * right.x;
	return result;
}
BigNum operator /(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x / right.x;
	return result;
}
BigNum operator %(const BigNum&left, const BigNum&right) {
	BigNum result;

	result.x = left.x % right.x;
	return result;
}
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