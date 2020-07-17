#include <iostream>
#include "CodecUInt8_T.h"

using namespace std;



int main()
{
	int k = 3;
	char a[] = { -1,1,0,0,1,-1,-1,1 };
	char chs[] = { -1, 0, 1 };
	double freq[] = { 0.3, 0.3, 0.4 };

	CharCodex codec(chs, freq, 3);
	char* buffer = new char[10]{ 0 };
	char* buffer2 = new char[15]{ 0 };
	int len = codec.encode(a, sizeof(a), buffer, 10);
	int len2 = codec.decode(buffer, len, buffer2, 15);

	for (int i = 0; i < len2; ++i) {
		cout << (int)(buffer2[i]) << ' ';
	}
	cout << endl;

	int i1 = 3;
	int i2 = 4;
	int i3 = 5;
	priority_queue<int*, vector<int*>, pGreater<int>> que;
	que.push(&i1);
	que.push(&i2);
	que.push(&i3);
	int* const pk = que.top();
	cout << *pk;

}