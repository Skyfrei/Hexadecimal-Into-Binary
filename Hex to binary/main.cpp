#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	char hexa [16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout<<"Stringu ne hexdecimal"<<endl;
	string a;
	cin>>a;
    int n = a.length();
	char inputS [n+1];
	strcpy(inputS,a.c_str());
	string binary[n+1];
	for(int i =0;i<n;i++)
    {
		for(int j=0;j<sizeof(hexa);j++)
		{
				if (inputS[i]==hexa[j])
				{
					switch(j) {
					case 0:
						binary[i]="0000";
						break;
					case 1:
						binary[i]="0001";
						break;
					case 2:
						binary[i]="0010";
						break;
					case 3:
						binary[i]="0011";
						break;
					case 4:
						binary[i]="0100";
						break;
					case 5:
						binary[i]="0101";
						break;
					case 6:
						binary[i]="0110";
						break;
					case 7:
						binary[i]="0111";
						break;
					case 8:
						binary[i]="1000";
						break;
					case 9 :
						binary[i]="1001";
						break;
					case 10:
						binary[i]="1010";
						break;
					case 11:
						binary[i]="1011";
						break;
					case 12:
						binary[i]="1100";
						break;
					case 13:
						binary[i]="1101";
						break;
					case 14:
						binary[i]="1110";
						break;
                    case 15:
                        binary[i]="1111";
                        break;
                    default:
                        break;
					}
				}
			}
		}

		for(int i = 0;i<n;i++)
        {
            cout<<binary[i];
        }
return 0 ;
}
