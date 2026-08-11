class Solution {
public:
    bool isVowel(char c) 
    {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }

    string sortVowels(string s) 
    {
        vector<int> freq(128, 0);

        for (char c : s) 
        {
            if (isVowel(c)) 
            {
                freq[c]++;
            }
        }

        int j = 0;

        for (char &c : s) 
        {
            if (isVowel(c)) 
            {
                while (freq[j] == 0)
                    j++;

                c = char(j);
                freq[j]--;
            }
        }
        return s;
    }
};