l=[1,2,3,7,4,5,2]
st=[]
for i in l:
    while st and st[-1]>i:
        st.pop()
    st.append(i)
print(st)

#q1019