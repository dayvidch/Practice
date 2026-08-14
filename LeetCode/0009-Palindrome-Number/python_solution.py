class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """

        original = list(str(x))
        num = list(str(x))

        reverse = []
        for digit in original:
            x = num.pop()
            reverse.append(x)

        if original == reverse:
            return True
        else:
            return False

        