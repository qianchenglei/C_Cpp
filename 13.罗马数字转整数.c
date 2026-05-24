/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
int cast_to_num(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}
    int romanToInt(char *s)
    {
        int sam_num  = 0,n = strlen(s);

        for (int i = 0; i < n; i++)
        {
           int num = cast_to_num(s[i]);
           int next_num =0;
           if (i+1<n)
           {
                next_num = cast_to_num(s[i+1]);
           }
           if(num<next_num){
                sam_num -=num; 
           }else{
                sam_num +=num;
           }
        }
        return sam_num;
    }
    // @lc code=end
