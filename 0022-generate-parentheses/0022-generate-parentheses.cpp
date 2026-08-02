class Solution {
public:
   vector<string> sri;
   void generate(string& curr,int open,int close,int n)
   {
    if(curr.size()==2*n)
    {
        sri.push_back(curr);
        return;
    }
    if(open<n)
    {
        curr.push_back('(');
        generate(curr,open+1,close,n);
        curr.pop_back();
    }
    if(close<open)
    {
        curr.push_back(')');
        generate(curr,open,close+1,n);
        curr.pop_back();
    }
   }
    vector<string> generateParenthesis(int n) {
        string curr;
        generate(curr,0,0,n);
        return sri;
   
    }
    //  this solution is also correct
    /*vector<string> sri;
    void generate(string curr,int open,int close,int n)
    {

    if(curr.size()==2*n)
    { 
       sri.push_back(curr);
       return;
    }
    if(open<n)
      generate(curr+"(",open+1,close,n);
    if(close<open)
       generate(curr+")",open, close+1,n);
    }
    vector<string> generateParenthesis(int n) {
        generate("",0,0,n);
        return sri;*/
};