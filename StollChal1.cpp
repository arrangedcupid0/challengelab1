#include <iostream>
#include <fstream>
#include <queue>
#include <math.h>
#include <sstream>
#include <charconv>

using namespace std;

int main()
{
	ifstream bin;
	bin.open("bin_out.txt");
	queue<int> chr;
	queue<char> words;
	char tmp;
	string word = "";


	while(bin.get(tmp))
	{
		if(tmp == ' ')
		{
			cout << "endl" << endl;
		} else if(chr.size() < 8) {
			int intTmp = tmp - 48;

			chr.push(intTmp);			
//			cout << intTmp << "    " << tmp << endl;
		} else if(chr.size() == 8){
			//int sum = 0;
			//double count = 8;
			string character = "";
			while(!chr.empty())
			{
				if(!chr.empty())
				{
					character += chr.front();
//				cout << endl << "count is " << count << endl;
//				if(chr.front() == 1)
//				{
				
//					cout << "sum is " << sum << endl;
//					int bruh;
//					bruh = pow(2.0, count);
//					cout << "bruh is " << bruh << endl;
//					sum += bruh;
//					cout << "sum is " << sum << endl;
				} else {
				}
				chr.pop();
				//count--;
			}
			stringstream conv(character);
			int cnv = 0;
			conv >> cnv;
			cout << cnv << endl;
			int end = 0;
			int base = 1;
			while(cnv)
			{
				int last = cnv % 10;
				cnv = cnv / 10;
				end += last * base;
				base = base * 2;
			}
	//			cout<< "i'm here" << endl;
				char yeah = end;
				cout << yeah << "dude" << endl;;
				words.push(yeah);
				//char each = char(sum);
				//cout << each;
		}
		

	}
	while(!words.empty())
	{
		cout << words.front();
		words.pop();
	}
	

//	for(int i = 0; i < bull.size(); i++)
//	{
//		cout << bull[i];
//	}


//	while(bin >> line)
//	{
//		for(int i = 0; i < 8; i++) //yeah i want a hardcoded value, binary chars are in sets of 8
//		{
//		
//		}

}
