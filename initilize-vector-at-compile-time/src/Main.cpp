#include <iostream>
#include <vector>
#include <tuple>
#include <type_traits>

using namespace std;

template<class T, T ...rest>
class Elements
{
public:
	template<T a>
	void add_to_vector()
	{
		vec.push_back(a);
	}

	template<T a, T b, T... more>
	void add_to_vector()
	{
		vec.push_back(a);
		add_to_vector<b, more...>();
	}

	Elements()
	{
		add_to_vector<rest...>();
	}

	vector<T> vec;
};

int main()
{
	cout << "hi" << endl;
	Elements<int, 1, 2, 3, 4, 5, 6, 7> e;
	for (auto& a : e.vec)
		cout << a << " ";
	cout << endl;
	return 0;
}
