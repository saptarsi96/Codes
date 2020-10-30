import math
# You may change this function parameters
def encrypt(msg):
    msg = msg.replace(" ","")
    lower = math.floor(math.sqrt(len(msg)))
    upper = math.ceil(math.sqrt(len(msg)))
    if lower * upper < len(msg):
        lower += 1

    key = "abcdefghijklmnopqrstuvwxyz"
    checker = min(lower,upper)
    key = key[0:checker]
    cipher = "" 
  
    # track key indices 
    k_indx = 0
  
    msg_len = float(len(msg)) 
    msg_lst = list(msg) 
    key_lst = sorted(list(key)) 
  
    col = upper
      
    # calculate maximum row of the matrix 
    row = lower
  
    # add the padding character '_' in empty 
    # the empty cell of the matix  
    fill_null = int((row * col) - msg_len) 
    msg_lst.extend('_' * fill_null) 
  
    # create Matrix and insert message and  
    # padding characters row-wise  
    matrix = [msg_lst[i: i + col]  
              for i in range(0, len(msg_lst), col)] 
  
    # read matrix column-wise using key 
    '''for _ in range(col): 
        curr_idx = key.index(key_lst[k_indx]) 
        cipher += ''.join([row[curr_idx]  
                          for row in matrix]) 
        cipher += " "
        k_indx += 1
  
    cipher = cipher.replace("_","")
    return cipher'''

    for i in range(col):
        for row in matrix:
            cipher += row[i]
        cipher += " "

    cipher = cipher.replace("_","")
    return cipher


def main():
    words = input()

    answer = encrypt(words)

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line

if __name__ == '__main__':
    main()