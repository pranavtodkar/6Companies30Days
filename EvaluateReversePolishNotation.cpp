class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sta;
        
        for(string s: tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int b = sta.top();
                sta.pop();
                int a = sta.top();
                sta.pop();

                if(s == "+") sta.push(a + b);
                if(s == "-") sta.push(a - b);
                if(s == "*") sta.push(a * b);
                if(s == "/") sta.push(a / b);

                continue;
            }

            sta.push(stoi(s));
        }

        return sta.top();
    }
};