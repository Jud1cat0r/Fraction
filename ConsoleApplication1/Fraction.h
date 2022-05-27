#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
	int integer = 0;
public:
	Fraction()
	{

	}
	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void setNumerator(int numerator)
	{
		this->numerator = numerator;
	}
	void setDenominator(int denominator)
	{
		this->denominator = denominator;
	}
	void print()
	{
		if (integer > 0) cout << integer << " " << numerator << "/" << denominator;
		else if (numerator == 0 && denominator == 0) cout << integer;
		else cout << numerator << "/" << denominator;
	}

	Fraction addition(Fraction d2)
	{
		Fraction d3;
		d3.numerator = numerator*d2.denominator + d2.numerator*denominator;
		d3.denominator = denominator * d2.denominator;
		if (d3.numerator > d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator -= d3.denominator;
		}
		else if (d3.numerator == d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator %= d3.numerator;
			d3.denominator %= d3.denominator;
		}
		return d3;
	}

	Fraction subtraction(Fraction d2)
	{
		Fraction d3;
		d3.numerator = numerator * d2.denominator - d2.numerator * denominator;
		d3.denominator = denominator * d2.denominator;
		if (d3.numerator > d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator -= d3.denominator;
		}
		else if (d3.numerator == d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator %= d3.numerator;
			d3.denominator %= d3.denominator;
		}
		return d3;
	}

	Fraction multiplication(Fraction d2)
	{
		Fraction d3;
		d3.numerator = numerator * d2.numerator;
		d3.denominator = denominator * d2.denominator;
		if (d3.numerator > d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator -= d3.denominator;
		}
		else if (d3.numerator == d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator %= d3.numerator;
			d3.denominator %= d3.denominator;
		}
		return d3;
	}

	Fraction division(Fraction d2)
	{
		Fraction d3;
		d3.numerator = numerator * d2.denominator;
		d3.denominator = denominator * d2.numerator;
		if (d3.numerator > d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator -= d3.denominator;
		}
		else if (d3.numerator == d3.denominator)
		{
			d3.integer = d3.numerator / d3.denominator;
			d3.numerator %= d3.numerator;
			d3.denominator %= d3.denominator;
		}
		return d3;
	}
};

