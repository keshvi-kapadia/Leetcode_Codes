class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        flag=0
        if(x<-2147483647):
            return 0
        if(x<0):
            flag=1
            x=-(x)


        num=0
        while x!=0:
            num*=10
            num+=x%10
            x/=10
            if(num>2147483648):
                return 0

        if(flag==1):
            return -num

        return num
        
        