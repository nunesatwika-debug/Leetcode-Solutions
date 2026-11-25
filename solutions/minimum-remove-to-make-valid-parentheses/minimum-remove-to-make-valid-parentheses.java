class Solution {
    public String minRemoveToMakeValid(String s) {
        Stack<Integer> st = new Stack<>();
        StringBuilder sb = new StringBuilder(s);
        for(int i = 0; i < sb.length(); i++) {
            if(sb.charAt(i) == '(') {
                st.push(i);
            }
            else if(sb.charAt(i) == ')') {
                if(st.isEmpty()) {
                    sb.setCharAt(i, '*');
                }
                else {
                    st.pop();
                }
            }
        }
        while(!st.isEmpty()) {
            sb.setCharAt(st.pop(), '*');
        }
        StringBuilder ans = new StringBuilder();
        for(int i = 0; i < sb.length(); i++) {
            if(sb.charAt(i) != '*') {
                ans.append(sb.charAt(i));
            }
        }
        return ans.toString();
    }
}