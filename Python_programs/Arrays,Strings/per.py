class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1)!=len(s2):
            return False
        s1_cnt={}
        s2_cnt={}

        for i in range(len(s1)):
            s1_cnt[s1[i]] = 1 + s1_cnt.get(s1[i],0)
            s2_cnt[s2[i]] = 1 + s2_cnt.get(s2[i],0)
        print(s1_cnt)
        print(s2_cnt)
checkInclusion("ab","eidbaooo")