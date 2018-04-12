Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [EXTERN]            extern
3    [STRING]            "C"
3    [TYPE]              void
3    [FUNC_PROTO]        function1
3    [FPAREN_OPEN]       (
3    [TYPE]              void
3    [PTR_TYPE]          *
3    [WORD]              self
3    [COMMA]             ,
3    [TYPE]              uint32_t
3    [PTR_TYPE]          *
3    [WORD]              arg2
3    [COMMA]             ,
3    [TYPE]              uint32_t
3    [PTR_TYPE]          *
3    [WORD]              arg3
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [FUNC_PROTO]        MACRO1
5    [FPAREN_OPEN]       (
5    [TYPE]              void
5    [COMMA]             ,
5    [TYPE]              function2
5    [COMMA]             ,
5    [TYPE]              type1
5    [WORD]              arg1
5    [COMMA]             ,
5    [TYPE]              type2
5    [WORD]              arg2
5    [COMMA]             ,
5    [QUALIFIER]         const
5    [TYPE]              type1
5    [PTR_TYPE]          *
5    [WORD]              arg3
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [FUNC_DEF]          MACRO2
7    [FPAREN_OPEN]       (
7    [TYPE]              status_t
7    [COMMA]             ,
7    [TYPE]              function3
7    [COMMA]             ,
7    [NEWLINE]           
8    [TYPE]              void
8    [PTR_TYPE]          *
8    [WORD]              arg1
8    [COMMA]             ,
8    [NEWLINE]           
9    [QUALIFIER]         const
9    [TYPE]              sp
9    [ANGLE_OPEN]        <
9    [TYPE]              IFoo
9    [ANGLE_CLOSE]       >
9    [BYREF]             &
9    [WORD]              arg2
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [FUNC_DEF]          MACRO2
12   [FPAREN_OPEN]       (
12   [TYPE]              type4
12   [COMMA]             ,
12   [TYPE]              function4
12   [COMMA]             ,
12   [QUALIFIER]         const
12   [TYPE]              void
12   [PTR_TYPE]          *
12   [PTR_TYPE]          *
12   [WORD]              arg1
12   [COMMA]             ,
12   [TYPE]              type1
12   [WORD]              arg2
12   [COMMA]             ,
12   [QUALIFIER]         const
12   [TYPE]              type3
12   [PTR_TYPE]          *
12   [WORD]              arg3
12   [COMMA]             ,
12   [TYPE]              type4
12   [WORD]              arg4
12   [COMMA]             ,
12   [TYPE]              type4
12   [WORD]              arg5
12   [COMMA]             ,
12   [TYPE]              bool
12   [WORD]              arg6
12   [FPAREN_CLOSE]      )
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           