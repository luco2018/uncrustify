Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <stdio.h>
1    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO_FUNC]        CMD_CHECK
3    [FPAREN_OPEN]       (
3    [WORD]              expr
3    [FPAREN_CLOSE]      )
3    [DO]                do
3    [BRACE_OPEN]        {
3    [BRACE_OPEN]        {
3    [WORD]              expr
3    [SEMICOLON]         ;
3    [BRACE_CLOSE]       }
3    [FUNC_CALL]         CMDAssert
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [BRACE_CLOSE]       }
3    [WHILE_OF_DO]       while
3    [SPAREN_OPEN]       (
3    [NUMBER]            0
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_DEFINE]         define
4    [MACRO_FUNC]        INTERNAL
4    [FPAREN_OPEN]       (
4    [WORD]              expr
4    [FPAREN_CLOSE]      )
4    [DO]                do
4    [BRACE_OPEN]        {
4    [WORD]              internalUse
4    [ASSIGN]            =
4    [NUMBER]            1
4    [SEMICOLON]         ;
4    [BRACE_OPEN]        {
4    [WORD]              expr
4    [SEMICOLON]         ;
4    [BRACE_CLOSE]       }
4    [WORD]              internalUse
4    [ASSIGN]            =
4    [NUMBER]            0
4    [SEMICOLON]         ;
4    [BRACE_CLOSE]       }
4    [WHILE_OF_DO]       while
4    [SPAREN_OPEN]       (
4    [NUMBER]            0
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
6    [TYPE]              int
6    [FUNC_DEF]          func
6    [FPAREN_OPEN]       (
6    [TYPE]              n
6    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL_USER]    CMD_CHECK
7    [FPAREN_OPEN]       (
7    [FUNC_CALL]         fflush
7    [FPAREN_OPEN]       (
7    [WORD]              stdout
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [FUNC_CALL_USER]    CMD_CHECK
8    [FPAREN_OPEN]       (
8    [FUNC_CALL]         fflush
8    [FPAREN_OPEN]       (
8    [WORD]              stdout
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [FUNC_CALL_USER]    CMD_CHECK
9    [FPAREN_OPEN]       (
9    [FUNC_CALL]         fflush
9    [FPAREN_OPEN]       (
9    [WORD]              stdout
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [FUNC_CALL_USER]    CMD_CHECK
10   [FPAREN_OPEN]       (
10   [FUNC_CALL]         fflush
10   [FPAREN_OPEN]       (
10   [WORD]              stdout
10   [FPAREN_CLOSE]      )
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [FUNC_CALL_USER]    CMD_CHECK
11   [FPAREN_OPEN]       (
11   [FUNC_CALL]         fflush
11   [FPAREN_OPEN]       (
11   [WORD]              stdout
11   [FPAREN_CLOSE]      )
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [FUNC_CALL_USER]    CMD_CHECK
12   [FPAREN_OPEN]       (
12   [FUNC_CALL]         fflush
12   [FPAREN_OPEN]       (
12   [WORD]              stdout
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [FUNC_CALL_USER]    CMD_CHECK
13   [FPAREN_OPEN]       (
13   [FUNC_CALL]         fflush
13   [FPAREN_OPEN]       (
13   [WORD]              stdout
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [FUNC_CALL_USER]    CMD_CHECK
14   [FPAREN_OPEN]       (
14   [FUNC_CALL_USER]    INTERNAL
14   [FPAREN_OPEN]       (
14   [FUNC_CALL]         fflush
14   [FPAREN_OPEN]       (
14   [WORD]              stdout
14   [FPAREN_CLOSE]      )
14   [FPAREN_CLOSE]      )
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [FUNC_CALL_USER]    CMD_CHECK
15   [FPAREN_OPEN]       (
15   [FUNC_CALL_USER]    INTERNAL
15   [FPAREN_OPEN]       (
15   [FUNC_CALL]         fflush
15   [FPAREN_OPEN]       (
15   [WORD]              stdout
15   [FPAREN_CLOSE]      )
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           