/*
��蕶
joisino���o�����́AA op B �Ƃ������̒l���v�Z�������Ǝv���Ă��܂��B �����ŁAA,B �͐����ŁAop �́A+ �܂��� - �̋L���ł��B ���Ȃ��̎d���́Ajoisino���o�����̑���ɂ�������߂�v���O��������邱�Ƃł��B
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