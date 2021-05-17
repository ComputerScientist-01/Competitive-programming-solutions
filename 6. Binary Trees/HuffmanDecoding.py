def decodeHuff(root, s):
    temp=root
    string=str()
    for i in range(len(s)):
        if(s[0]=="0"):
            temp=temp.left
        else:
            temp=temp.right
        if(temp.left is None and temp.right is None):
            string=string+temp.data
            temp=root
    print(string, end = "")