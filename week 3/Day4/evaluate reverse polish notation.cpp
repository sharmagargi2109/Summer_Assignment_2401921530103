class Solution {
public:
  int idx;
    int solve(vector<string>& tokens) 
    {
        
        string token = tokens[idx--];
   if (token != "+" && token != "-" &&
            token != "*" && token != "/") {
            return stoi(token);
        }
        int right = solve(tokens);
        int left = solve(tokens);

        if (token == "+") return left + right;
        if (token == "-") return left - right;
        if (token == "*") return left * right;
        return left / right;
    }
       int evalRPN(vector<string>& tokens) {
        idx = tokens.size() - 1;
        return solve(tokens);
    }
};