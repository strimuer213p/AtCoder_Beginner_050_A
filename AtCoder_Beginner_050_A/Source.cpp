/*
問題文
joisinoお姉ちゃんは、A op B という式の値を計算したいと思っています。 ここで、A,B は整数で、op は、+ または - の記号です。 あなたの仕事は、joisinoお姉ちゃんの代わりにこれを求めるプログラムを作ることです。
*/

#include<iostream>

int main() {
	int a, b;
	char c;

	std::cin >> a;
	std::cin >> c;
	std::cin >> b;

	if ('+'== c) {
		std::cout << a + b << std::endl;
	}
	if ('-' == c) {
		std::cout << a - b << std::endl;
	}

	return 0;
	
}