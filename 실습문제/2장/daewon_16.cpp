#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>  // setw를 사용하기 위해 추가
using namespace std;

#define END_CHAR ';'
#define MAX_NUM 10000

string draw(int alphabet_num);
int main(int argc, char const *argv[])
{
    string text = "";

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 " << END_CHAR << " 입니다." << MAX_NUM << "개까지 가능합니다." << endl;
    getline(cin, text, END_CHAR);

    int alphabet_num[26] = {0};
    int alphabetCount = 0;
    for(int i = 0; i < text.length(); i++)
    {
        if(isalpha(text[i]))
        {
            alphabetCount++;
            alphabet_num[tolower(text[i]) - 'a']++;
        }
    }

    cout << "총 알파벳 수 " << alphabetCount << endl;
    cout << endl;

    // 알파벳 히스토그램을 그린다.
    for(int i = 0; i < 26; i++)
    {
        cout << (char)('a' + i) << " (" << alphabet_num[i] << ")" << setw(7 - to_string(alphabet_num[i]).length()) << right << ": " << draw(alphabet_num[i]) << endl;
    }

    return 0;
}

string draw(int alphabet_num)
{
    string text = "";
    for(int i = 0; i < alphabet_num; i++)
    {
        text.append("*");
    }
    return text;
}