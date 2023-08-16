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

MAIN PROC NEAR 
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
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 
    
    MOV AH,1
    INT 21H
    MOV bl,AL   
    
    INT 21H
    MOV cl,AL  
    
    INT 21H
    MOV dl,AL   

    
    cmp cl,bl  
    jl  l1 
    jmp l2
    
    l1:
    xchg bl,cl    
    
    ;bl smaller than cl

    l2:    
    cmp cl,dl
    jl print
    
    xchg dl,cl
    ;dl is larger than cl
    
    
    cmp bl,cl
    jl print  
    
    
    xchg bl,cl
        
    
    print:
    mov smallest,bl
    mov middle,cl
    mov largest,dl  
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 
    
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
    
    LEA DX,totalsum
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,smallest
    add dl,middle
    sub dl,48
    int 21h
    
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
    
