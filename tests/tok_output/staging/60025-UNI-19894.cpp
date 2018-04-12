Line [Token]             Text
1    [COMMENT_CPP]       //It is applying double indentation
1    [NEWLINE]           
2    [WORD]              m_ApplicationView
2    [ASSIGN]            =
2    [TYPE]              AppC
2    [DC_MEMBER]         ::
2    [TYPE]              ApplicationView
2    [DC_MEMBER]         ::
2    [FUNC_CALL]         GetForCurrentView
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [WORD]              m_ViewConsolidateEvtToken
3    [ASSIGN]            =
3    [WORD]              m_ApplicationView
3    [MEMBER]            ->
3    [WORD]              Consolidated
3    [ASSIGN]            +=
3    [NEWLINE]           
4    [WORD]              ref
4    [NEW]               new
4    [TYPE]              AppC
4    [DC_MEMBER]         ::
4    [FUNC_CALL]         TypedEventHandler
4    [ANGLE_OPEN]        <
4    [TYPE]              AppC
4    [DC_MEMBER]         ::
4    [TYPE]              ApplicationView
4    [PTR_TYPE]          ^
4    [COMMA]             ,
4    [TYPE]              AppC
4    [DC_MEMBER]         ::
4    [TYPE]              ApplicationViewConsolidatedEventArgs
4    [PTR_TYPE]          ^
4    [ANGLE_CLOSE]       >
4    [FPAREN_OPEN]       (
4    [THIS]              this
4    [COMMA]             ,
4    [ADDR]              &
4    [TYPE]              FrameworkView
4    [DC_MEMBER]         ::
4    [WORD]              InternalOnViewConsolidated
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [WORD]              m_WindowActivatedEvtToken
6    [ASSIGN]            =
6    [WORD]              m_CoreWindow
6    [MEMBER]            ->
6    [WORD]              Activated
6    [ASSIGN]            +=
6    [NEWLINE]           
7    [WORD]              ref
7    [NEW]               new
7    [TYPE]              AppC
7    [DC_MEMBER]         ::
7    [FUNC_CALL]         TypedEventHandler
7    [ANGLE_OPEN]        <
7    [TYPE]              AppC
7    [DC_MEMBER]         ::
7    [TYPE]              CoreWindow
7    [PTR_TYPE]          ^
7    [COMMA]             ,
7    [TYPE]              AppC
7    [DC_MEMBER]         ::
7    [TYPE]              WindowActivatedEventArgs
7    [PTR_TYPE]          ^
7    [ANGLE_CLOSE]       >
7    [FPAREN_OPEN]       (
7    [THIS]              this
7    [COMMA]             ,
7    [ADDR]              &
7    [TYPE]              FrameworkView
7    [DC_MEMBER]         ::
7    [WORD]              InternalOnWindowActivated
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [WORD]              m_SizeChangedEvtToken
9    [ASSIGN]            =
9    [WORD]              m_CoreWindow
9    [MEMBER]            ->
9    [WORD]              SizeChanged
9    [ASSIGN]            +=
9    [NEWLINE]           
10   [WORD]              ref
10   [NEW]               new
10   [TYPE]              AppC
10   [DC_MEMBER]         ::
10   [FUNC_CALL]         TypedEventHandler
10   [ANGLE_OPEN]        <
10   [TYPE]              AppC
10   [DC_MEMBER]         ::
10   [TYPE]              CoreWindow
10   [PTR_TYPE]          ^
10   [COMMA]             ,
10   [TYPE]              AppC
10   [DC_MEMBER]         ::
10   [TYPE]              WindowSizeChangedEventArgs
10   [PTR_TYPE]          ^
10   [ANGLE_CLOSE]       >
10   [FPAREN_OPEN]       (
10   [THIS]              this
10   [COMMA]             ,
10   [ADDR]              &
10   [TYPE]              FrameworkView
10   [DC_MEMBER]         ::
10   [WORD]              InternalOnWindowSizeChanged
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [WORD]              m_VisibilityChangedEvtToken
12   [ASSIGN]            =
12   [WORD]              m_CoreWindow
12   [MEMBER]            ->
12   [WORD]              VisibilityChanged
12   [ASSIGN]            +=
12   [NEWLINE]           
13   [WORD]              ref
13   [NEW]               new
13   [TYPE]              AppC
13   [DC_MEMBER]         ::
13   [FUNC_CALL]         TypedEventHandler
13   [ANGLE_OPEN]        <
13   [TYPE]              AppC
13   [DC_MEMBER]         ::
13   [TYPE]              CoreWindow
13   [PTR_TYPE]          ^
13   [COMMA]             ,
13   [TYPE]              AppC
13   [DC_MEMBER]         ::
13   [TYPE]              VisibilityChangedEventArgs
13   [PTR_TYPE]          ^
13   [ANGLE_CLOSE]       >
13   [FPAREN_OPEN]       (
13   [THIS]              this
13   [COMMA]             ,
13   [ADDR]              &
13   [TYPE]              FrameworkView
13   [DC_MEMBER]         ::
13   [WORD]              InternalOnWindowVisibilityChanged
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [WORD]              m_WindowClosedEvtToken
15   [ASSIGN]            =
15   [WORD]              m_CoreWindow
15   [MEMBER]            ->
15   [WORD]              Closed
15   [ASSIGN]            +=
15   [NEWLINE]           
16   [WORD]              ref
16   [NEW]               new
16   [TYPE]              AppC
16   [DC_MEMBER]         ::
16   [FUNC_CALL]         TypedEventHandler
16   [ANGLE_OPEN]        <
16   [TYPE]              AppC
16   [DC_MEMBER]         ::
16   [TYPE]              CoreWindow
16   [PTR_TYPE]          ^
16   [COMMA]             ,
16   [TYPE]              AppC
16   [DC_MEMBER]         ::
16   [TYPE]              CoreWindowEventArgs
16   [PTR_TYPE]          ^
16   [ANGLE_CLOSE]       >
16   [FPAREN_OPEN]       (
16   [THIS]              this
16   [COMMA]             ,
16   [ADDR]              &
16   [TYPE]              FrameworkView
16   [DC_MEMBER]         ::
16   [WORD]              InternalOnWindowClosed
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           