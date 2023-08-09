.MODEL SMALL
.STACK 100H
.DATA
MS1 DB 'ENTER:$'
MS2 DB 10,13,'UPPER:$'
MS3 DB 10,13,'LOWER:$'
.CODE
MAIN PROC
    MOV AX,@DATA
    MOV DS,AX
    
    LEA DX,MS1
    MOV AH,9
    INT 21H
     
    MOV AH,1
    INT 21H
    MOV BL,AL
    
    CMP BL,'A'
    JNGE TERMINATE
    CMP BL,'Z'
    JNLE TERMINATE
     
     
    LEA DX,MS2
    MOV AH,9
    INT 21H 
    
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    JMP EXIT
    
    
    
    TERMINATE:
    
    LEA DX,MS3
    MOV AH,9
    INT 21H
    
    
    MOV AH,2
    MOV DL,BL
    INT 21H
   
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
    
    