/*
 * ex3.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PC�[USER
 */

#include "stdint.h"
#include <iostream>
#include <String>
using namespace std;

int main(){
	string name;
	string answer_s;
	uint8_t answer_ui8;
	cout << "���Ȃ��̂����O�����f�����Ă���낵���ł����Hy:1,n:0" << endl;
	cin >> answer_s;
	answer_ui8 = std::stoi(answer_s);
	if(answer_ui8 == 1){
		cin >> name;
		cout << "���Ȃ���" << name << "����Ƌ�̂ł��ˁB����ɂ���" << endl;
	} else {
		cout << "���̂������A�l���͑厖�ł�����ˁB����ł́B" << endl;
	}

	return 0;
}


