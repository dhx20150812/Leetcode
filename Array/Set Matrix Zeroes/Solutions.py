class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        x_len = len(matrix)
        y_len = len(matrix[0])
        x_zeros = set([])
        y_zeros = set([])
        for x,item in enumerate(matrix):
            y = [index for index,num in enumerate(item) if num==0]
            if len(y): #当前行存在为0的元素
                # 记录当前位置的行数和列数
                x_zeros.update(set([x]))
                y_zeros.update(set(y))
        for i in range(x_len):
            if i in x_zeros:
                matrix[i] = [0]*y_len
            else:
                for j in y_zeros:
                    matrix[i][j] = 0
