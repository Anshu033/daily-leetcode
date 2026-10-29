class Solution {
public:

bool isVowel(char &ch)
{
    return ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u';

}
    int maxVowels(string s, int k) 
    {
        int maxi=0;
        int n=s.size();
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(isVowel(s[i]))
            count++;
        }
        maxi=max(maxi,count);
        
     
        //window slide
        for(int j=k;j<n;j++)
        {
            if(isVowel(s[j]))
            count++;

            if(isVowel(s[j-k]))
            count--;

             //update
            maxi=max(maxi,count);
        }
        return maxi;
    }
};