def validate(s):
    #your code here
    cnt =[0,0,0,0]
    numeric = {'0','1','2','3','4','5','6','7','8','9'}
    alphaLower = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
    alphaUpper = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}
    splChars = {'@','#','-','*','$'}
    if (len(s)>=10):
        for i in s:
            if (i in numeric):
                cnt[0] += 1
            elif (i in alphaLower):
                cnt[1] += 1
            elif (i in alphaUpper):
                cnt[2] += 1
            elif (i in splChars):
                cnt[3] += 1


    if 0 in cnt:
        return 0
    else:
        return 1
