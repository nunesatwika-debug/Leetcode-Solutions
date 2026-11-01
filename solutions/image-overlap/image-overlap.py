class Solution(object):
    def largestOverlap(self, img1, img2):
        """
        :type img1: List[List[int]]
        :type img2: List[List[int]]
        :rtype: int
        """
        n = len(img1)
        a = [(i, j) for i in range(n) for j in range(n) if img1[i][j]]
        b = [(i, j) for i in range(n) for j in range(n) if img2[i][j]]
        count = {}
        for x1, y1 in a:
            for x2, y2 in b:
                d = (x2 - x1, y2 - y1)
                count[d] = count.get(d, 0) + 1
        return max(count.values()) if count else 0