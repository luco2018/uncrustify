Line [Parent]            Text
1    [NONE]              public
1    [NONE]              string
1    [NONE]              Foo
1    [NONE]              =>
1    [NONE]              
2    [NONE]              "bar"
2    [NONE]              ;
2    [NONE]              
3    [NONE]              public
3    [NONE]              string
3    [NONE]              Foo
3    [NONE]              
4    [NONE]              =>
4    [NONE]              "bar"
4    [NONE]              ;
4    [NONE]              
6    [FUNC_PROTO]        public
6    [FUNC_PROTO]        static
6    [FUNC_PROTO]        T
6    [NONE]              WithAdditionalFlags
6    [TEMPLATE]          <
6    [NONE]              T
6    [TEMPLATE]          >
6    [FUNC_PROTO]        (
6    [NONE]              this
6    [NONE]              T
6    [NONE]              _this
6    [NONE]              ,
6    [NONE]              IEnumerable
6    [TEMPLATE]          <
6    [NONE]              string
6    [TEMPLATE]          >
6    [NONE]              flags
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        where
6    [NONE]              T
6    [NONE]              :
6    [NONE]              ObjectFileLinker
6    [NONE]              
7    [NONE]              =>
7    [NONE]              _this
7    [NONE]              .
7    [NONE]              WithLinkerSetting
7    [FUNC_CALL]         (
7    [NONE]              l
7    [NONE]              =>
7    [NONE]              l
7    [NONE]              .
7    [NONE]              Flags
7    [NONE]              =
7    [NONE]              l
7    [NONE]              .
7    [NONE]              Flags
7    [NONE]              .
7    [NONE]              Concat
7    [FUNC_CALL]         (
7    [NONE]              flags
7    [FUNC_CALL]         )
7    [FUNC_CALL]         )
7    [FUNC_PROTO]        ;
7    [NONE]              
9    [FUNC_PROTO]        public
9    [FUNC_PROTO]        static
9    [FUNC_PROTO]        T
9    [NONE]              WithAdditionalFlags
9    [TEMPLATE]          <
9    [NONE]              T
9    [TEMPLATE]          >
9    [FUNC_PROTO]        (
9    [NONE]              this
9    [NONE]              T
9    [NONE]              _this
9    [NONE]              ,
9    [NONE]              IEnumerable
9    [TEMPLATE]          <
9    [NONE]              string
9    [TEMPLATE]          >
9    [NONE]              flags
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        where
9    [NONE]              T
9    [NONE]              :
9    [NONE]              ObjectFileLinker
9    [NONE]              =>
9    [NONE]              
10   [NONE]              _this
10   [NONE]              .
10   [NONE]              WithLinkerSetting
10   [FUNC_CALL]         (
10   [NONE]              l
10   [NONE]              =>
10   [NONE]              l
10   [NONE]              .
10   [NONE]              Flags
10   [NONE]              =
10   [NONE]              l
10   [NONE]              .
10   [NONE]              Flags
10   [NONE]              .
10   [NONE]              Concat
10   [FUNC_CALL]         (
10   [NONE]              flags
10   [FUNC_CALL]         )
10   [FUNC_CALL]         )
10   [FUNC_PROTO]        ;
10   [NONE]              
12   [FUNC_PROTO]        public
12   [FUNC_PROTO]        static
12   [FUNC_PROTO]        T
12   [NONE]              WithAdditionalFlags
12   [TEMPLATE]          <
12   [NONE]              T
12   [TEMPLATE]          >
12   [FUNC_PROTO]        (
12   [NONE]              this
12   [NONE]              T
12   [NONE]              _this
12   [NONE]              ,
12   [NONE]              IEnumerable
12   [TEMPLATE]          <
12   [NONE]              string
12   [TEMPLATE]          >
12   [NONE]              flags
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        where
12   [NONE]              T
12   [NONE]              :
12   [NONE]              ObjectFileLinker
12   [NONE]              
13   [NONE]              =>
13   [NONE]              _this
13   [NONE]              .
13   [NONE]              WithLinkerSetting
13   [FUNC_CALL]         (
13   [NONE]              
14   [NONE]              l
14   [NONE]              =>
14   [NONE]              l
14   [NONE]              .
14   [NONE]              Flags
14   [NONE]              =
14   [NONE]              
15   [NONE]              l
15   [NONE]              .
15   [NONE]              Flags
15   [NONE]              .
15   [NONE]              Concat
15   [FUNC_CALL]         (
15   [NONE]              flags
15   [FUNC_CALL]         )
15   [FUNC_CALL]         )
15   [FUNC_PROTO]        ;
15   [NONE]              
17   [FUNC_PROTO]        public
17   [FUNC_PROTO]        static
17   [FUNC_PROTO]        T
17   [NONE]              WithAdditionalFlags
17   [TEMPLATE]          <
17   [NONE]              T
17   [TEMPLATE]          >
17   [FUNC_PROTO]        (
17   [NONE]              this
17   [NONE]              T
17   [NONE]              _this
17   [NONE]              ,
17   [NONE]              IEnumerable
17   [TEMPLATE]          <
17   [NONE]              string
17   [TEMPLATE]          >
17   [NONE]              flags
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        where
17   [NONE]              T
17   [NONE]              :
17   [NONE]              ObjectFileLinker
17   [NONE]              =>
17   [NONE]              _this
17   [NONE]              .
17   [NONE]              WithLinkerSetting
17   [FUNC_CALL]         (
17   [NONE]              
18   [NONE]              l
18   [NONE]              =>
18   [NONE]              l
18   [NONE]              .
18   [NONE]              Flags
18   [NONE]              =
18   [NONE]              
19   [NONE]              l
19   [NONE]              .
19   [NONE]              Flags
19   [NONE]              .
19   [NONE]              Concat
19   [FUNC_CALL]         (
19   [NONE]              flags
19   [FUNC_CALL]         )
19   [FUNC_CALL]         )
19   [FUNC_PROTO]        ;
19   [NONE]              
21   [FUNC_PROTO]        public
21   [FUNC_PROTO]        static
21   [FUNC_PROTO]        T
21   [NONE]              WithAdditionalFlags
21   [TEMPLATE]          <
21   [NONE]              T
21   [TEMPLATE]          >
21   [FUNC_PROTO]        (
21   [NONE]              this
21   [NONE]              T
21   [NONE]              _this
21   [NONE]              ,
21   [NONE]              IEnumerable
21   [TEMPLATE]          <
21   [NONE]              string
21   [TEMPLATE]          >
21   [NONE]              flags
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        where
21   [NONE]              T
21   [NONE]              :
21   [NONE]              ObjectFileLinker
21   [NONE]              
22   [NONE]              =>
22   [NONE]              _this
22   [NONE]              .
22   [NONE]              WithLinkerSetting
22   [FUNC_CALL]         (
22   [NONE]              l
22   [NONE]              =>
22   [NONE]              
23   [NONE]              l
23   [NONE]              .
23   [NONE]              Flags
23   [NONE]              =
23   [NONE]              l
23   [NONE]              .
23   [NONE]              Flags
23   [NONE]              .
23   [NONE]              Concat
23   [FUNC_CALL]         (
23   [NONE]              flags
23   [FUNC_CALL]         )
23   [FUNC_CALL]         )
23   [FUNC_PROTO]        ;
23   [NONE]              
25   [FUNC_PROTO]        public
25   [FUNC_PROTO]        static
25   [FUNC_PROTO]        T
25   [NONE]              WithAdditionalFlags
25   [TEMPLATE]          <
25   [NONE]              T
25   [TEMPLATE]          >
25   [FUNC_PROTO]        (
25   [NONE]              this
25   [NONE]              T
25   [NONE]              _this
25   [NONE]              ,
25   [NONE]              IEnumerable
25   [TEMPLATE]          <
25   [NONE]              string
25   [TEMPLATE]          >
25   [NONE]              flags
25   [FUNC_PROTO]        )
25   [FUNC_PROTO]        where
25   [NONE]              T
25   [NONE]              :
25   [NONE]              ObjectFileLinker
25   [NONE]              =>
25   [NONE]              
26   [NONE]              _this
26   [NONE]              .
26   [NONE]              WithLinkerSetting
26   [FUNC_CALL]         (
26   [NONE]              l
26   [NONE]              
27   [NONE]              =>
27   [NONE]              l
27   [NONE]              .
27   [NONE]              Flags
27   [NONE]              =
27   [NONE]              l
27   [NONE]              .
27   [NONE]              Flags
27   [NONE]              .
27   [NONE]              Concat
27   [FUNC_CALL]         (
27   [NONE]              flags
27   [FUNC_CALL]         )
27   [FUNC_CALL]         )
27   [FUNC_PROTO]        ;
27   [NONE]              
29   [NONE]              var
29   [NONE]              islands
29   [NONE]              =
29   [NONE]              EditorCompilationInterface
29   [NONE]              .
29   [NONE]              GetAllMonoIslands
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              .
29   [NONE]              Select
29   [FUNC_CALL]         (
29   [NONE]              i
29   [NONE]              =>
29   [NONE]              new
29   [NONE]              Island
29   [NONE]              
30   [CS_PROPERTY]       {
30   [NONE]              
31   [NONE]              MonoIsland
31   [NONE]              =
31   [NONE]              i
31   [NONE]              ,
31   [NONE]              
32   [NONE]              Name
32   [NONE]              =
32   [NONE]              Path
32   [NONE]              .
32   [NONE]              GetFileNameWithoutExtension
32   [FUNC_CALL]         (
32   [NONE]              i
32   [NONE]              .
32   [NONE]              _output
32   [FUNC_CALL]         )
32   [NONE]              ,
32   [NONE]              
33   [NONE]              References
33   [NONE]              =
33   [NONE]              i
33   [NONE]              .
33   [NONE]              _references
33   [NONE]              .
33   [NONE]              ToList
33   [FUNC_CALL]         (
33   [FUNC_CALL]         )
33   [NONE]              
34   [CS_PROPERTY]       }
34   [FUNC_CALL]         )
34   [NONE]              .
34   [NONE]              ToList
34   [FUNC_CALL]         (
34   [FUNC_CALL]         )
34   [NONE]              ;
34   [NONE]              
36   [NONE]              var
36   [NONE]              projectEntries
36   [NONE]              =
36   [NONE]              islands
36   [NONE]              .
36   [NONE]              Select
36   [FUNC_CALL]         (
36   [NONE]              i
36   [NONE]              =>
36   [NONE]              string
36   [NONE]              .
36   [NONE]              Format
36   [FUNC_CALL]         (
36   [NONE]              
37   [NONE]              DefaultSynchronizationSettings
37   [NONE]              .
37   [NONE]              SolutionProjectEntryTemplate
37   [NONE]              ,
37   [NONE]              
38   [NONE]              SolutionGuid
38   [FUNC_CALL]         (
38   [NONE]              i
38   [FUNC_CALL]         )
38   [NONE]              ,
38   [NONE]              _projectName
38   [NONE]              ,
38   [NONE]              Path
38   [NONE]              .
38   [NONE]              GetFileName
38   [FUNC_CALL]         (
38   [NONE]              ProjectFile
38   [FUNC_CALL]         (
38   [NONE]              i
38   [FUNC_CALL]         )
38   [FUNC_CALL]         )
38   [NONE]              ,
38   [NONE]              ProjectGuid
38   [FUNC_CALL]         (
38   [NONE]              i
38   [NONE]              .
38   [NONE]              _output
38   [FUNC_CALL]         )
38   [NONE]              
39   [FUNC_CALL]         )
39   [FUNC_CALL]         )
39   [NONE]              ;
39   [NONE]              
42   [NONE]              Func
42   [TEMPLATE]          <
42   [NONE]              IEnumerable
42   [TEMPLATE]          <
42   [NONE]              IMemberDefinition
42   [TEMPLATE]          >
42   [NONE]              ,
42   [NONE]              IEnumerable
42   [TEMPLATE]          <
42   [NONE]              IMemberDefinition
42   [TEMPLATE]          >
42   [TEMPLATE]          >
42   [NONE]              filterMembersWithObsoleteAttr
42   [NONE]              =
42   [NONE]              members
42   [NONE]              =>
42   [NONE]              members
42   [NONE]              .
42   [NONE]              Where
42   [FUNC_CALL]         (
42   [NONE]              m
42   [NONE]              =>
42   [NONE]              
43   [NONE]              !
43   [NONE]              m
43   [NONE]              .
43   [NONE]              IsRuntimeSpecialName
43   [NONE]              
44   [NONE]              &&
44   [NONE]              !
44   [NONE]              m
44   [NONE]              .
44   [NONE]              IsSpecialName
44   [NONE]              
45   [NONE]              &&
45   [NONE]              !
45   [NONE]              blackList
45   [NONE]              .
45   [NONE]              Contains
45   [FUNC_CALL]         (
45   [NONE]              m
45   [NONE]              .
45   [NONE]              FullName
45   [FUNC_CALL]         )
45   [NONE]              
46   [NONE]              &&
46   [NONE]              CheckCustomAttributes
46   [FUNC_CALL]         (
46   [NONE]              m
46   [FUNC_CALL]         )
46   [FUNC_CALL]         )
46   [NONE]              ;
46   [NONE]              