/* ex2.cpp
 *
 *  Created on: 2017/12/28
 *      Author: PCーUSER
 */

#include <iostream>
#include <cstdlib>   //rand()を使うために必要
#include <ctime>

class Omikuji {
	int lacky;
public :
	Omikuji();
	void hiku();
};

Omikuji::Omikuji(){
	srand((unsigned)time(NULL));
	std::cout<<"自分のラッキーナンバー（1～5）を入力してください。"<<std::endl;
	std::cin>>lacky;  //自分のラッキーナンバーを代入
}

void Omikuji::hiku(){
	int x;
    x = rand() % 5 + 1;   //1～5の乱数を発生させ、ｘに代入、これが引いたおみくじの番号
    std::cout << "あなたの運勢は";
    if(x == lacky){                                            //xとunが等しければ大吉
        std::cout << "大吉ということです。" << std::endl;
    }
    else{                                                    //xとunが等しくなければ「普通」
        std::cout<<"並みということです。"<<std::endl;
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

//コンストラクタの定義
Rocket::Rocket(int x):nenryo(x),sokudo(0){}

//加速を表す関数の定義
void Rocket::kasoku(){
	if(nenryo >= 2){
		sokudo += 2;
		nenryo -= 2;
		std::cout << "現在の燃料は" << nenryo << "です" << std::endl;
		std::cout << "現在の速度は" << sokudo << "です" << std::endl;
	} else {
		std::cout << "燃料切れです。加速できません。漂流です、" << std::endl;
	}
}

int main(){
	std::cout << "ロケットをメモリ上につくります。燃料（整数）を入力してください。" << std::endl;
	int n;       //ユーザの入力した値を格納する変数をひとつ用意しました。その名はnです。
	std::cin >> n;    //ユーザの入力した数字をnに代入しました。

	//nをコンストラクタに渡してロケットをつくります。
	Rocket ohtori(n);
	std::cout<< "加速します。" <<std::endl;
	ohtori.kasoku();  //ohtoriに対してkasokuを使っています
	std::cout << "また、加速します。" << std::endl;
	ohtori.kasoku();  //ohtoriに対してkasokuを使っています
	std::cout << "またまた、加速してみます。" << std::endl;
	ohtori.kasoku();  //ohtoriに対してkasokuを使っています
	std::cout<< "鳳号の冒険は終わりました。" << std::endl;
}



/*
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
*/

