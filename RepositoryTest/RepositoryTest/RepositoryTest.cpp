// RepositoryTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char testString[128];

	memset(testString, NULL, sizeof(testString));
	
	int error = 0;
	error = strncpy_s(testString, "Hey hey this is test proje...rndpdpdpr", sizeof(testString));

	_ASSERT_EXPR(error == NULL, "FAILURE");

	cout << testString << endl;

    return 0;
}

