class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C"){
                ans -= st.top();
                st.pop();
            }
            else if(operations[i]=="D"){
                ans += 2*(st.top());
                st.push(2*st.top());
            }
            else if(operations[i]=="+"){
                int top=st.top();
                st.pop();
                int temp=st.top();
                st.push(top);
                st.push(top+temp);
                ans += top+temp;
            }
            else{
                st.push(stoi(operations[i]));
                ans += stoi(operations[i]);
            }
        }
        return ans;
    }
};
