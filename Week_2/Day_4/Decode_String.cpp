class Solution {
public:
    string decodeString(string s) {
   stack<int> countStack;
        stack<string> stringStack;
        string currentString = "";
        int currentNum = 0;

        for (char ch : s) {

            if (isdigit(ch)) {
                currentNum = currentNum * 10 + (ch - '0');
            }
            else if (ch == '[') {
                countStack.push(currentNum);
                stringStack.push(currentString);

                currentNum = 0;
                currentString = "";
            }

            else if (ch == ']') {

                int repeat = countStack.top();
                countStack.pop();
                string prevString = stringStack.top();
                stringStack.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += currentString;
                }

                currentString = prevString + temp;
            }

            else {
                currentString += ch;
            }
        }

        return currentString;
    }
};
