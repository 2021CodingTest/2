//필요한 헤더파일을 포함한다.
#include <iostream>
#include <forward_list>
#include <vector>


int main()
{
	//std::vector을 이용하여 최근 경기 우승자 명단을 작성한다.
	std::vector<std::string> vec = {
		"1asd thtrge" ,"2sd erf" ,"3sdf hre" ,"4dfg qwr",
		"5dfg sdf" ,"6sdf fgh", "7adsf asdf", "8adf adsf","9adfff f"
	};

	auto it = vec.begin(); //상수 시간
	std::cout << "가장 최근 우승자: " << *it << std::endl;

	it += 8;
	std::cout << "8년전 우승자: " << *it << std::endl;

	advance(it, -3);
	std::cout << "그 후 3년 뒤 우승자: " << *it << std::endl;

	//std::forward_list를 이용하여 같은 작업을 수행한다.
	std::forward_list<std::string> fwd(vec.begin(), vec.end());

	auto it1 = fwd.begin();
	std::cout << "가장 최근 우승자: " << *it1 << std::endl;

	advance(it1, 5);
	std::cout << "4년 전 우승자: " << *it1 << std::endl;

	//std::forward_list는 순방향으로만 이동할 수 있으므로
	//아래 코드는 에러가 발생한다.
	//advance(it1, -2);
}
