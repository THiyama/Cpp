/*
 * ex3.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PCーUSER
 */

#include "stdint.h"
#include <iostream>
#include <String>
using namespace std;

int main(){
	string name;
	string answer_s;
	uint8_t answer_ui8;
	cout << "あなたのお名前をお伺いしてもよろしいですか？y:1,n:0" << endl;
	cin >> answer_s;
	answer_ui8 = std::stoi(answer_s);
	if(answer_ui8 == 1){
		cin >> name;
		cout << "あなたは" << name << "さんと仰るのですね。こんにちは" << endl;
	} else {
		cout << "このご時世、個人情報は大事ですからね。それでは。" << endl;
	}

	return 0;
}


