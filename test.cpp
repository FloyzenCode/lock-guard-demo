#include "lock_guard.h"

class Test {
public:
	VOID test_lock_guard() {
		std::thread t1(print_lock_guard, '#');
		std::thread t2(print_lock_guard, '*');

		t1.join();
		t2.join();
	}

	VOID test_not_lock_guard() {
		std::thread t1(print_not_lock_guard, '#');
		std::thread t2(print_not_lock_guard, '*');

		t1.join();
		t2.join();
	}
}; Test test;

INT _tmain(INT argc, CHAR* argv[]) {
	// lock_guard
	test.test_lock_guard();
	// not lock_guard
	test.test_not_lock_guard();
	return NULL;
}