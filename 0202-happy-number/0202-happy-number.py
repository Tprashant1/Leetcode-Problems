class Solution(object):
    def Square(self, n):
        s = 0
        while n != 0:
            d = n % 10
            s = s + d*d
            n = n / 10
        return s

    def isHappy(self, n):
        l = set()
        while n != 1 and n not in l:
            l.add(n)
            n = self.Square(n)
        return n == 1