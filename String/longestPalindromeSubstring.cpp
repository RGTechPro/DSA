class Solution {
public:
    string longestPalindrome(string s) {
int len=s.size();
int maxlen=1;
int start=0;


for(int i=1;i<len;i++){
//for even

int l=i-1;
int r=i;

while(l>=0&&r<=len-1&&s[l]==s[r]){
    if(r-l+1>maxlen){
        start=l;
        maxlen=r-l+1;
    }
    l--;
    r++;
}

//for odd
l=i-1;
r=i+1;
while(l>=0&&r<=len-1&&s[l]==s[r]){
    if(r-l+1>maxlen){
        start=l;
        maxlen=r-l+1;
    }
    l--;
    r++;
}






}
return s.substr(start, maxlen);
    }
};

