class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char, int> mp;

        for(char ch : text)
        {
            mp[ch]++;
        }
     // Ab har value batati hai ki us character ke basis par maximum kitne "balloon" ban sakte hain.
        return min({
            mp['b'],
            mp['a'],
            mp['l'] / 2,
            mp['o'] / 2,
            mp['n']
        });

        //Jo character sabse pehle khatam hoga, wahi decide karega ki maximum kitne "balloon" ban sakte hain
        // Isliye hum minimum lete hain.
    }
};