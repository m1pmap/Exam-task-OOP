#include <iostream>
#include <vector>

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