/* ex2.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PC�[USER
 */

#include "stdint.h"
#include <iostream>
#include <String>

class Neko {
	std::string name;
public :
	Neko(std::string s);
	void naku() const;
};

Neko::Neko(std::string s):name(s){} //

void Neko::naku() const{ //Neko�N���X�̒���naku�֐�����Ƃ����Ӗ���Neko::naku()
	std::cout << "����" << name << "���ɂ��I" << std::endl;
}

class Inu {
	std::string name;
public :
	Inu(std::string);
	void naku() const;
};

Inu::Inu(std::string s):name(s){}

void Inu::naku() const{ //Inu�N���X�̒���naku�֐�����Ƃ����Ӗ���Inu::naku()
	std::cout << "�l��" << name << "�������I" << std::endl;
}

int main(){
	std::string s;
	std::cout << "���𐶐����܂��B���O����͂��Ă�������" << std::endl;
	std::cin >> s;

	Inu pochi(s);
	std::cout << "���Ȃ��̖��t����������������ɐ�������܂���" << std::endl;
	std::cout << "�������܂�" << std::endl;

	pochi.naku();
}
