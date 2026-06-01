class Solution {
  public:
    int findSubString(string& str) {
        // code here
         string ans;

 int hash[26]={0};
 for(auto it:str){
     if(hash[it-'a']==1){
         continue;
     }
     hash[it-'a']=1;
     ans+=it;
 }
 
 int n=str.size(),m=ans.size(),l=0,r=0,minl=1e9,cnt=0;
 int  has[256]={0};
 for(int i=0;i<m;i++){
     has[ans[i]]++;
 }
 while(r<n){
     if(has[str[r]]>0){
         cnt+=1;;
     }
         has[str[r]]--;
    
     while(cnt==m){
         if(r-l+1<minl){
             minl=r-l+1;
         }
         has[str[l]]++;
         if(has[str[l]]>0){
             cnt-=1;
         }
         l++;
     }
     r++;
 }
 
 return minl;
 
    }
};