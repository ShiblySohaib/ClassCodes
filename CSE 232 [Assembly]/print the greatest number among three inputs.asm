.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    MOV AH,1
    INT 21H
    MOV BL,AL
    
    INT 21H
    MOV BH,AL

    
    cmp bl,bh
    jge l1 
    mov dl,bh 
    jmp l2
    
    l1:
    mov dl,bl   
    
    l2:   
    int 21h
    mov bl,al   
    
    cmp dl,bl
    jge print
    xchg dl,bl
    
    print:
    mov ah,2
    int 21h    
    
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN