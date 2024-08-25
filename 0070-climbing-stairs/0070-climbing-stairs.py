class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """

        i=0
        j=1
        cnt=0
        while(cnt!=n):
            k=i+j
            i=j
            j=k
            cnt+=1
        return k
        