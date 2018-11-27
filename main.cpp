#include "Map.hpp"


int main(int argc, char const *argv[]) {
	cs540::Map<int, int> m;
	m.insert(std::make_pair(13,1));
	m.insert(std::make_pair(12,1));
	m.insert(std::make_pair(11,1));
	m.insert(std::make_pair(10,1));
	m.insert(std::make_pair(9,1));
	m.insert(std::make_pair(8,1));
	// m.insert(std::make_pair(7,1));
	m.insert(std::make_pair(6,1));
	m.insert(std::make_pair(5,1));
	m.insert(std::make_pair(4,1));
	m.insert(std::make_pair(3,1));
	m.insert(std::make_pair(2,1));
	m.insert(std::make_pair(1,1));
	// m[2] = 1;
	// m[3] = 1;
	// m[4] = 1;
	// m[5] = 1;
	// m[6] = 1;
	// m[7] = 1;
	// m[8] = 1;
	// m[9] = 1;
	// m[10] = 1;
	// m[11] = 1;
	// m[12] = 1;
	// m[13] = 1;
	// m.printTree_mymap();
	// cs540::Map<int, int>m2(m);
	// m2[7] = 2;
	// m2[15] = 2;
	// std::cout << "--------------------------------------------\n";
	// m2.printTree_mymap();
	// if (m < m2) std::cout << "true smaller.\n";
	//
	// for (auto x: m) std::cout << x.first << ", ";
	// std::cout << std::endl;
	// std::cout << "--------------------------------------------\n";
	// for (auto x: m2) std::cout << x.first << ", ";
	// std::cout << std::endl;
	//
	// auto rt = m2.find(20);
	// for (; rt != m2.end(); ++rt) {
	// 	std::cout << rt->first << ", ";
	// }
	// std::cout << std::endl;
	//
	// cs540::Map<int, int>::ConstIterator ct = m2.begin();
	// cs540::Map<int, int>::Iterator it = m2.begin();
	// if (ct == it) {
	// 	std::cout << "equal." << std::endl;
	// }

	m.erase(6);
	m.printTree_mymap();
	std::cout << "--------------------------------------------\n";
	m.erase(9);
	m.printTree_mymap();


	return 0;
}
