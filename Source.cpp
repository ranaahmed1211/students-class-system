#include<iostream>
#include<string>
using namespace std;
int i = 0;
struct student {
	int no;
	string name;
	float  english, math, computer, chemistry, physics;

};
float age(student st[], int y)
{
	float r = st[y].english + st[y].math + st[y].computer + st[y].chemistry + st[y].physics;
	float z = r / 5;
	return z;

}
string grade(student st[], int y)
{
	int x = age(st, y);
	if (x >= 95)return "A+";
	if (x >= 90 && x < 95)return"A";
	if (x >= 85 && x < 90)return"A-";
	if (x >= 80 && x < 85)return"B+";
	if (x >= 75 && x < 80)return"B";
	if (x >= 70 && x < 75)return"C+";
	if (x >= 65 && x < 70)return"C";
	if (x >= 60 && x < 65)return"D+";
	if (x >= 55 && x < 60)return"D";
	if (x >= 50 && x < 55)return"D-";
	if (x < 50)return"F";


}
int searchn2(student st[], string x)
{
	int w = -1;

	for (int o = 0; o < i; o++)
	{
		if (st[o].name == x) {
			return o;
			w = 1;
			break;

		}
	}
	while (w != 1) {


		cout << endl << "There is no student with this name" << endl;
		cout << "Please enter the name of the student you want to search his records" << endl;
		getline(cin, x);
		for (int o = 0; o < i; o++)
		{
			if (st[o].name == x) {
				return o;
				w = 1;
				break;
			}
		}
	}
}
int searchn3(student st[], string x)
{
	int w = -1;

	for (int o = 0; o < i; o++)
	{
		if (st[o].name == x) {
			return o;
			w = 1;
			break;

		}
	}
	while (w != 1) {


		cout << endl << "There is no student with this name" << endl;
		cout << "Please enter the name of the student you want to delete his records" << endl;
		getline(cin, x);
		for (int o = 0; o < i; o++)
		{
			if (st[o].name == x) {
				return o;
				w = 1;
				break;
			}
		}
	}
}
int searchn1(student st[], string x)
{
	int w = -1;

	for (int o = 0; o < i; o++)
	{
		if (st[o].name == x) {
			return o;
			w = 1;
			break;

		}
	}
	while (w != 1) {


		cout << endl << "There is no student with this name" << endl;
		cout << "Please enter the name of the student you want to show his report card " << endl;
		getline(cin, x);
		for (int o = 0; o < i; o++)
		{
			if (st[o].name == x) {
				return o;
				w = 1;
				break;
			}
		}
	}
}
int searchn(student st[], string x)
{
	int w = -1;

	for (int o = 0; o < i; o++)
	{
		if (st[o].name == x) {
			return o;
			w = 1;
			break;

		}
	}
	while (w != 1) {


		cout << endl << "There is no student with this name" << endl;
		cout << "Please enter the name of the student you want to modify his records" << endl;
		getline(cin, x);
		for (int o = 0; o < i; o++)
		{
			if (st[o].name == x) {
				return o;
				w = 1;
				break;
			}
		}
	}
}
int search(student st[], int x)
{

	for (int r = 0; r <= i; r++) {
		if (st[r].no == x)
		{
			return r;
			break;
		}
	}

}
void wel()
{
	cout << endl << endl;
	cout << "            student " << endl << endl << "          report card" << endl << endl << "            project" << endl << endl << endl << endl << endl;
	cout << "     MADE BY : MARS TEAM " << endl << endl << endl;
	system("pause");
}

int menu()

{
	system("cls");
	int x;
	cout << endl << "     Main Menu" << endl << endl << endl;
	cout << "01- Result Menu" << endl << endl << "02- Entry / Edit Menu" << endl << endl
		<< "03- Exit" << endl << endl << endl << endl << "Please select your option (1-3)" << endl;
	cin >> x;
	if (x > 3 || x <= 0)
	{
		cout << "invalid choice" << endl;
		cout << "please select your option (1-3) " << endl;
		cin >> x;
	}
	return x;
}
int menu2()
{
	system("cls");
	int y;
	cout << endl << "     Entry Menu" << endl << endl << endl;
	cout << "01- Creat new student record" << endl << endl;
	cout << "02- Display all student records" << endl << endl;
	cout << "03- Search student record " << endl << endl;
	cout << "04- Modify student record " << endl << endl;
	cout << "05- Delete student record " << endl << endl;
	cout << "06- Back to main menu" << endl << endl << endl;
	cout << "Please enter your choice (1-6)" << endl;
	cin >> y;
	if (y > 6 || y <= 0)
	{
		cout << "invalid choice" << endl;
		cout << "please enter your choice (1-6) " << endl;
		cin >> y;
	}
	return y;
}
int menu1()
{
	system("cls");
	int y;
	cout << endl << "     Result Menu" << endl << endl << endl;
	cout << "01- Class result" << endl << endl;
	cout << "02- Student report card" << endl << endl;
	cout << "03- Bact to main menu" << endl << endl << endl;
	cout << "Enter your choice(1-3)" << endl;
	cin >> y;
	if (y > 3 || y <= 0)
	{
		cout << "invalid choice" << endl;
		cout << "enter your choice(1-3) " << endl;
		cin >> y;
	}
	return y;
}
void thank()
{
	system("cls");
	cout << endl << endl << "     Thank you " << endl;
}
void creat(student st[])
{
	system("cls");
	cout << endl << endl << "    Creat new student record " << endl << endl << endl << endl;
	cout << " Enter the roll number of student  " << endl;
	cin >> st[i].no;
	for (int r = 0; r < i; r++) {
		if (st[i].no == st[r].no && i != r) {
			cout << " this student number is already used please enter another number"
				<< endl;
			cin >> st[i].no;
			r = -1;
		}
	}
	cout << endl << endl;
	cout << "Enter student name" << endl;
	getline(cin, st[i].name);
	getline(cin, st[i].name);
	cout << endl << endl;
	cout << "enter student mark in Englis out of 100 " << endl;
	cin >> st[i].english;
	while (st[i].english > 100 || st[i].english < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[i].english;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "enter student mark in math out of 100 " << endl;
	cin >> st[i].math;


	while (st[i].math > 100 || st[i].math < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[i].math;
		cout << endl << endl;
	}

	cout << endl << endl;
	cout << "enter student record in computer scince out of 100" << endl;
	cin >> st[i].computer;
	while (st[i].computer > 100 || st[i].computer < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[i].computer;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "enter student mark in chemistry out of 100" << endl;
	cin >> st[i].chemistry;
	while (st[i].chemistry > 100 || st[i].chemistry < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[i].chemistry;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "enter student mark in physics out of 100" << endl;
	cin >> st[i].physics;
	while (st[i].physics > 100 || st[i].physics < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[i].physics;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "student record has been created " << endl;
	i++;
	system("pause");

}
void modify(student st[]) {
	system("cls");
	cout << endl << " enter the name of the student you want to modify his records" << endl;
	string x;
	getline(cin, x);
	getline(cin, x);

	int y = searchn(st, x);
	cout << "****************************" << endl;
	cout << " student number     : " << st[y].no << endl;
	cout << " student name     : " << st[y].name << endl;
	cout << " english mark     : " << st[y].english << endl;
	cout << " math mark     : " << st[y].math << endl;
	cout << " computer scince mark     : " << st[y].computer << endl;
	cout << " chemistry mark     : " << st[y].chemistry << endl;
	cout << " physics mark     :" << st[y].physics << endl;
	float h = age(st, y);
	cout << "Percentage of student is      :" << h << endl;
	string m = grade(st, y);
	cout << "Grade of student is      : " << m << endl << endl;
	cout << " to modify  " << endl << endl;
	cout << " Enter the roll number of student  " << endl;
	int s = st[y].no;
	cin >> st[y].no;
	for (int s = 0; s < i; s++) {
		if (st[y].no == st[s].no && y != s) {
			cout << " this student number is already used .... please enter another number" << endl;
			cin >> st[y].no;
			s = -1;
		}
	}

	cout << endl << endl;
	cout << "Enter student name" << endl;
	getline(cin, st[y].name);
	getline(cin, st[y].name);

	cout << endl << endl;
	cout << "Enter student mark in Englis out of 100 " << endl;
	cin >> st[y].english;
	while (st[y].english > 100 || st[y].english < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[y].english;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "Enter student mark in math out of 100 " << endl;
	cin >> st[y].math;
	while (st[y].math > 100 || st[y].math < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[y].math;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "Enter student record in computer scince out of 100" << endl;
	cin >> st[y].computer;
	while (st[y].computer > 100 || st[y].computer < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[y].computer;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "Enter student mark in chemistry out of 100" << endl;
	cin >> st[y].chemistry;
	while (st[y].chemistry > 100 || st[y].chemistry < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[y].chemistry;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "Enter student mark in physics out of 100" << endl;
	cin >> st[y].physics;
	while (st[y].physics > 100 || st[y].physics < 0) {
		cout << " Invalid mark ... Please enter valid mark" << endl;
		cin >> st[y].physics;
		cout << endl << endl;
	}
	cout << endl << endl;


}
void disst2(student st[]) {
	system("cls");
	cout << "enter the name of the student you want to search his records " << endl << endl;
	string x;
	getline(cin, x);
	getline(cin, x);
	int y = searchn2(st, x);
	cout << endl << endl

		<< "*******************************************************" << endl;
	cout << " Student number     : " << st[y].no << endl;
	cout << " Student name       :  " << st[y].name << endl;
	cout << " English mark      : " << st[y].english << endl;
	cout << " Math mark      : " << st[y].math << endl;
	cout << " Computer scince mark       : " << st[y].computer << endl;
	cout << " Chemistry mark      : " << st[y].chemistry << endl;
	cout << " Physics mark      : " << st[y].physics << endl;
	float h = age(st, y);
	cout << "Percentage of student is      :" << h << endl;
	string m = grade(st, y);
	cout << "Grade of student is      : " << m << endl;
	system("pause");

}


void disst1(student st[]) {
	system("cls");
	cout << "enter the name of the student you want to show his report card " << endl << endl;
	string x;
	getline(cin, x);
	getline(cin, x);
	int y = searchn1(st, x);
	cout << endl << endl

		<< "*******************************************************" << endl;
	cout << " Student number     : " << st[y].no << endl;
	cout << " Student name       :  " << st[y].name << endl;
	cout << " English mark      : " << st[y].english << endl;
	cout << " Math mark      : " << st[y].math << endl;
	cout << " Computer scince mark       : " << st[y].computer << endl;
	cout << " Chemistry mark      : " << st[y].chemistry << endl;
	cout << " Physics mark      : " << st[y].physics << endl;
	float h = age(st, y);
	cout << "Percentage of student is      :" << h << endl;
	string m = grade(st, y);
	cout << "Grade of student is      : " << m << endl;
	system("pause");

}

void displayall(student st[])
{
	system("cls");
	for (int u = 0; u < i; u++)
	{


		cout << " Student number     : " << st[u].no << endl;
		cout << " Student name     : " << st[u].name << endl;
		cout << " English mark     : " << st[u].english << endl;
		cout << " Math mark     : " << st[u].math << endl;
		cout << " Computer scince mark     :" << st[u].computer << endl;
		cout << " Chemistry mark     : " << st[u].chemistry << endl;
		cout << " Physics mark     : " << st[u].physics << endl;
		float h = age(st, u);
		cout << "Percentage of student is      :" << h << endl;
		string m = grade(st, u);
		cout << "Grade of student is      : " << m << endl;
		cout << endl << endl << "****************************************************************************" << endl << endl;

	}
	system("pause");
}
void delet(student st[])
{
	system("cls");
	cout << endl << "Enter the name of the student you want to delet his records" << endl;
	string x;
	getline(cin, x);
	getline(cin, x);
	int y = searchn3(st, x);
	cout << endl << "***************************************************";
	cout << " Student number      : " << st[y].no << endl;
	cout << " Student name       : " << st[y].name << endl;
	cout << " English mark      : " << st[y].english << endl;
	cout << " Math mark      : " << st[y].math << endl;
	cout << " Computer scince mark      : " << st[y].computer << endl;
	cout << " Chemistry mark      : " << st[y].chemistry << endl;
	cout << " Physics mark     : " << st[y].physics << endl;
	float h = age(st, y);
	cout << "Percentage of student is      :" << h << endl;
	string m = grade(st, y);
	cout << "Grade of student is      : " << m << endl;
	for (int t = y; t < i - 1; t++) {
		st[t].no = st[t + 1].no;
		st[t].name = st[t + 1].name;
		st[t].computer = st[t + 1].computer;
		st[t].english = st[t + 1].english;
		st[t].math = st[t + 1].math;
		st[t].chemistry = st[t + 1].chemistry;
		st[t].physics = st[t + 1].physics;
	}
	i--;
	cout << endl << "Record has been deleted" << endl;

	system("pause");

}

void classs(student st[]) {
	system("cls");

	cout << endl << endl << endl;
	cout << "                 ALL STUDENTS RESULT " << endl << endl <<
		"***************************************************************************************************" << endl <<
		"Student.No           Name          E     M     CS     CH     P     %age     grade" << endl;
	cout << "***************************************************************************************************" << endl << endl;
	for (int g = 0; g < i; g++)
	{
		float ag = age(st, g);
		string grad = grade(st, g);
		cout << st[g].no << "                " << st[g].name << "          " << st[g].english << "     " << st[g].math << "     " <<
			st[g].computer << "     " << st[g].chemistry << "     " << st[g].physics << "     " << ag << "     " << grad << endl << endl;

	}
	system("pause");



}

void main()
{
	student st[100];

	wel();
	do
	{

		int x = menu();
		if (x == 2) {
			do {

				int y = menu2();
				if (y == 1)
				{
					creat(st);
				}
				if (y == 2) {
					displayall(st);
				}
				if (y == 3) {

					disst2(st);

				}
				if (y == 4) {
					modify(st);

				}
				if (y == 5)
				{
					delet(st);
				}
				if (y == 6) {
					break;
				}


			} while (true);
		}
		if (x == 1) {

			int o = menu1();
			if (o == 1) {
				classs(st);

			}
			if (o == 2) {
				disst1(st);
			}

		}
		if (x == 3)
		{
			thank();
			break;
		}

	} while (true);


}
