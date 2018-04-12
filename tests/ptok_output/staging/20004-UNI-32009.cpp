Line [Parent]            Text
1    [COMMENT_WHOLE]     //TestCase-001
1    [NONE]              
2    [FUNC_PROTO]        void
2    [NONE]              GetCharacterRenderInfo
2    [FUNC_PROTO]        (
2    [NONE]              unsigned
2    [NONE]              int
2    [NONE]              charCode
2    [NONE]              ,
2    [NONE]              int
2    [NONE]              size
2    [NONE]              ,
2    [NONE]              unsigned
2    [NONE]              int
2    [NONE]              style
2    [NONE]              ,
2    [NONE]              float
2    [NONE]              pixelsPerPoint
2    [NONE]              ,
2    [NONE]              Rectf
2    [NONE]              &
2    [NONE]              verts
2    [NONE]              ,
2    [NONE]              Rectf
2    [NONE]              &
2    [NONE]              uvs
2    [NONE]              ,
2    [NONE]              bool
2    [NONE]              &
2    [NONE]              flipped
2    [NONE]              ,
2    [NONE]              unsigned
2    [NONE]              int
2    [NONE]              *
2    [NONE]              error
2    [FUNC_PROTO]        =
2    [NONE]              NULL
2    [FUNC_PROTO]        )
2    [NONE]              const
2    [FUNC_PROTO]        ;
2    [NONE]              
4    [COMMENT_WHOLE]     //TestCase-002
4    [NONE]              
5    [FUNC_PROTO]        void
5    [NONE]              AddCharacterInfoEntry
5    [FUNC_PROTO]        (
5    [NONE]              const
5    [NONE]              Rectf
5    [NONE]              &
5    [NONE]              uv
5    [NONE]              ,
5    [NONE]              const
5    [NONE]              Rectf
5    [NONE]              &
5    [NONE]              vert
5    [NONE]              ,
5    [NONE]              float
5    [NONE]              advance
5    [NONE]              ,
5    [NONE]              int
5    [NONE]              character
5    [NONE]              ,
5    [NONE]              bool
5    [NONE]              flipped
5    [NONE]              ,
5    [NONE]              int
5    [NONE]              size
5    [NONE]              ,
5    [NONE]              unsigned
5    [NONE]              int
5    [NONE]              style
5    [NONE]              ,
5    [NONE]              float
5    [NONE]              pixelsPerPoint
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
7    [COMMENT_WHOLE]     //TestCase-003
7    [NONE]              
8    [FUNC_PROTO]        bool
8    [NONE]              CacheFontForText
8    [FUNC_PROTO]        (
8    [NONE]              UInt16
8    [NONE]              *
8    [NONE]              chars
8    [NONE]              ,
8    [NONE]              int
8    [NONE]              length
8    [NONE]              ,
8    [NONE]              int
8    [NONE]              size
8    [FUNC_PROTO]        =
8    [NONE]              0
8    [NONE]              ,
8    [NONE]              float
8    [NONE]              pixelsPerPoint
8    [FUNC_PROTO]        =
8    [NONE]              1.0f
8    [NONE]              ,
8    [NONE]              unsigned
8    [NONE]              int
8    [NONE]              style
8    [FUNC_PROTO]        =
8    [NONE]              kStyleDefault
8    [NONE]              ,
8    [NONE]              const
8    [NONE]              dynamic_array
8    [TEMPLATE]          <
8    [NONE]              TextFormatChange
8    [TEMPLATE]          >
8    [NONE]              *
8    [NONE]              formats
8    [FUNC_PROTO]        =
8    [NONE]              NULL
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              
10   [COMMENT_WHOLE]     //TestCasse-004
10   [NONE]              
11   [NONE]              FontImpl
11   [FUNC_CALL]         (
11   [NONE]              MemLabelId
11   [NONE]              label
11   [NONE]              ,
11   [NONE]              TextRendering
11   [NONE]              ::
11   [NONE]              Font
11   [NONE]              *
11   [NONE]              owningFont
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              