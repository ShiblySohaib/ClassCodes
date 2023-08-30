.MODEL SMALL
.STACK 100h
.CODE
MAIN PROC 
    mov bl,5
    
    row:
    mov cx,5
    mov ah,2
    mov dl,'*'
    
    column: 
    int 21h
    loop column
       
    mov dl,10
    int 21h 
    mov dl,13
    int 21h
    
    dec bl
    cmp bl,0     
    jg row    
    
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
