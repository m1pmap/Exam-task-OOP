#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <array>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <string>
#include <regex>


using namespace std;

//1.Создать класс деления двух целых, обработать ошибку переполнения снизу (underflow). Снизу не получится сделать(((

//class Division
//{
//public:
//	Division(int dividend, int divisor)
//	{
//		try
//		{
//			if (divisor == 0)
//				throw std::exception("Error: divided into zero!");
//			else
//				if (dividend == INT_MIN && divisor == -1)
//					throw std::exception("Error: upperflow!");
//			cout << float(dividend) / divisor;
//		}
//		catch (exception e)
//		{
//			cout <<  e.what();
//		}
//	}
//};
//
//int main()
//{
//	Division a(5, 0);
//}




//2.Создать класс для формирования массива по формуле:   . Предусмотреть и обработать возникающие при этом исключительные ситуации.

//class CreateArray
//{
//public:
//	CreateArray()
//	{
//		float array[21];
//		int n = 0;
//		for (float i = -3; i <= 3; i += 0.3)
//		{
//			try
//			{
//				if (i + 1 <= 0)
//					throw exception();
//				else
//					array[n] = pow(log(i + 1), 3);
//			}
//			catch (exception e)
//			{
//				array[n] = 0;
//			}
//			n++;
//		}
//
//		for (int i = 0; i < 21; i++)
//			cout << array[i] << endl;
//	}
//};
//
//int main()
//{
//	CreateArray a;
//}




//3.Создать класс для формирования массива по формуле: .Предусмотреть и обработать возникающие при этом исключительные ситуации.

//class Create
//{
//public:
//	Create()
//	{
//		float array[21] = {1, 2};
//		int n = 0;
//		for (float i = 0; i <= 10; i += 0.5)
//		{
//			try
//			{
//				if (i * i * i - 2 <= 0)
//					throw exception();
//				else
//					array[n] = sqrt(1 / (i * i * i - 2));
//			}
//			catch (exception e)
//			{
//				array[n] = 0;
//			}
//			n++;
//		}
//		for (int i = 0; i < 21; i++)
//		{
//			cout << array[i] << endl;
//
//		}
//	}
//};
//
//int main()
//{
//	Create a;
//}




//4.Организовать отношение агрегации между классами Студент и Группа. Добавить в группу ИСТ21 студентов. Вывести студентов группы при помощи перегруженного оператора вывода.

//class Student
//{
//	string firstName;
//	string secondName;
//	int age;
//public:
//	Student(string firstName, string secondName, int age)
//	{
//		this->firstName = firstName;
//		this->secondName = secondName;
//		this->age = age;
//	}
//	void PrintStudentInfo()
//	{
//		cout << this->firstName << " " << this->secondName << " " << this->age << " year's old" << endl;
//	}
//};

//class Group
//{
//	vector<Student> groupVector;
//public:
//	void AddStudent(Student person)
//	{
//		groupVector.push_back(person);
//	}
//	
//	friend void operator << (ostream& os, Group group)
//	{
//		for(int i = 0; i < group.groupVector.size(); i++)
//		{
//			cout << i + 1 << ". ";
//			group.groupVector[i].PrintStudentInfo();
//		}
//	}
//};

//int main()
//{
//	Student a("Chvan", "Iridailo", 18);
//	Student b("Park", "Manasenko", 18);
//	Student C("Kima", "Dontyava", 18);
//	Group IST21;
//	IST21.AddStudent(a);
//	IST21.AddStudent(b);
//	cout << IST21;
//}




//5.Создать класс Money с двумя целочисленными параметрами, первый содержит номинал рублей, второй — копеек. 
//Создать класс Counter с полем вещественного типа, которое отображает денежное выражение.
//Определить в классе Counter оператор преобразования объекта из типа Counter в тип Money, то
//есть из денежного выражения 3.75 необходимо получить 3 рубля 75 копеек. 

//class Money
//{
//	int rubles;
//	int pennies;
//public:
//	Money(int rubles, int pennies)
//	{
//		this->rubles = rubles;
//		this->pennies = pennies;
//	}
//
//	void PrintMoney()
//	{
//		cout << this->rubles << " rubles " << this->pennies << " pennies";
//	}
//};

//class Counter
//{
//	float value;
//public:
//	Counter(float value)
//	{
//		this->value = value;
//	}
//
//	operator Money() const
//	{
//		return Money(int(value), (value - int(value)) * 100);
//	}
//};

//int main()
//{
//	Counter a(3.75);
//
//	Money b = { a };
//	b.PrintMoney();
//}

//6.Создать класс Clock с тремя целочисленными параметрами, первый содержит часы, второй — минуты, третий — секунды. 
//Создать класс Counter с полем целочисленного типа, которое отображает количество секунд. Определить в классе Counter
//оператор преобразования объекта из типа Counter в тип Clock, то есть из 1257 секунд необходимо получить 20 минут 57 секунд.

//class Clock
//{
//	int hours;
//	int minutes;
//	int seconds;
//public:
//	Clock(int hours, int minutes, int seconds)
//	{
//		try
//		{
//			if (hours < 0 || minutes < 0 || seconds < 0)
//				throw exception("The time-parameters should be positive!");
//			this->hours = hours;
//			this->minutes = minutes;
//			this->seconds = seconds;
//		}
//		catch (exception e)
//		{
//			cout << e.what();
//		}
//	}
//
//	void PrintTime()
//	{
//		if (this->hours > 0)
//			cout << this->hours << " hours ";
//		if (this->minutes > 0)
//			cout << this->minutes << " minutes ";
//		if (this->seconds > 0)
//			cout << this->seconds << " seconds";
//	}
//};

//class Counter
//{
//	int value;
//public:
//	Counter(int value)
//	{
//		this->value = value;
//	}
//	operator Clock() const
//	{
//		int hours = 0;
//		int minutes = value / 60;
//		int seconds = value - minutes * 60;
//		if (minutes >= 60)
//		{
//			hours = minutes / 60;
//			minutes = minutes - hours * 60;
//		}
//		return Clock(hours, minutes, seconds);
//	}
//};

//int main()
//{
//	Counter a(1257);
//
//	Clock b = { a };
//	b.PrintTime();
//}





//7.Контейнер вектор. Создать, заполнить n случайными элементами целого типа (от 0 до 100). 
//Найти среднее арифметическое вектора и добавить его в вектор под номером k. 

//int main()
//{
//	vector<int> container;
//	int sum = 0;
//	int n;
//
//	cout << "Please, enter n: "; cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		container.push_back(rand() % 100);
//		sum += container[i];
//		cout << i + 1 << ". " << container[i] << endl;
//	}
//
//	int number;
//	cout << "\nPlease, input number you want to insert the value under: "; cin >> number;
//
//	vector<int>::iterator buffIterator = container.begin();
//	advance(buffIterator, number - 1);
//	container.insert(buffIterator, sum / n);
//
//	for (int i = 0; i < container.size(); i++)
//		cout << i + 1 << ". " << container[i] << endl;
//}




//8.Контейнер вектор. Создать, заполнить n случайными элементами целого типа (от 0 до 100). 
//При помощи алгоритма поменять местами максимальный и минимальный элементы.

//int main()
//{
//	vector<int> container;
//
//	int max = 0;
//	int min = 100;
//	int i_max, i_min;
//	int n;
//
//	cout << "Please, enter n: "; cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		container.push_back(rand() % 100);
//		cout << container[i] << " ";
//		if (max < container[i])
//		{
//			max = container[i];
//			i_max = i;
//		}
//		if (min > container[i])
//		{
//			min = container[i];
//			i_min = i;
//		}	
//	}
//
//	container[i_min] = max;
//	container[i_max] = min;
//
//	cout << endl;
//
//	for (int i = 0; i < container.size(); i++)
//		cout << container[i] << " ";
//}




//9.Контейнер вектор. Создать, заполнить n случайными элементами целого типа (от 0 до 100). 
//При помощи алгоритма просуммировать все элементы в диапазоне от n/2 до n. 
//Заменить в диапазоне от 0 до n/2 все числа равные 1 на -1.

//int main()
//{
//	vector<int> container;
//	int n;
//
//	cout << "Please, input n: "; cin >> n;
//
//	int sum = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		container.push_back(rand() % 3);
//		cout << container[i] << " ";
//		if (i >= n / 2)
//			sum += container[i];
//		else
//			if (container[i] == 1)
//				container[i] = -1;
//	}
//
//	cout << "\nResult:\nSum: " << sum << endl;
//
//	for (int i = 0; i < n; i++)
//		cout << container[i] << " ";
//}




//10.Контейнер двухсторонняя очередь. Создать два контейнера, инициализировать при создании. 
//Заменить все значения первого контейнера на максимальный элемент, 
//второго — на минимальный. Обменять значениями две очереди.

//void PrintDeque(deque<int> dq)
//{
//	for (int i = 0; i < dq.size(); i++)
//		cout << dq[i] << " ";
//	cout << endl;
//}
//
//int main()
//{
//	deque<int> firstDq = { 1, 2, 3, 4, 5 };
//	deque<int> secondDq = firstDq;
//
//	int max = 0;
//	int min = 100;
//
//	cout << "First / second deque: ";
//	PrintDeque(firstDq);
//
//	for (int i = 0; i < firstDq.size(); i++)
//	{
//		if (max < firstDq[i])
//			max = firstDq[i];
//		if (min > firstDq[i])
//			min = firstDq[i];
//	}
//
//	for (int i = 0; i < firstDq.size(); i++)
//	{
//		firstDq[i] = max;
//		secondDq[i] = min;
//	}
//
//	cout << "\nAfter task:" << endl;
//	PrintDeque(firstDq);
//	PrintDeque(secondDq);
//
//	swap(firstDq, secondDq);
//
//	cout << "\nAfter swap:" << endl;
//	PrintDeque(firstDq);
//	PrintDeque(secondDq);
//}




//11.Контейнер односвязный список.  Создать, заполнить его n элементами целого типа. 
//Уменьшить размер списка на k позиций. Вставить в односвязный список элемент k на позицию m.

//void PrintList(forward_list<int> fList)
//{
//	for (auto i : fList)
//		cout << i << " ";
//}
//
//int main()
//{
//	forward_list<int> container;
//	int n;
//
//	cout << "Please, enter number of elements: "; cin >> n;
//	for (int i = 0; i < n; i++)
//		container.push_front(rand() % 10);
//
//	PrintList(container);
//
//	int k;
//	cout << "\nInput k: "; cin >> k;
//
//	for (int i = 0; i < k; i++)
//		container.pop_front();
//
//	PrintList(container);
//
//	int m;
//	cout << "\nInput m: "; cin >> m;
//
//	forward_list<int>::iterator it = container.begin();
//	advance(it, m);
//	container.insert_after(it, k);
//
//	PrintList(container);
//}




//12.Контейнер односвязный список.  Создать, заполнить его n элементами целого типа.
//Заменить все значения контейнера, меньшие n на максимальный элемент контейнера, 
//а большие n — на минимальный элемент контейнера.

//void PrintList(forward_list<int> fList)
//{
//	for (auto i : fList)
//		cout << i << " ";
//	cout << endl;
//}
//
//int main()
//{
//	forward_list<int> container;
//	int n;
//	cout << "Please, input n: "; cin >> n;
//
//	int max = 0;
//	int min = 10;
//
//	for (int i = 0; i < n; i++)
//	{
//		int randomValue = rand() % 10;
//		container.push_front(randomValue);
//		if (max < randomValue)
//			max = randomValue;
//		if (min > randomValue)
//			min = randomValue;
//	}
//
//	PrintList(container);
//
//	for (forward_list<int>::iterator it = container.begin(); it != container.end(); ++it)
//	{
//		if (*(it) < n)
//			*(it) = max;
//		else
//			*(it) = min;
//	}
//
//	PrintList(container);
//}




//13.Контейнер двухсвязный список, создать, заполнить его n элементами целого типа. 
//Вывести размер списка. Заменить элементы контейнера в диапазоне n/2… n  на значение максимального элемента контейнера.

//void PrintList(list<int> list)
//{
//	for (auto i : list)
//		cout << i << " ";
//	cout << endl;
//}
//
//int main()
//{
//	list<int> container;
//	int n;
//	cout << "Please, input n: "; cin >> n;
//
//	int max = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		int randoValue = rand() % 10;
//		container.push_back(randoValue);
//
//		if (max < randoValue)
//			max = randoValue;
//	}
//
//	PrintList(container);
//	
//	list<int>::iterator it = container.begin();
//	advance(it, n / 2);
//
//	for (it; it != container.end(); ++it)
//		*(it) = max;
//
//	PrintList(container);
//}




//14.Контейнер массив фиксированного размера. Создать два контейнера. 
//Первый инициализировать при создании элементами строкового типа, второму 
//массиву присвоить значения первого. Присвоить всем элементам первого контейнера значение «Экзамен». 

//void PrintArray(array<string, 3> array)
//{
//	for (auto i : array)
//		cout << i << " ";
//	cout << endl;
//}
//
//int main()
//{
//	array<string, 3> firstCont = { "school", "iniversity", "office" };
//	array<string, 3> secondCont = firstCont;
//
//	cout << "First / second containers: ";
//	PrintArray(secondCont);
//
//	for (int i = 0; i < firstCont.size(); i++)
//		firstCont[i] = "exam";
//
//	cout << "First container after task: ";
//	PrintArray(firstCont);
//}




//15.Адаптер контейнера стек. Создать, заполнить его n элементами целого типа. 
//Выполнить последовательно действия: добавить элемент в стек, удалить 2 элемента 
//из стека, вывести размер и элементы стека. 

//void PrintVector(vector<int> v)
//{
//	for (auto i : v)
//		cout << i << " ";
//	cout << endl;
//}
//
//int main()
//{
//	stack<int, vector<int>> container;
//	int n;
//	cout << "Please, input n: "; cin >> n;
//
//	for (int i = 0; i < n; i++)
//		container.push(rand() % 10);
//
//	auto vector = container._Get_container();
//	PrintVector(vector);
//
//	for (int i = 0; i < 2; i++)
//		container.pop();
//
//	vector = container._Get_container();
//	cout << "Size: " << container.size() << "\nStack: ";
//	PrintVector(vector);
//}




//16.Адаптер контейнера очередь. Создать, заполнить его n элементами целого типа. 
//Выполнить последовательно действия: добавить 7 элемент в очередь, удалить элемент 
//из очереди, вывести последний элемент очереди. 

//void PrintDeque(deque<int> dq)
//{
//	for (int i = 0; i < dq.size(); ++i)
//		cout << i + 1 << ". " << dq[i] << endl;
//}
//
//int main()
//{
//	queue<int> container;
//	int n;
//	cout << "Please, enter n(n > 5): "; cin >> n;
//
//	try
//	{
//		if (n <= 5)
//			throw exception("n should be more than 5!");
//
//		for (int i = 0; i < n; i++)
//		{
//			container.push(rand() % 10);
//			cout << i + 1 << ". " << container.back() << endl;
//		}
//
//		//adding element
//		auto dq = container._Get_container();
//		deque<int>::iterator it = dq.begin();
//		advance(it, 6);
//		dq.insert(it, rand() % 10);
//
//		while (!container.empty())
//			container.pop();
//
//		for (int i = 0; i < dq.size(); ++i)
//			container.push(dq[i]);
//
//		cout << "Result after add: " << endl;
//		PrintDeque(dq);
//
//		//deleting element
//		container.pop();
//		dq = container._Get_container();
//		cout << "Result after delete: " << endl;
//		PrintDeque(dq);
//
//		cout << "Back element: " << container.back();  //back element
//	}
//	catch (exception e)
//	{
//		cout << e.what();
//	}
//}




//17.Контейнер Set. Создать, заполнить не менее, чем 10 элементами 
//строкового типа. Вывести на экран. Вычислить размер.

//int main()
//{
//	set<string> container = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j" };
//
//	cout << "Set: ";
//	for (string i : container)
//		cout << i << " ";
//
//	cout << "\nSize: " << container.size();
//}




//18.Контейнер map. Создать (ключ-строковое значение, значение-целое).
//Заменить первое и последние элементы на [cдал,9], [не сдал, 3]. Найти индекс элемента по ключу. 

//int main()
//{
//	map<string, int> container;
//
//	container.emplace("a", 1);
//	container.emplace("b", 2);
//	container.emplace("c", 3);
//	container.emplace("d", 4);
//	container.emplace("e", 5);
//
//	container.erase(container.begin());	
//	container.erase(prev(container.end()));
//
//	container.emplace("passed", 9);
//	container.emplace("didn't pass", 3);
//
//	cout << container["passed"];
//}




//19.Контейнер вектор. Создать, заполнить n случайными элементами целого типа (от 0 до 100). \
При помощи алгоритма переставить элементы в обратном порядке.  Заменить все числа больше 40 на 0.

//void PrintVector(vector<int> v)
//{
//	for (auto i : v)
//		cout << i << " ";
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> container;
//
//	int n;
//	cout << "Please, enter n: "; cin >> n;
//
//	for (int i = 0; i < n; ++i)
//	{
//		container.push_back(rand() % 100);
//		cout << container[i] << " ";
//	}
//	cout << endl;
//
//	reverse(container.begin(), container.end());
//	PrintVector(container);
//
//	for (int i = 0; i < n; ++i)
//		if (container[i] > 40)
//			container[i] = 0;
//
//	PrintVector(container);
//}




//20.Контейнер вектор. Создать, заполнить n случайными элементами целого типа (от 0 до 100). 
//При помощи алгоритма отсортировать значения вектора. Поменять местами максимальный и минимальный элемент.

//void PrintVector(vector<int> v)
//{
//	for (auto i : v)
//		cout << i << " ";
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> container;
//
//	int n;
//	cout << "Please, enter n: "; cin >> n;
//
//	for (int i = 0; i < n; ++i)
//	{
//		container.push_back(rand() % 100);
//		cout << container[i] << " ";
//	}
//	cout << endl;
//
//	sort(container.begin(), container.end());
//	PrintVector(container);
//
//	swap(container[0], container[n - 1]);
//	PrintVector(container);
//}




//21.Контейнер двунаправленная очередь. Удалить все элементы очереди, расположенные 
//между первым и вторым отрицательным элементом (не включая сами отрицательные элементы).

//int main()
//{
//	deque<int> container;
//
//	int n;
//	cout << "Please, enter n: "; cin >> n;
//
//	int i_start, i_finish, count = 0;
//
//	for (int i = 0; i < n; ++i)
//	{
//		container.push_back(rand() % 10 - 3);
//		cout << container[i] << " ";
//		if (container[i] < 0 && count == 0)
//		{
//			count++;
//			i_start = i;
//		}
//		else
//			if (container[i] < 0 && count == 1)
//			{
//				count++;
//				i_finish = i;
//			}
//	}
//	cout << endl;
//
//	auto start = container.begin();
//	auto finish = start;
//
//	advance(start, i_start + 1);
//	advance(finish, i_finish);
//
//	container.erase(start, finish);
//	for (auto i : container)
//		cout << i << " ";
//}




//22.Создайте файл из элементов типа «Спортивная команда» (название, 
//город, количество игроков, количество набранных очков) и выведите его на экран.

//class SportTeam
//{
//	string name;
//	string city;
//	int playersNum;
//	int points;
//public:
//	SportTeam(string name, string city, int playersNum, int points)
//	{
//		this->name = name;
//		this->city = city;
//		this->playersNum = playersNum;
//		this->points = points;
//	}
//
//	string getName()
//	{
//		return this->name;
//	}
//	string getCity()
//	{
//		return this->city;
//	}
//	int getPlayersNum()
//	{
//		return this->playersNum;
//	}
//	int getPoints()
//	{
//		return this->points;
//	}
//};
//
//
//int main()
//{
//	SportTeam team1("team1", "city1", 10, 20);
//	SportTeam team2("team2", "city2", 10, 40);
//	SportTeam team3("team3", "city3", 10, 15);
//
//	ofstream file("sportTeam.txt");
//
//	vector<SportTeam> vector = { team1 , team2, team3 };
//
//	for (int i = 0; i < vector.size(); ++i)
//	{
//		file << "Name: " << vector[i].getName() << endl
//			<< "City: " << vector[i].getCity() << endl
//			<< "Players: " << vector[i].getPlayersNum() << endl
//			<< "Points: " << vector[i].getPoints() << endl << endl;
//	}
//
//	file.close();
//
//	ifstream readFile("sportTeam.txt");
//	string line;
//
//	if (readFile.is_open())
//		while (getline(readFile, line))
//			cout << line << endl;
// 
//	readFile.close();
//}




//23.Создайте файл из элементов типа «Стадион» (название, адрес, вместимость, виды спорта) и выведите его на экран.

