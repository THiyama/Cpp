/* ex2.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PC�[USER
 */

#include <iostream>
#include <cstdlib>   //rand()���g�����߂ɕK�v
#include <ctime>

class Omikuji {
	int lacky;
public :
	Omikuji();
	void hiku();
};

Omikuji::Omikuji(){
	srand((unsigned)time(NULL));
	std::cout<<"�����̃��b�L�[�i���o�[�i1�`5�j����͂��Ă��������B"<<std::endl;
	std::cin>>lacky;  //�����̃��b�L�[�i���o�[����
}

void Omikuji::hiku(){
	int x;
    x = rand() % 5 + 1;   //1�`5�̗����𔭐������A���ɑ���A���ꂪ���������݂����̔ԍ�
    std::cout << "���Ȃ��̉^����";
    if(x == lacky){                                            //x��un����������Α�g
        std::cout << "��g�Ƃ������Ƃł��B" << std::endl;
    }
    else{                                                    //x��un���������Ȃ���΁u���ʁv
        std::cout<<"���݂Ƃ������Ƃł��B"<<std::endl;
    }
}

int main(){
	Omikuji today;
	today.hiku();
}


/*
int main()
{
	srand( (unsigned)time( NULL ) );
    std::cout << rand()%10+1 << std::endl;
    std::cout << rand()%10+1 << std::endl;
    std::cout << rand()%10+1 << std::endl;
}

/*
#include "stdint.h"
#include <iostream>
#include <String>

class Rocket {
	int nenryo;
	int sokudo;

public :
	Rocket(int x);
	void kasoku();
};

//�R���X�g���N�^�̒�`
Rocket::Rocket(int x):nenryo(x),sokudo(0){}

//������\���֐��̒�`
void Rocket::kasoku(){
	if(nenryo >= 2){
		sokudo += 2;
		nenryo -= 2;
		std::cout << "���݂̔R����" << nenryo << "�ł�" << std::endl;
		std::cout << "���݂̑��x��" << sokudo << "�ł�" << std::endl;
	} else {
		std::cout << "�R���؂�ł��B�����ł��܂���B�Y���ł��A" << std::endl;
	}
}

int main(){
	std::cout << "���P�b�g����������ɂ���܂��B�R���i�����j����͂��Ă��������B" << std::endl;
	int n;       //���[�U�̓��͂����l���i�[����ϐ����ЂƂp�ӂ��܂����B���̖���n�ł��B
	std::cin >> n;    //���[�U�̓��͂���������n�ɑ�����܂����B

	//n���R���X�g���N�^�ɓn���ă��P�b�g������܂��B
	Rocket ohtori(n);
	std::cout<< "�������܂��B" <<std::endl;
	ohtori.kasoku();  //ohtori�ɑ΂���kasoku���g���Ă��܂�
	std::cout << "�܂��A�������܂��B" << std::endl;
	ohtori.kasoku();  //ohtori�ɑ΂���kasoku���g���Ă��܂�
	std::cout << "�܂��܂��A�������Ă݂܂��B" << std::endl;
	ohtori.kasoku();  //ohtori�ɑ΂���kasoku���g���Ă��܂�
	std::cout<< "�P���̖`���͏I���܂����B" << std::endl;
}



/*
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
*/

