.MODEL SMALL
.STACK 1000
.DATA
    myname DB "My name: Shibly$"
    father DB "Father's name: Piarul Islam$"
    mother DB "Mother's name: Shiuly Islam$" 
    
    smallest db ?
    middle  db ? 
    largest db ?
    
    middlenum DB "middle number: $"
    totalsum  DB "sum of lowest two: $"
    
    
.CODE

MAIN PROC 
    MOV AX, @DATA
    MOV DS, AX
               
               
    ;problem a
               
    LEA DX,myname
    MOV AH,9
    INT 21H  

    mov ah,2   
    mov dl,10 
    int 21h    
    mov dl,13  
    int 21h    
    
    LEA DX,father
    MOV AH,9
    INT 21H  

    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    LEA DX,mother
    MOV AH,9
    INT 21H  
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    
    
    ;problem b
    mov ah,2   ;
    mov dl,10  ;
    int 21h    ;this block of code prints newline with 10, and does carriage return(resets cursor to start of line) with 13. used multiple times below.
    mov dl,13  ;
    int 21h    ;
    
    MOV AH,1
    INT 21H
    MOV bl,AL   
    
    INT 21H
    MOV cl,AL  
    
    INT 21H
    MOV dl,AL   

    ;taken 3 inputs in bl, cl, dl


    ;now target is to make bl<cl<dl

    cmp cl,bl    ;check if cl<bl
    jl  l1       ;if yes, then swap(bl,cl) in l1 to make bl<cl
    jmp l2       ;else skip swapping
    
    l1:
    xchg bl,cl    
    
    ;now bl is smaller than cl

    l2:    
    cmp cl,dl    ;check if cl<dl
    jl print     ;if yes, that means it is sorted (bl<cl<dl). so we can print the results.
    
    xchg dl,cl   ;if no, then we swap (dl,cl) to make cl<dl
    ;now cl is smaller than dl
    

    ;now we know cl<dl but don't know if bl<cl
    cmp bl,cl    ;check if bl<cl
    jl print     ;if yes, then we know bl<cl and we also know that cl<dl, so now bl<cl<dl. we can print the results.
    
    
    xchg bl,cl   ;if no, then swap(bl,cl) to make bl<cl
    ;now bl is smaller than cl and dl
        
    
    print:
    ;storing the sorted numbers in variables
    mov smallest,bl
    mov middle,cl
    mov largest,dl  
    
    mov ah,2
    mov dl,10
    int 21h        
    mov dl,13
    int 21h 

    ;printing middle number
    LEA DX,middlenum
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,middle
    int 21h   

    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 

    ;printing sum of two smallest numbers
    LEA DX,totalsum
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,smallest    ;store smallest number in dl (dl = smallest)
    add dl,middle      ;add middle number to dl (dl = dl+middle)
    sub dl,48          ;converting ascii value in dl to number. for example, (ascii value of 1 is 49. so 49-48 = 1)
    int 21h
    
    ;exit
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
    
