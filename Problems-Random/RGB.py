for _ in range(int(input())):
    k = int(input())
    rgb = ["RGB","GRB","GBR","BGR","BRG","RBG"]
    if k%6 == 0:
        print(rgb[0])
    else:
        print(rgb[k%6])