# RegularExpression
Implement regular expression matching with support for '.' and '*'.<br>
'.' Matches any single character.<br>
'*' Matches zero or more of the preceding element.<br>

The matching should cover the entire input string (not partial).<br>

The function prototype should be:<br>
bool isMatch(const char *s, const char *p)<br>

Some examples:<br>
isMatch("aa","a") → false<br>
isMatch("aa","aa") → true<br>
isMatch("aaa","aa") → false<br>
isMatch("aa", "a*") → true<br>
isMatch("aa", ".*") → true<br>
isMatch("ab", ".*") → true<br>
isMatch("aab", "c*a*b") → true<br>
