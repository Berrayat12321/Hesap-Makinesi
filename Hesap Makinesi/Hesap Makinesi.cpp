#include <iostream>

using namespace std;
int main()
{

	int a;
	int b;

	string işlem;

	string input;

	cout << "1.İşlem : Toplama İşlemi" << endl;
	cout << "2.İşlem : Çıkarma İşlemi" << endl;
	cout << "3.İşlem : Çarpma İşlemi" << endl;
	cout << "4.İşlem : Bölme İşlemi" << endl;



	cout << "Hangi İşlemi Yapmak İstiyorsunuz ?" << endl;

	cin >> işlem;

	if (işlem == "1") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "Sonuç:" << a + b << endl;
	}

	else if (işlem == "2") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "Sonuç:" << a - b << endl;
	}

	else if (işlem == "3") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "Sonuç:" << a * b << endl;
	}

	else if (işlem == "4") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "Sonuç:" << (float)a / b << endl;
	}
	else {
		cout << "Geçersiz İşlem" << endl;
	}


	return 0;
}

