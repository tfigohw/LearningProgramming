// https://leetcode.com/problems/jewels-and-stones/

public class Solution
{
    public int NumJewelsInStones(string J, string S)
    {
        int JLength = J.Length;
        int SLength = S.Length;
        int JCount = 0;
        for (int j = 0; j < JLength; j++) 
        {
            for (int s = 0; s < SLength; s++)
            {
                if (S[s] == J[j])
                {
                    JCount++;
                }
            }
        }
        return JCount;
    }
}
