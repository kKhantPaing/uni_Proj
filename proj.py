import hashlib as h
def main():
    text=input("Enter a message: ")
    typ=input("Enter type to do(pw,en,de): ")
    if typ == "en":
        print(enc(text))
        main()
    elif typ=="de":
        print(dec(text))
        main()
    elif typ=="pw":
        en=pw(text.encode("utf-8"))
        
    else:
        input("Invalid Type!")
        main()

def enc(s):
    #key=m.random(5,10)
    en=[]
    s=list(s)
    for i in s:
      en.append(ord(i)*5)
    cliper=""
    for i in en:
        cliper+=chr(i)
    return cliper

def pw(s):
    s=h.md5(s).hexdigest()
    print(s)
    main()

def dec(s):
    de=[]
    s=list(s)
    for i in s:
      de.append(ord(i)/5)
    plain=""
    for i in de:
        plain+=chr(int(i))
    return plain


__name__==main()
