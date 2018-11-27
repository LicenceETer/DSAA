#include<iostream>
#include<vector>
using namespace std;
int main() {
    int a;
    vector<int> b;
    b.push_back(a);
    return 0;
}
void cal_next(char *str, int *next, int len)
{
    next[0] = -1;//next[0]初始化为-1，-1表示不存在相同的最大前缀和最大后缀
    int k = -1;//k初始化为-1
    for (int q = 1; q <= len-1; q++)//计算next[0]，next[1],…next[q]…的值
    {
        while (k > -1 && str[k + 1] != str[q])//如果下一个不同，那么k就变成next[k]，注意next[k]是小于k的，无论k取任何值。
        {
            k = next[k];//往前回溯
        }
        if (str[k + 1] == str[q])//如果相同，k++
        {
            k = k + 1;
        }
        next[q] = k;//这个是把算的k的值（就是相同的最大前缀和最大后缀长）赋给next[q]
    }
}

//---------------------
//作者：路漫远吾求索
//来源：CSDN
//原文：https://blog.csdn.net/starstar1992/article/details/54913261
//版权声明：本文为博主原创文章，转载请附上博文链接！
