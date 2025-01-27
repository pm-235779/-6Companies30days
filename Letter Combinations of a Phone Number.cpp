class Solution {
public:
    void rec(unordered_map<char,string> mp,vector<string>& res,string& r,int start,int n,string d){
        if(r.size()==n && r!=""){
            res.push_back(r);
          
            return ;
        }
        if(r.size()>n){ return ;}
        for(int i=start,j=0; i<d.size()&&j<mp[d[i]].size();i++,j++){
            r+=mp[d[i]][j];
            cout<<r<<endl;
            rec(mp,res,r,i+1,n,d);
            i-=1;
           r.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp ={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
   
        int n=digits.size();   
        vector<string> res;
        string r="";
          
        rec(mp,res,r,0,n,digits); 
       
        return res;                                                                          
    }
};
