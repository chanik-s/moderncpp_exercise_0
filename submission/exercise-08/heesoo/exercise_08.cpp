#include <iostream>


#ifdef _MSC_VER
#define MY_FUNCTION__ __FUNCSIG__
#else
#define MY_FUNCTION__ __PRETTY_FUNCTION__
#endif




class MyApplication  {
public:
	MyApplication() {
		std::cout << MY_FUNCTION << '\n';
	}

	MyApplication(const MyApplication&) {
		std::cout << MY_FUNCTION << '\n';

	}

	MyApplication(MyApplication&&) noexcept {
		std::cout << MY_FUNCTION << '\n';

	}

	MyApplication& operator = (const MyApplication&) {
		std::cout << MY_FUNCTION << '\n';
		return *this;
	}

	MyApplication& operator = (MyApplication&&) noexcept {
		std::cout << MY_FUNCTION << '\n';
		return *this;
	}

	MyApplication() {
		std::cout << MY_FUNCTION << '\n';

		//�Ҹ���
	}


};


int main() {



	MyApplication a;




	MyApplication b = a;





	return 0;
}