class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mapping = {}
        chars = 'abcdefghijklmnopqrstuvwxyz'
        j = 0
        for c in key:
            if c != ' ' and c not in mapping:
                mapping[c] = chars[j]
                j += 1
        return ''.join(mapping[c] if c != ' ' else ' ' for c in message)