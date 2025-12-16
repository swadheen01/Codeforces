s = input()
song = ""
n = len(s)
#song = s.replace("WUB"," ")
i = 0
while i<n :

    if s[i] == "W" and s[i:i+3] == "WUB":
        if song and song[-1] != ' ':
                song += ' '
        i += 3
    else:
        song += s[i]
        i += 1
print(song)