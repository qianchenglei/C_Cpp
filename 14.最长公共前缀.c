/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
char* longestCommonPrefix(char** strs, int strsSize) {
    for (int i = 0; ; i++)
    {
       if(strsSize == 0||strs[0][0]=='\0'||strs[0][i]=='\0'){
        return strs[0];
       }
       for (int j = 1; j < strsSize; j++)
       {
        if(strs[j][i]=='\0'||strs[j][i]!=strs[0][i]){
            strs[0][i]='\0';
            return strs[0];
        }
       }
       
    }
    
}
// @lc code=end

