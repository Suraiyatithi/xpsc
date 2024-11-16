class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=txt.size();
	    int k=pat.size();
	    map<char,int>cnt;
	    map<char,int>mp;
	    for(int i=0;i<k;i++){
	        cnt[pat[i]]++;
	    }
	    int l=0,r=0;
	    bool flag=false;
	    int count=0;
	           while (r < n) {
            mp[txt[r]]++;


            if (r - l + 1 == k) {
                if (mp == cnt) { 
                    count++;
                }

                mp[txt[l]]--;
                if (mp[txt[l]] == 0) {
                    mp.erase(txt[l]); 
                }
                l++;
            }
            r++;
        }

	    return count;
	}

};