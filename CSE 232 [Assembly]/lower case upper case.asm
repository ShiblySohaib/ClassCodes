.MODEL SMALL
.STACK 100H 
.DATA
MSG1 DB 'Enter the letter=$'
MSG2 DB 10,13,'Letter in lower case=$'
MSG3 DB 10,13,'Letter in upper case=$'

.CODE
MAIN PROC 
    MOV AX,@DATA
    MOV DS,AX
    
    LEA DX,MSG1
    MOV AH,9
    INT 21H
    
    
    MOV AH,1
    INT 21H
    MOV BL,AL
     
    CMP BL,90
    JG LOWER
    
    
    
    
    CMP BL,65
    JLE UPPER 
    
    
    
    
    
    
    UPPER:
    
    LEA DX,MSG2
    MOV AH,9
    INT 21H
    ADD BL,20H
    JMP EXIT 
    
    
    LOWER: 
    
    LEA DX,MSG3
    MOV AH,9
    INT 21H 
    
    SUB BL,20H 
    
    
    EXIT:
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN