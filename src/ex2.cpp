/*
 * ex3.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PCーUSER
 */

#include "stdint.h"
#include <iostream>
#include <String>

int main(){
	std::string name;
	std::string answer_s;
	uint8_t answer_ui8;
	std::cout << "あなたのお名前をお伺いしてもよろしいですか？y:1,n:0" << std::endl;
	std::cin >> answer_s;
	answer_ui8 = std::stoi(answer_s);
	if(answer_ui8 == 1){
		std::cin >> name;
		std::cout << "あなたは" << name << "さんと仰るのですね。こんにちは" << std::endl;
	} else {
		std::cout << "このご時世、個人情報は大事ですからね。それでは。" << std::endl;
	}

	return 0;
}


