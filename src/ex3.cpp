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
	uint8_t answer;
	cout << "���Ȃ��̂����O�����f�����Ă���낵���ł����H" << endl;
	cin >> answer;
	if(answer == 1){
		cin >> name;
		cout << "���Ȃ���" << name << "����Ƌ�̂ł��ˁB����ɂ���" << endl;
	} else {
		cout << "���̂������A�l���͑厖�ł�����ˁB����ł́B" << endl;
	}

	return 0;
}


