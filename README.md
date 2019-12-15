# mkdirp

Like `mkdir -p`, but in C++!

# Example

## pow.cpp

```
#include "mkdirp.hpp"
#include <iostream>

int main(){
	mkdirp("/tmp/foo/bar/baz", [](auto &err) {
		if (err) std::cerr << err.message() << std::endl;
		else std::cout << "pow!" << std::endl;
	});
}
```

Output

```
pow!
```

And now /tmp/foo/bar/baz exists, huzzah!


# License

MIT