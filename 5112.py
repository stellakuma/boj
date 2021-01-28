#5112
defdic = {}

#checkFunctionCall
def cFC( str ):
    if str.split("(")[1] != None :
        

while true:
    i = input()
    if i != "exit" :
        
        isp = i.split(" ")
        if isp[0] == "def" :
            temp = isp[1].split("(")
            ident = temp[0]
            param = temp[1].split(")")[0]
            if isp[2] == "=" :
                if isp[3] != None :
                    if defdic[ident] != None :
                        defdic[ident][param] = isp[3]
                    else :
                        defdic[ident] = {param:isp[3]}
        
    else :
        break;