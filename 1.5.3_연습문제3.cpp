//일부 시민들의 정보를 이용하여 선거권이 없는 사람을 가려내자

//1. 필요한 헤더파일 포함
#include <iostream>
#include <string>
#include <forward_list>
//#include <algorithm>
//#include <sstream>

using namespace std;

//2. citizen 구조체 정의
struct citizen
{
	std::string name;
	int age;
};

std::ostream& operator << (std::ostream& os, const citizen& c)
{
	return (os << "[" << c.name << ", " << c.age << "]");
}

//3. main함수를 작성하고, std::forward_list를 사용하여 시민 정보를 초기화 한다.
//나중에 다시 초기화하는 것을 피하기 위해 복사본을 만들어 둔다.
int main()
{
	std::forward_list<citizen> citizens = {
		{"kim",22}, {"Lee", 23}, {"jung",25}, {"sue",18}, {"suee",19}
	};

	auto citizens_copy = citizens;

	std::cout << "전체 시민들: ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	//4.나이 정보를 이용하여 투표권이 없는 시민을 리스트에서 제거한다.
	citizens.remove_if([](const citizen& c) {
		//나이가 19세보다 적으면 리스트에서 제거한다.
		return(c.age < 19);
		});

	std::cout << "투표권이 있는 시민들: ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	/*
	remove_if()함수는 주어진 조건에 대해 참을 만족하는 원소를 모두 제거한다.
	위는 람다 표현식을 사용했다.
	*/

	//5. 내년에 새로 투표권이 생기는 사람을 알아보자
	citizens_copy.remove_if([](const citizen& c) {
		return (c.age != 18);
		});

	std::cout << "내년에 투표권이 생기는 시민들: ";
	for (const auto& c : citizens_copy)
		std::cout << c << " ";
	std::cout << std::endl;


}
