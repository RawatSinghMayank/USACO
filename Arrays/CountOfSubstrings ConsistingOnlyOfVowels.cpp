https://www.naukri.com/code360/problems/count-of-substrings-consisting-only-of-vowels_1377941?resumeRedirection=true&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
int countSubstrings(string &s)
{
	int count=0;
        for (int i = 0; i < s.length(); i++) {
          int idx = i;
    while(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i'){
     count++,i++;
    }
    i=idx;
  }
  return count;
}



#include <bits/stdc++.h> 
int countSubstrings(string &s)
{
	int ans=0;
  int len=0;
        for (int i = 0; i < s.length(); i++) {
    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
      len++;
    } else {
      ans += (len) * (len + 1) / 2;
      len=0;
    }
        }

  ans+=(len)*(len+1)/2;
  return ans;
}

