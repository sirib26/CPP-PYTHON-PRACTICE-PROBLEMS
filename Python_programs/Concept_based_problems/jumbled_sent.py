def jumbled_word(input1,input2):
    words=input1.split()
    res=[]
    
    for word in words:
        #forward-backward
        if input2==1:
            first_part=word[0::2]
            second_part=word[-2::-2]
            res.append(first_part+second_part)
        
        #forward-forward
        elif input2==2:
            first_part=word[0::2]
            second_part=word[1::2]
            res.append(first_part+second_part)
        
        else:
            raise ValueError("Invalid method type")
    return " ".join(res)
            


sentence="PROJECT BASED LEARNING"
print(jumbled_word(sentence, 1))
print(jumbled_word(sentence, 2))