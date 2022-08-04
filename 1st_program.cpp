// Problem :- Check given string are anagrams or not 
// Ankit Jodhani 
// 19se02it019

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool check_anagrams(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }

    unordered_map<int, int> freq;

    for (char x : str1)
    {
        freq[x]++;
    }

    for (char y : str2)
    {
        if (freq.find(y) == freq.end())
        {
            return false;
        }

        freq[y]--;

        if (!freq[y])
        {
            freq.erase(y);
        }
    }

    return !freq.size();
}

int main()
{
    string str1 = "ankit";
    string str2 = "tkina";

    if (check_anagrams(str1, str2))
    {
        cout << "Yes both Strings are Anagram" << endl;
    }
    else
    {
        cout << "No they are not Anagram" << endl;
    }

    return 0;
}