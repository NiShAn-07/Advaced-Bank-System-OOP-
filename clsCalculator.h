#pragma once

template <class T>
class clsCalculator
{
private:
	T _Number1;
	T _Number2;




public:

	clsCalculator(T Number1 , T Number2) {
		_Number1 = Number1;
		_Number2 = Number2;
	}

	 T Number1() {
		return _Number1;
	}

	 T Number2() {
		return _Number2;
	}

	 T Add(T Number1 , T Number2) {

		return (Number1 + Number2);
 }

	 T Subtract(T Number1, T Number2) {

		return (Number1 - Number2);
	}

	 T Multiply(T Number1, T Number2) {

		return (Number1 * Number2);
	}

	 T Divide(T Number1, T Number2) {

		return (Number1 / Number2);
	}



	 void PrintResult() {

		cout<<"Addition of :  " << Number1() <<" + " << Number2() << " = " << Add(Number1(), Number2())<<endl;
		cout << "Subtraction of :  " << Number1() << " - " << Number2() << " = " << Subtract(Number1(), Number2()) << endl;
		cout << "Multiplication of :  " << Number1() << " * " << Number2() << " = " << Multiply(Number1(), Number2()) << endl;
		cout << "Division of :  " << Number1() << " / " << Number2() << " = " << Divide(Number1(), Number2()) << endl << endl;


	}



};

