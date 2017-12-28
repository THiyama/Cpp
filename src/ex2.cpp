/* ex2.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PCーUSER
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

void Neko::naku() const{ //Nekoクラスの中のnaku関数だよという意味のNeko::naku()
	std::cout << "俺は" << name << "だにゃん！" << std::endl;
}

class Inu {
	std::string name;
public :
	Inu(std::string);
	void naku() const;
};

Inu::Inu(std::string s):name(s){}

void Inu::naku() const{ //Inuクラスの中のnaku関数だよという意味のInu::naku()
	std::cout << "僕は" << name << "だワン！" << std::endl;
}

int main(){
	std::string s;
	std::cout << "犬を生成します。名前を入力してください" << std::endl;
	std::cin >> s;

	Inu pochi(s);
	std::cout << "あなたの名付けた犬がメモリ上に生成されました" << std::endl;
	std::cout << "犬が鳴きます" << std::endl;

	pochi.naku();
}
