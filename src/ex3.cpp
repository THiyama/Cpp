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
	uint8_t answer;
	cout << "あなたのお名前をお伺いしてもよろしいですか？" << endl;
	cin >> answer;
	if(answer == 1){
		cin >> name;
		cout << "あなたは" << name << "さんと仰るのですね。こんにちは" << endl;
	} else {
		cout << "このご時世、個人情報は大事ですからね。それでは。" << endl;
	}

	return 0;
}


