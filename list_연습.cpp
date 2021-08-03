#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int> list1 = { 1,1,1,1,1,1,1 };

	auto l_it4 = next(list1.begin(),0);



	list1.insert(next(list1.begin(), 3), 0);	//l_it4 반복자는 무효화되지 않는다.

	for (auto i : list1)
		std::cout << i << " ";	//1,1,1, 0 1,1,1,1
	std::cout << "\n";


	list1.insert(l_it4, 7);

	for (auto i : list1)
		std::cout << i << " ";	//7 1,1,1, 0 1,1,1,1
	std::cout << "\n";

}
