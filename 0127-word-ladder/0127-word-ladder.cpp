class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string> st(wordList.begin(), wordList.end());

        if (st.find(endWord) == st.end())
            return 0;

        queue<string> q;
        q.push(beginWord);

        int level = 1;

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                string word = q.front();
                q.pop();

                if (word == endWord)
                    return level;
                    
                // naye word kaise bna rhe hai
                for (int i = 0; i < word.size(); i++) {
                    char original = word[i];

                    for (char ch = 'a'; ch <= 'z'; ch++) {
                        word[i] = ch;

                        if (st.find(word) != st.end()) {
                            q.push(word);
                            st.erase(word); // visited
                        }
                    }

                    word[i] = original;
                }
            }

            level++;
        }

        return 0;
    }
};