/*
 * ex3.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PC�[USER
 */

#include "stdint.h"
#include <iostream>
#include <String>

int main(){
	std::string name;
	std::string answer_s;
	uint8_t answer_ui8;
	std::cout << "���Ȃ��̂����O�����f�����Ă���낵���ł����Hy:1,n:0" << std::endl;
	std::cin >> answer_s;
	answer_ui8 = std::stoi(answer_s);
	if(answer_ui8 == 1){
		std::cin >> name;
		std::cout << "���Ȃ���" << name << "����Ƌ�̂ł��ˁB����ɂ���" << std::endl;
	} else {
		std::cout << "���̂������A�l���͑厖�ł�����ˁB����ł́B" << std::endl;
	}

	return 0;
}


