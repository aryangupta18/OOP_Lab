#include <iostream>
#include <string>
using namespace std;

class person {
protected:
	string n;
	int c;

public:
	person() {
		n = "";
		c = 0;
	}

	void in_p() {
		cout << "Enter name: ";
		getline(cin >> ws, n);
		cout << "Enter code: ";
		cin >> c;
	}

	void up_p() {
		cout << "New name: ";
		getline(cin >> ws, n);
		cout << "New code: ";
		cin >> c;
	}

	void sh_p() {
		cout << "Name: " << n << "\n";
		cout << "Code: " << c << "\n";
	}
};

class account : virtual public person {
protected:
	double p;

public:
	account() {
		p = 0;
	}

	void in_a() {
		cout << "Enter pay: ";
		cin >> p;
	}

	void up_a() {
		cout << "New pay: ";
		cin >> p;
	}

	void sh_a() {
		cout << "Pay: " << p << "\n";
	}
};

class admin : virtual public person {
protected:
	int e;

public:
	admin() {
		e = 0;
	}

	void in_d() {
		cout << "Enter experience (years): ";
		cin >> e;
	}

	void up_d() {
		cout << "New experience (years): ";
		cin >> e;
	}

	void sh_d() {
		cout << "Experience: " << e << "\n";
	}
};

class master : public account, public admin {
public:
	void crt() {
		in_p();
		in_a();
		in_d();
	}

	void upd() {
		up_p();
		up_a();
		up_d();
	}

	void dsp() {
		cout << "\nMaster Data\n";
		sh_p();
		sh_a();
		sh_d();
	}
};

int main() {
	master m;
	int ch;

	do {
		cout << "\n1. Create\n";
		cout << "2. Update\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "Enter choice: ";
		cin >> ch;

		if (ch == 1) {
			m.crt();
		} else if (ch == 2) {
			m.upd();
		} else if (ch == 3) {
			m.dsp();
		} else if (ch == 4) {
			cout << "Exiting\n";
		} else {
			cout << "Invalid choice\n";
		}
	} while (ch != 4);

	return 0;
}