//class Stadium
//{
//	string name;
//	string addres;
//	int capacity;
//	string typeOfSport;
//public:
//	Stadium(string name, string addres, int capacity, string typeOfSport)
//	{
//		this->name = name;
//		this->addres = addres;
//		this->capacity = capacity;
//		this->typeOfSport = typeOfSport;
//	}
//
//	string getName()
//	{
//		return this->name;
//	}
//	string getAddres()
//	{
//		return this->addres;
//	}
//	int getCapacity()
//	{
//		return this->capacity;
//	}
//	string getTypeOfSport()
//	{
//		return this->typeOfSport;
//	}
//};
//
//int main()
//{
//	Stadium arena1("name1", "addres1", 40000, "football");
//	Stadium arena2("name2", "addres2", 70000, "hockey");
//	Stadium arena3("name3", "addres3", 45000, "basketball");
//
//	ofstream file("stadium.txt");
//	vector<Stadium> vector = { arena1, arena2, arena3 };
//
//	for (int i = 0; i < vector.size(); ++i)
//	{
//		file << "Name: " << vector[i].getName() << endl
//			<< "Addres: " << vector[i].getAddres() << endl
//			<< "Capacity: " << vector[i].getCapacity() << endl
//			<< "Type of sport: " << vector[i].getTypeOfSport() << endl << endl;
//	}
//
//	file.close();
//
//	ifstream readFile("stadium.txt");
//	string line;
//
//	while (getline(readFile, line))
//		cout << line << endl;
// 
//	readFile.close();
//}




//24.Создайте файл из элементов типа «Автомобиль» (марка, год выпуска, цена, цвет) и выведите его на экран.

//class Auto
//{
//	string brand;
//	int yearOfRealise;
//	int cost;
//	string colour;
//public:
//	Auto(string brand, int yearOfRealise, int cost, string colour)
//	{
//		this->brand = brand;
//		this->yearOfRealise = yearOfRealise;
//		this->cost = cost;
//		this->colour = colour;
//	}
//
//	string getBrand()
//	{
//		return this->brand;
//	}
//	int getYearOfRealise()
//	{
//		return this->yearOfRealise;
//	}
//	int getCost()
//	{
//		return this->cost;
//	}
//	string getColour()
//	{
//		return this->colour;
//	}
//};
//
//int main()
//{
//	Auto auto1("Porsche", 2023, 140000, "blue");
//	Auto auto2("Mitsubishi", 1993, 13000, "red");
//	Auto auto3("Volkswagen", 2004, 25000, "black");
//
//	vector<Auto> vector = { auto1, auto2, auto3 };
//	ofstream file("auto.txt");
//
//	for (int i = 0; i < vector.size(); ++i)
//	{
//		cout << "Brand: " << vector[i].getBrand() << endl
//			<< "Year of realise: " << vector[i].getYearOfRealise() << endl
//			<< "Cost: " << vector[i].getCost() << "$" << endl
//			<< "Colour: " << vector[i].getColour() << endl << endl;
//	}
//
//	file.close();
//
//	ifstream readFile("auto.txt");
//	string line;
//
//	while (getline(readFile, line))
//		cout << line << endl;
//
//	readFile.close();
//}




//29.Организовать валидацию пользовательского ввода имени (не содержащего цифр), возраста 
//(не отрицательного и не содержащего букв) и номера телефона в формате (##)-###-##-##.

//int main()
//{
//	string name;
//	cout << "Please, input name: "; cin >> name;
//
//	regex regularName("[\\D]+");
//	regex regularAge("\\d+");
//	regex regularTel("\\(\\d{2}\\)\\-\\d{3}\\-\\d{2}\\-\\d{2}");
//
//	if (regex_match(name.c_str(), regularName))
//		cout << "Name is correct" << endl;
//	else
//		cout << "Name is NOT correct" << endl;
//
//	string age;
//	cout << "Please, input your age: "; cin >> age;
//	if (regex_match(age.c_str(), regularAge))
//		cout << "Age is correct" << endl;
//	else
//		cout << "Age is NOT correct" << endl;
//
//	string tel;
//	cout << "Please, input your tel((##)-###-##-##): "; cin >> tel;
//	if (regex_match(tel.c_str(), regularTel))
//		cout << "Tel is correct" << endl;
//	else
//		cout << "Tel is NOT correct" << endl;
//}




//30.Организовать валидацию пользовательского ввода ФИО (не содержащего цифр) и номера паспорта в формате @@#######.

int main()
{
	string name;
	string paspotNum;

	regex regularName("\\D+");
	regex regularPasportNum("([\\D\\w]{2})\\d{7}");

	cout << "Input name: "; cin >> name;
	if (regex_match(name.c_str(), regularName))
		cout << "Name is correct" << endl;
	else
		cout << "Name is NOT correct" << endl;

	cout << "Input pasport number: "; cin >> paspotNum;
	if (regex_match(paspotNum.c_str(), regularPasportNum))
		cout << "Pasport number is correct" << endl;
	else
		cout << "Pasport number is NOT correct" << endl;
}