#include <iostream>
#include <thread>
#include"HeroineState.h"


void HeroineState::Credit()
{
	std::cout << "credit\n";

	std::this_thread::sleep_for(std::chrono::seconds(3));// 3 �b�҂�
}

void HeroineState::Title()
{
	std::cout << "title\n";

	std::this_thread::sleep_for(std::chrono::seconds(3));// 3 �b�҂�
}

void HeroineState::Opening()
{
	std::cout << "opening\n";

	std::this_thread::sleep_for(std::chrono::seconds(5));// 5 �b�҂�
}

void HeroineState::Demo()
{
	std::cout << "demo\n";

	std::this_thread::sleep_for(std::chrono::seconds(5));// 5 �b�҂�
}

void HeroineState::Update()
{
	Credit();
	Title();
	Opening();
	Demo();
}