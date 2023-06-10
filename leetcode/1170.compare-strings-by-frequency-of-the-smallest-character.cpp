class Solution {
public:

    int smallersNumOf(string& str) {
        int ar[26] = {0};
        for (int i = 0; i < str.size(); i++) {
            ar[str[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) 
            if (ar[i] != 0)
                return ar[i];
        return 0;
    }

    void smallersNum(vector<int>& ari, vector<string>& ars) {
        for (int i = 0; i < ars.size(); i++)
            ari[i] = smallersNumOf(ars[i]);
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> arq(queries.size());
        vector<int> arw(words.size());
        smallersNum(arq, queries);
        smallersNum(arw, words);
        sort(arw.begin(), arw.end());
        for (int i = 0; i < arq.size(); i++) {
            int j = 0;
            for (j = 0; j < arw.size(); j++) {
                if (arw[j] > arq[i]) break;
            }
            arq[i] = arw.size() - j;
        }
        return arq;
    }
};
