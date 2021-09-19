#include<vector>
#include<string.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    string word = "abcdefd";
    int nums = 0;
    for(int i = 0; i < word.size(); i++){
        // if(word.at(i) == 'd'){
        //     reverse(word.begin(),word.end()-i);
        //     break;
        // }
         string::size_type index = word.find('z');
        if(){
            cout << "存在" << endl;
        }
    }
   // reverse(word.begin(),word.end()-nums);
    cout << word;
    printf("\n");
    return 0;
}

/**
 * "abcdefd"
"d"
"xyxzxe"
"z"
"abcd"
"z"
*/