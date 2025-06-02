int lengthOfLastWord(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        st.push(s[i]);
    }

    int count = 0;

    while (!st.empty()) {
        char topChar = st.top();
        st.pop();

        if (topChar != ' ') {
            count++;
        }

        if (count > 0 && topChar == ' ') {
            break;
        }
    }

    return count;
}
