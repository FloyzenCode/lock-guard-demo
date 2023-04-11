#pragma once
#include <iostream>
#include <Windows.h>
#include <thread>
#include <mutex>
#include <tchar.h>

std::mutex mtx;



VOID print_lock_guard(CHAR ch) {
	std::lock_guard<std::mutex> lg(mtx);

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));

	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 10; j++) {
			std::cout << ch;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

VOID print_not_lock_guard(CHAR ch) {

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));

	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 10; j++) {
			std::cout << ch;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}