#include "mkdirp.hpp"
#include <iostream>

int main(){
	mkdirp("/tmp/foo/bar/baz", [](auto &err) {
		if (err) std::cerr << err.message() << std::endl;
		else std::cout << "pow!" << std::endl;
	});
}