typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned long long    ImageBaseOffset64;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    ImageBaseOffset32 dispHandlerArray;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    ImageBaseOffset32 pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    ImageBaseOffset32 action;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef unsigned short    wchar16;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    ImageBaseOffset32 EndAddress;
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

struct _s_HandlerType {
    uint adjectives;
    ImageBaseOffset32 dispType;
    int dispCatchObj;
    ImageBaseOffset32 dispOfHandler;
    dword dispFrame;
};

typedef struct _s_IPToStateMapEntry _s_IPToStateMapEntry, *P_s_IPToStateMapEntry;

struct _s_IPToStateMapEntry {
    ImageBaseOffset32 Ip;
    __ehstate_t state;
};

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_IPToStateMapEntry IPToStateMapEntry;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    ImageBaseOffset32 dispUnwindMap;
    uint nTryBlocks;
    ImageBaseOffset32 dispTryBlockMap;
    uint nIPMapEntries;
    ImageBaseOffset32 dispIPToStateMap;
    int dispUnwindHelp;
    ImageBaseOffset32 dispESTypeList;
    int EHFlags;
};

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void * pVFTable;
    void * spare;
    char name[0];
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef ulonglong __uint64;

typedef struct _s_HandlerType HandlerType;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct GuardCfgTableEntry GuardCfgTableEntry, *PGuardCfgTableEntry;

struct GuardCfgTableEntry {
    ImageBaseOffset32 Offset;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulonglong ULONG_PTR;

typedef union _union_540 _union_540, *P_union_540;

typedef void * HANDLE;

typedef struct _struct_541 _struct_541, *P_struct_541;

typedef void * PVOID;

struct _struct_541 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_540 {
    struct _struct_541 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_540 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void * LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef wchar_t WCHAR;

typedef WCHAR * LPWSTR;

typedef uchar BYTE;

typedef BYTE * LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW * LPSTARTUPINFOW;

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW * LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _BY_HANDLE_FILE_INFORMATION _BY_HANDLE_FILE_INFORMATION, *P_BY_HANDLE_FILE_INFORMATION;

struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
};

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK * PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef struct _BY_HANDLE_FILE_INFORMATION * LPBY_HANDLE_FILE_INFORMATION;

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT * PCONTEXT;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef long HRESULT;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef DWORD ULONG;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef WCHAR OLECHAR;

typedef OLECHAR * LPOLESTR;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef GUID CLSID;

typedef struct IStream IStream, *PIStream;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct IStreamVtbl {
    HRESULT (* QueryInterface)(struct IStream *, IID *, void * *);
    ULONG (* AddRef)(struct IStream *);
    ULONG (* Release)(struct IStream *);
    HRESULT (* Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (* Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (* Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (* SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (* CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (* Commit)(struct IStream *, DWORD);
    HRESULT (* Revert)(struct IStream *);
    HRESULT (* LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (* UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (* Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (* Clone)(struct IStream *, struct IStream * *);
};

struct IEnumStringVtbl {
    HRESULT (* QueryInterface)(struct IEnumString *, IID *, void * *);
    ULONG (* AddRef)(struct IEnumString *);
    ULONG (* Release)(struct IEnumString *);
    HRESULT (* Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (* Skip)(struct IEnumString *, ULONG);
    HRESULT (* Reset)(struct IEnumString *);
    HRESULT (* Clone)(struct IEnumString *, struct IEnumString * *);
};

struct IStream {
    struct IStreamVtbl * lpVtbl;
};

struct IMonikerVtbl {
    HRESULT (* QueryInterface)(struct IMoniker *, IID *, void * *);
    ULONG (* AddRef)(struct IMoniker *);
    ULONG (* Release)(struct IMoniker *);
    HRESULT (* GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (* IsDirty)(struct IMoniker *);
    HRESULT (* Load)(struct IMoniker *, struct IStream *);
    HRESULT (* Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (* GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (* BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void * *);
    HRESULT (* BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void * *);
    HRESULT (* Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker * *, struct IMoniker * *);
    HRESULT (* ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker * *);
    HRESULT (* Enum)(struct IMoniker *, BOOL, struct IEnumMoniker * *);
    HRESULT (* IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (* Hash)(struct IMoniker *, DWORD *);
    HRESULT (* IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (* GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (* Inverse)(struct IMoniker *, struct IMoniker * *);
    HRESULT (* CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker * *);
    HRESULT (* RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker * *);
    HRESULT (* GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (* ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker * *);
    HRESULT (* IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

struct IMoniker {
    struct IMonikerVtbl * lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl * lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (* QueryInterface)(struct IEnumMoniker *, IID *, void * *);
    ULONG (* AddRef)(struct IEnumMoniker *);
    ULONG (* Release)(struct IEnumMoniker *);
    HRESULT (* Next)(struct IEnumMoniker *, ULONG, struct IMoniker * *, ULONG *);
    HRESULT (* Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (* Reset)(struct IEnumMoniker *);
    HRESULT (* Clone)(struct IEnumMoniker *, struct IEnumMoniker * *);
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl * lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (* QueryInterface)(struct IUnknown *, IID *, void * *);
    ULONG (* AddRef)(struct IUnknown *);
    ULONG (* Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl * lpVtbl;
};

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

struct IBindCtx {
    struct IBindCtxVtbl * lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (* QueryInterface)(struct IBindCtx *, IID *, void * *);
    ULONG (* AddRef)(struct IBindCtx *);
    ULONG (* Release)(struct IBindCtx *);
    HRESULT (* RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (* RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (* ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (* SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (* GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (* GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable * *);
    HRESULT (* RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (* GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown * *);
    HRESULT (* EnumObjectParam)(struct IBindCtx *, struct IEnumString * *);
    HRESULT (* RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl * lpVtbl;
};

struct IRunningObjectTableVtbl {
    HRESULT (* QueryInterface)(struct IRunningObjectTable *, IID *, void * *);
    ULONG (* AddRef)(struct IRunningObjectTable *);
    ULONG (* Release)(struct IRunningObjectTable *);
    HRESULT (* Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (* Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (* IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (* GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown * *);
    HRESULT (* NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (* GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (* EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker * *);
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

typedef struct IBindCtx * LPBC;

typedef struct _DISPATCHER_CONTEXT _DISPATCHER_CONTEXT, *P_DISPATCHER_CONTEXT;

struct _DISPATCHER_CONTEXT {
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef uchar boolean;

typedef boolean BOOLEAN;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[11];
};

typedef BYTE UCHAR;

typedef int PMFN;

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef struct _s_ThrowInfo ThrowInfo;

typedef char * va_list;

typedef struct tagPDEXW tagPDEXW, *PtagPDEXW;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef HANDLE HGLOBAL;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ * HDC;

typedef struct tagPRINTPAGERANGE tagPRINTPAGERANGE, *PtagPRINTPAGERANGE;

typedef struct tagPRINTPAGERANGE PRINTPAGERANGE;

typedef PRINTPAGERANGE * LPPRINTPAGERANGE;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef WCHAR * LPCWSTR;

typedef struct IUnknown * LPUNKNOWN;

typedef struct _PSP _PSP, *P_PSP;

typedef struct _PSP * HPROPSHEETPAGE;

struct _PSP {
};

struct HWND__ {
    int unused;
};

struct HDC__ {
    int unused;
};

struct tagPDEXW {
    DWORD lStructSize;
    HWND hwndOwner;
    HGLOBAL hDevMode;
    HGLOBAL hDevNames;
    HDC hDC;
    DWORD Flags;
    DWORD Flags2;
    DWORD ExclusionFlags;
    DWORD nPageRanges;
    DWORD nMaxPageRanges;
    LPPRINTPAGERANGE lpPageRanges;
    DWORD nMinPage;
    DWORD nMaxPage;
    DWORD nCopies;
    HINSTANCE hInstance;
    LPCWSTR lpPrintTemplateName;
    LPUNKNOWN lpCallback;
    DWORD nPropertyPages;
    HPROPSHEETPAGE * lphPropertyPages;
    DWORD nStartPage;
    DWORD dwResultAction;
};

struct tagPRINTPAGERANGE {
    DWORD nFromPage;
    DWORD nToPage;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct tagOFNW tagOFNW, *PtagOFNW;

typedef longlong LONG_PTR;

typedef LONG_PTR LPARAM;

typedef ulonglong UINT_PTR;

typedef uint UINT;

typedef UINT_PTR WPARAM;

typedef UINT_PTR (* LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNW {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCWSTR lpstrFilter;
    LPWSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPWSTR lpstrFile;
    DWORD nMaxFile;
    LPWSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCWSTR lpstrInitialDir;
    LPCWSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCWSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
    void * pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

typedef struct tagPDEXW * LPPRINTDLGEXW;

typedef struct tagCHOOSEFONTW tagCHOOSEFONTW, *PtagCHOOSEFONTW;

typedef struct tagCHOOSEFONTW CHOOSEFONTW;

typedef CHOOSEFONTW * LPCHOOSEFONTW;

typedef struct tagLOGFONTW tagLOGFONTW, *PtagLOGFONTW;

typedef struct tagLOGFONTW * LPLOGFONTW;

typedef int INT;

typedef DWORD COLORREF;

typedef UINT_PTR (* LPCFHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagCHOOSEFONTW {
    DWORD lStructSize;
    HWND hwndOwner;
    HDC hDC;
    LPLOGFONTW lpLogFont;
    INT iPointSize;
    DWORD Flags;
    COLORREF rgbColors;
    LPARAM lCustData;
    LPCFHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
    HINSTANCE hInstance;
    LPWSTR lpszStyle;
    WORD nFontType;
    WORD ___MISSING_ALIGNMENT__;
    INT nSizeMin;
    INT nSizeMax;
};

struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[32];
};

typedef struct tagPSDW tagPSDW, *PtagPSDW;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef UINT_PTR (* LPPAGESETUPHOOK)(HWND, UINT, WPARAM, LPARAM);

typedef UINT_PTR (* LPPAGEPAINTHOOK)(HWND, UINT, WPARAM, LPARAM);

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagPSDW {
    DWORD lStructSize;
    HWND hwndOwner;
    HGLOBAL hDevMode;
    HGLOBAL hDevNames;
    DWORD Flags;
    POINT ptPaperSize;
    RECT rtMinMargin;
    RECT rtMargin;
    HINSTANCE hInstance;
    LPARAM lCustData;
    LPPAGESETUPHOOK lpfnPageSetupHook;
    LPPAGEPAINTHOOK lpfnPagePaintHook;
    LPCWSTR lpPageSetupTemplateName;
    HGLOBAL hPageSetupTemplate;
};

typedef struct tagFINDREPLACEW tagFINDREPLACEW, *PtagFINDREPLACEW;

typedef UINT_PTR (* LPFRHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagFINDREPLACEW {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    DWORD Flags;
    LPWSTR lpstrFindWhat;
    LPWSTR lpstrReplaceWith;
    WORD wFindWhatLen;
    WORD wReplaceWithLen;
    LPARAM lCustData;
    LPFRHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
};

typedef struct tagPSDW * LPPAGESETUPDLGW;

typedef struct tagFINDREPLACEW * LPFINDREPLACEW;

typedef struct tagOFNW * LPOPENFILENAMEW;

typedef ulonglong size_t;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagDRAWTEXTPARAMS tagDRAWTEXTPARAMS, *PtagDRAWTEXTPARAMS;

struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
};

typedef struct tagMSG * LPMSG;

typedef struct tagDRAWTEXTPARAMS * LPDRAWTEXTPARAMS;

typedef struct tagWNDCLASSEXW tagWNDCLASSEXW, *PtagWNDCLASSEXW;

typedef struct tagWNDCLASSEXW WNDCLASSEXW;

typedef LONG_PTR LRESULT;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
};

typedef struct HWINEVENTHOOK__ HWINEVENTHOOK__, *PHWINEVENTHOOK__;

typedef struct HWINEVENTHOOK__ * HWINEVENTHOOK;

typedef void (* WINEVENTPROC)(HWINEVENTHOOK, DWORD, HWND, LONG, LONG, DWORD, DWORD);

struct HWINEVENTHOOK__ {
    int unused;
};

typedef longlong INT_PTR;

typedef INT_PTR (* DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID * LPCGUID;

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef union _union_682 _union_682, *P_union_682;

typedef union _union_685 _union_685, *P_union_685;

typedef struct _struct_683 _struct_683, *P_struct_683;

typedef struct _struct_684 _struct_684, *P_struct_684;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

union _union_685 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_684 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_683 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_682 {
    struct _struct_683 field0;
    struct _struct_684 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_682 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_685 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct tagLOGFONTW LOGFONTW;

typedef BOOL (* ABORTPROC)(HDC, int);

typedef struct _DOCINFOW _DOCINFOW, *P_DOCINFOW;

typedef struct _DOCINFOW DOCINFOW;

struct _DOCINFOW {
    int cbSize;
    LPCWSTR lpszDocName;
    LPCWSTR lpszOutput;
    LPCWSTR lpszDatatype;
    DWORD fwType;
};

typedef struct _devicemodeW DEVMODEW;

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

typedef struct tagTEXTMETRICW TEXTMETRICW;

struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef int (* OLDFONTENUMPROCW)(LOGFONTW *, TEXTMETRICW *, DWORD, LPARAM);

typedef OLDFONTENUMPROCW FONTENUMPROCW;

typedef struct _devicemodeW * LPDEVMODEW;

typedef struct tagTEXTMETRICW * LPTEXTMETRICW;

typedef struct _ACTIVATION_CONTEXT _ACTIVATION_CONTEXT, *P_ACTIVATION_CONTEXT;

struct _ACTIVATION_CONTEXT {
};

typedef struct _struct_314 _struct_314, *P_struct_314;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

typedef struct _TP_CLEANUP_GROUP _TP_CLEANUP_GROUP, *P_TP_CLEANUP_GROUP;

struct _TP_CLEANUP_GROUP {
};

typedef struct _struct_317 _struct_317, *P_struct_317;

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_316 _struct_316, *P_struct_316;

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_315 _struct_315, *P_struct_315;

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _TP_TIMER _TP_TIMER, *P_TP_TIMER;

struct _TP_TIMER {
};

typedef struct _RUNTIME_FUNCTION * PRUNTIME_FUNCTION;

typedef union _union_401 _union_401, *P_union_401;

typedef struct _struct_402 _struct_402, *P_struct_402;

struct _struct_402 {
    DWORD LongFunction:1;
    DWORD Persistent:1;
    DWORD Private:30;
};

union _union_401 {
    DWORD Flags;
    struct _struct_402 s;
};

typedef struct _TP_CALLBACK_INSTANCE _TP_CALLBACK_INSTANCE, *P_TP_CALLBACK_INSTANCE;

typedef struct _TP_CALLBACK_INSTANCE * PTP_CALLBACK_INSTANCE;

typedef struct _TP_TIMER * PTP_TIMER;

typedef void (* PTP_TIMER_CALLBACK)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER);

struct _TP_CALLBACK_INSTANCE {
};

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _M128A * PM128A;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong * PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

union _SLIST_HEADER {
    struct _struct_314 s;
    struct _struct_315 Header8;
    struct _struct_316 Header16;
    struct _struct_317 HeaderX64;
};

typedef DWORD TP_VERSION;

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _TP_POOL _TP_POOL, *P_TP_POOL;

struct _TP_POOL {
};

typedef enum _HEAP_INFORMATION_CLASS {
    HeapCompatibilityInformation=0,
    HeapEnableTerminationOnCorruption=1
} _HEAP_INFORMATION_CLASS;

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef ULARGE_INTEGER * PULARGE_INTEGER;

typedef CHAR * LPSTR;

typedef struct _TP_CALLBACK_ENVIRON_V3 _TP_CALLBACK_ENVIRON_V3, *P_TP_CALLBACK_ENVIRON_V3;

typedef struct _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;

typedef TP_CALLBACK_ENVIRON_V3 * PTP_CALLBACK_ENVIRON;

typedef struct _TP_POOL * PTP_POOL;

typedef struct _TP_CLEANUP_GROUP * PTP_CLEANUP_GROUP;

typedef void (* PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(PVOID, PVOID);

typedef void (* PTP_SIMPLE_CALLBACK)(PTP_CALLBACK_INSTANCE, PVOID);

typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH=0,
    TP_CALLBACK_PRIORITY_NORMAL=1,
    TP_CALLBACK_PRIORITY_LOW=2,
    TP_CALLBACK_PRIORITY_INVALID=3
} _TP_CALLBACK_PRIORITY;

typedef enum _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;

struct _TP_CALLBACK_ENVIRON_V3 {
    TP_VERSION Version;
    PTP_POOL Pool;
    PTP_CLEANUP_GROUP CleanupGroup;
    PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback;
    PVOID RaceDll;
    struct _ACTIVATION_CONTEXT * ActivationContext;
    PTP_SIMPLE_CALLBACK FinalizationCallback;
    union _union_401 u;
    TP_CALLBACK_PRIORITY CallbackPriority;
    DWORD Size;
};

typedef DWORD ACCESS_MASK;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser=1,
    TokenGroups=2,
    TokenPrivileges=3,
    TokenOwner=4,
    TokenPrimaryGroup=5,
    TokenDefaultDacl=6,
    TokenSource=7,
    TokenType=8,
    TokenImpersonationLevel=9,
    TokenStatistics=10,
    TokenRestrictedSids=11,
    TokenSessionId=12,
    TokenGroupsAndPrivileges=13,
    TokenSessionReference=14,
    TokenSandBoxInert=15,
    TokenAuditPolicy=16,
    TokenOrigin=17,
    TokenElevationType=18,
    TokenLinkedToken=19,
    TokenElevation=20,
    TokenHasRestrictions=21,
    TokenAccessInformation=22,
    TokenVirtualizationAllowed=23,
    TokenVirtualizationEnabled=24,
    TokenIntegrityLevel=25,
    TokenUIAccess=26,
    TokenMandatoryPolicy=27,
    TokenLogonSid=28,
    MaxTokenInfoClass=29
} _TOKEN_INFORMATION_CLASS;

typedef enum _TOKEN_INFORMATION_CLASS TOKEN_INFORMATION_CLASS;

typedef WCHAR * PCWSTR;

typedef enum _HEAP_INFORMATION_CLASS HEAP_INFORMATION_CLASS;

typedef struct _UNWIND_HISTORY_TABLE * PUNWIND_HISTORY_TABLE;

typedef union _SLIST_HEADER * PSLIST_HEADER;

typedef WORD LANGID;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS * PKNONVOLATILE_CONTEXT_POINTERS;

typedef EXCEPTION_ROUTINE * PEXCEPTION_ROUTINE;

typedef DWORD LCID;

typedef HANDLE * PHANDLE;

typedef struct _EVENT_DESCRIPTOR _EVENT_DESCRIPTOR, *P_EVENT_DESCRIPTOR;

typedef struct _EVENT_DESCRIPTOR EVENT_DESCRIPTOR;

typedef ushort USHORT;

struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
};

typedef struct _EVENT_DATA_DESCRIPTOR _EVENT_DATA_DESCRIPTOR, *P_EVENT_DATA_DESCRIPTOR;

struct _EVENT_DATA_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    ULONG Reserved;
};

typedef struct _EVENT_FILTER_DESCRIPTOR _EVENT_FILTER_DESCRIPTOR, *P_EVENT_FILTER_DESCRIPTOR;

struct _EVENT_FILTER_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    ULONG Type;
};

typedef struct _EVENT_FILTER_DESCRIPTOR * PEVENT_FILTER_DESCRIPTOR;

typedef void (* PENABLECALLBACK)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID);

typedef ULONGLONG REGHANDLE;

typedef struct _EVENT_DATA_DESCRIPTOR * PEVENT_DATA_DESCRIPTOR;

typedef ULONGLONG * PREGHANDLE;

typedef EVENT_DESCRIPTOR * PCEVENT_DESCRIPTOR;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR SIZE_T;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ * HFONT;

struct HFONT__ {
    int unused;
};

typedef struct HKL__ HKL__, *PHKL__;

struct HKL__ {
    int unused;
};

typedef struct tagPOINT * LPPOINT;

typedef HANDLE HLOCAL;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD * LPDWORD;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ {
    int unused;
};

typedef struct HACCEL__ * HACCEL;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef DWORD * PDWORD;

typedef int * LPINT;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HMONITOR__ HMONITOR__, *PHMONITOR__;

typedef struct HMONITOR__ * HMONITOR;

struct HMONITOR__ {
    int unused;
};

typedef struct _FILETIME * PFILETIME;

typedef struct HKL__ * HKL;

typedef HINSTANCE HMODULE;

typedef struct tagSIZE * LPSIZE;

typedef long * LPLONG;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME * LPFILETIME;

typedef INT_PTR (* FARPROC)(void);

typedef HANDLE * LPHANDLE;

typedef struct HKEY__ * HKEY;

typedef HKEY * PHKEY;

typedef WORD ATOM;

typedef struct HRGN__ * HRGN;

typedef struct tagRECT * LPRECT;

typedef BOOL * LPBOOL;

typedef void * HGDIOBJ;

typedef void * LPCVOID;

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_IMPORT_BY_NAME_10 IMAGE_IMPORT_BY_NAME_10, *PIMAGE_IMPORT_BY_NAME_10;

struct IMAGE_IMPORT_BY_NAME_10 {
    word Hint;
    char Name[10];
};

typedef struct IMAGE_IMPORT_BY_NAME_31 IMAGE_IMPORT_BY_NAME_31, *PIMAGE_IMPORT_BY_NAME_31;

struct IMAGE_IMPORT_BY_NAME_31 {
    word Hint;
    char Name[31];
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_IMPORT_BY_NAME_12 IMAGE_IMPORT_BY_NAME_12, *PIMAGE_IMPORT_BY_NAME_12;

struct IMAGE_IMPORT_BY_NAME_12 {
    word Hint;
    char Name[12];
};

typedef struct IMAGE_IMPORT_BY_NAME_11 IMAGE_IMPORT_BY_NAME_11, *PIMAGE_IMPORT_BY_NAME_11;

struct IMAGE_IMPORT_BY_NAME_11 {
    word Hint;
    char Name[11];
};

typedef struct IMAGE_IMPORT_BY_NAME_14 IMAGE_IMPORT_BY_NAME_14, *PIMAGE_IMPORT_BY_NAME_14;

struct IMAGE_IMPORT_BY_NAME_14 {
    word Hint;
    char Name[14];
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_IMPORT_BY_NAME_13 IMAGE_IMPORT_BY_NAME_13, *PIMAGE_IMPORT_BY_NAME_13;

struct IMAGE_IMPORT_BY_NAME_13 {
    word Hint;
    char Name[13];
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_IMPORT_BY_NAME_16 IMAGE_IMPORT_BY_NAME_16, *PIMAGE_IMPORT_BY_NAME_16;

struct IMAGE_IMPORT_BY_NAME_16 {
    word Hint;
    char Name[16];
};

typedef struct IMAGE_IMPORT_BY_NAME_15 IMAGE_IMPORT_BY_NAME_15, *PIMAGE_IMPORT_BY_NAME_15;

struct IMAGE_IMPORT_BY_NAME_15 {
    word Hint;
    char Name[15];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_58 IMAGE_RESOURCE_DIR_STRING_U_58, *PIMAGE_RESOURCE_DIR_STRING_U_58;

struct IMAGE_RESOURCE_DIR_STRING_U_58 {
    word Length;
    wchar16 NameString[29];
};

typedef struct IMAGE_IMPORT_BY_NAME_18 IMAGE_IMPORT_BY_NAME_18, *PIMAGE_IMPORT_BY_NAME_18;

struct IMAGE_IMPORT_BY_NAME_18 {
    word Hint;
    char Name[18];
};

typedef struct IMAGE_IMPORT_BY_NAME_17 IMAGE_IMPORT_BY_NAME_17, *PIMAGE_IMPORT_BY_NAME_17;

struct IMAGE_IMPORT_BY_NAME_17 {
    word Hint;
    char Name[17];
};

typedef struct IMAGE_IMPORT_BY_NAME_39 IMAGE_IMPORT_BY_NAME_39, *PIMAGE_IMPORT_BY_NAME_39;

struct IMAGE_IMPORT_BY_NAME_39 {
    word Hint;
    char Name[39];
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct IMAGE_IMPORT_BY_NAME_19 IMAGE_IMPORT_BY_NAME_19, *PIMAGE_IMPORT_BY_NAME_19;

struct IMAGE_IMPORT_BY_NAME_19 {
    word Hint;
    char Name[19];
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct ImgDelayDescr ImgDelayDescr, *PImgDelayDescr;

struct ImgDelayDescr {
    dword grAttrs;
    ImageBaseOffset32 szName;
    ImageBaseOffset32 phmod;
    ImageBaseOffset32 pIAT;
    ImageBaseOffset32 pINT;
    ImageBaseOffset32 pBoundIAT;
    ImageBaseOffset32 pUnloadIAT;
    dword dwTimeStamp;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_6 IMAGE_RESOURCE_DIR_STRING_U_6, *PIMAGE_RESOURCE_DIR_STRING_U_6;

struct IMAGE_RESOURCE_DIR_STRING_U_6 {
    word Length;
    wchar16 NameString[3];
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_IMPORT_BY_NAME_21 IMAGE_IMPORT_BY_NAME_21, *PIMAGE_IMPORT_BY_NAME_21;

struct IMAGE_IMPORT_BY_NAME_21 {
    word Hint;
    char Name[21];
};

typedef struct IMAGE_IMPORT_BY_NAME_20 IMAGE_IMPORT_BY_NAME_20, *PIMAGE_IMPORT_BY_NAME_20;

struct IMAGE_IMPORT_BY_NAME_20 {
    word Hint;
    char Name[20];
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_60 IMAGE_RESOURCE_DIR_STRING_U_60, *PIMAGE_RESOURCE_DIR_STRING_U_60;

struct IMAGE_RESOURCE_DIR_STRING_U_60 {
    word Length;
    wchar16 NameString[30];
};

typedef struct IMAGE_IMPORT_BY_NAME_28 IMAGE_IMPORT_BY_NAME_28, *PIMAGE_IMPORT_BY_NAME_28;

struct IMAGE_IMPORT_BY_NAME_28 {
    word Hint;
    char Name[28];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_44 IMAGE_RESOURCE_DIR_STRING_U_44, *PIMAGE_RESOURCE_DIR_STRING_U_44;

struct IMAGE_RESOURCE_DIR_STRING_U_44 {
    word Length;
    wchar16 NameString[22];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_46 IMAGE_RESOURCE_DIR_STRING_U_46, *PIMAGE_RESOURCE_DIR_STRING_U_46;

struct IMAGE_RESOURCE_DIR_STRING_U_46 {
    word Length;
    wchar16 NameString[23];
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct tagPROPVARIANT tagPROPVARIANT, *PtagPROPVARIANT;

typedef struct tagPROPVARIANT PROPVARIANT;

struct tagPROPVARIANT {
};

typedef struct HDROP__ HDROP__, *PHDROP__;

struct HDROP__ {
    int unused;
};

typedef struct HDROP__ * HDROP;

typedef int (* _onexit_t)(void);

typedef struct _PRINTER_DEFAULTSW _PRINTER_DEFAULTSW, *P_PRINTER_DEFAULTSW;

struct _PRINTER_DEFAULTSW {
    LPWSTR pDatatype;
    LPDEVMODEW pDevMode;
    ACCESS_MASK DesiredAccess;
};

typedef struct _PRINTER_DEFAULTSW * LPPRINTER_DEFAULTSW;




void FUN_140001008(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined auStackY136 [32];
  _EVENT_DATA_DESCRIPTOR local_58 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY136;
  local_28 = param_6;
  local_1c = 0;
  local_20 = 8;
  local_38 = *param_5;
  local_2c = 0;
  local_30 = 0x10;
  _tlgWriteTransfer_EtwWriteTransfer
            ((longlong)&DAT_1400301f8,param_2,(LPCGUID)0x0,(LPCGUID)0x0,4,local_58);
  FUN_140023f70(local_18 ^ (ulonglong)auStackY136);
  return;
}



void FUN_140001094(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined auStackY152 [32];
  _EVENT_DATA_DESCRIPTOR local_68 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY152;
  local_28 = param_7;
  local_38 = param_6;
  local_20 = 4;
  local_30 = 8;
  local_40 = 0x10;
  local_48 = *param_5;
  _tlgWriteTransfer_EtwWriteTransfer
            ((longlong)&DAT_1400301f8,param_2,(LPCGUID)0x0,(LPCGUID)0x0,5,local_68);
  FUN_140023f70(local_18 ^ (ulonglong)auStackY152);
  return;
}



void FUN_140001130(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  longlong lVar1;
  longlong lVar2;
  undefined auStackY216 [32];
  _EVENT_DATA_DESCRIPTOR local_a8 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  int local_60;
  undefined4 local_5c;
  undefined *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY216;
  local_28 = param_11;
  lVar2 = -1;
  local_38 = param_10;
  local_60 = 2;
  local_48 = param_9;
  local_20 = 4;
  local_30 = 4;
  local_40 = 8;
  local_58 = (undefined *)*param_8;
  if (local_58 == (undefined *)0x0) {
    local_58 = &DAT_140027b40;
    local_50 = local_60;
  }
  else {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(short *)(local_58 + lVar1 * 2) != 0);
    local_50 = (int)lVar1 * 2 + 2;
  }
  local_4c = 0;
  local_68 = (undefined *)*param_7;
  if (local_68 == (undefined *)0x0) {
    local_68 = &DAT_140027b40;
  }
  else {
    do {
      lVar2 = lVar2 + 1;
    } while (*(short *)(local_68 + lVar2 * 2) != 0);
    local_60 = (int)lVar2 * 2 + 2;
  }
  local_78 = param_6;
  local_5c = 0;
  local_88 = *param_5;
  local_70 = 8;
  local_80 = 0x10;
  _tlgWriteTransfer_EtwWriteTransfer
            ((longlong)&DAT_1400301f8,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_a8);
  FUN_140023f70(local_18 ^ (ulonglong)auStackY216);
  return;
}



// Library Function - Single Match
//  _tlgWriteTransfer_EtwWriteTransfer
// 
// Library: Visual Studio 2019 Release

void _tlgWriteTransfer_EtwWriteTransfer
               (longlong param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
               PEVENT_DATA_DESCRIPTOR param_6)

{
  int local_18;
  uint local_14;
  ULONGLONG local_10;
  
  local_18 = (uint)*param_2 << 0x18;
  local_14 = (uint)*(ushort *)(param_2 + 1);
  local_10 = *(ULONGLONG *)(param_2 + 3);
  param_6->Ptr = *(ULONGLONG *)(param_1 + 8);
  param_6->Size = (uint)**(ushort **)(param_1 + 8);
  param_6->Reserved = 2;
  param_6[1].Ptr = (ULONGLONG)(param_2 + 0xb);
  param_6[1].Size = (uint)*(ushort *)(param_2 + 0xb);
  param_6[1].Reserved = 1;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x20),(PCEVENT_DESCRIPTOR)&local_18,param_3,param_4,
                     param_5,param_6);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Multiple Matches With Different Base Names
//  _TlgEnableCallback
//  _tlgEnableCallback
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void FID_conflict__tlgEnableCallback
               (undefined8 param_1,int param_2,byte param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,int *param_7)

{
  int iVar1;
  
  if (param_7 != (int *)0x0) {
    if (param_2 == 0) {
      *param_7 = 0;
    }
    else if (param_2 == 1) {
      *(undefined8 *)(param_7 + 4) = param_4;
      *(undefined8 *)(param_7 + 6) = param_5;
      iVar1 = 0x100;
      if (param_3 != 0) {
        iVar1 = param_3 + 1;
      }
      *param_7 = iVar1;
    }
    if (*(code **)(param_7 + 10) != (code *)0x0) {
      (**(code **)(param_7 + 10))();
    }
  }
  return;
}



void FUN_140001380(PVOID param_1)

{
  longlong lVar1;
  ULONG UVar2;
  undefined auStack72 [32];
  undefined local_28 [8];
  undefined4 uStack32;
  undefined4 uStack28;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack72;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_28._0_4_ = *(ulong *)(lVar1 + -0x10);
  local_28._4_4_ = *(undefined4 *)(lVar1 + -0xc);
  uStack32 = *(undefined4 *)(lVar1 + -8);
  uStack28 = *(undefined4 *)(lVar1 + -4);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  UVar2 = EventRegister((LPCGUID)local_28,FID_conflict__tlgEnableCallback,param_1,
                        (PREGHANDLE)((longlong)param_1 + 0x20));
  if (UVar2 == 0) {
    EventSetInformation(*(undefined8 *)((longlong)param_1 + 0x20),2,
                        *(undefined2 **)((longlong)param_1 + 8),
                        **(undefined2 **)((longlong)param_1 + 8));
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStack72);
  return;
}



void FUN_140001440(void)

{
  atexit(FUN_140025630);
  return;
}



void FUN_140001460(void)

{
  atexit(FUN_140025660);
  return;
}



void FUN_140001480(void)

{
  DAT_1400312c0 = &PTR_s_WilError_03_1400302a0;
  DAT_1400312e0 = &DAT_1400325f0;
  DAT_140031308 = FUN_140003170;
  return;
}



void FUN_1400014c0(void)

{
  DAT_140031300 = FUN_1400033d0;
  DAT_140031310 = FUN_140003350;
  DAT_140031318 = DebugBreak;
  DAT_140031340 = FUN_140001e30;
  DAT_140031348 = FUN_140001dc0;
  DAT_140031350 = FUN_1400032d0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140001520(void)

{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)&DAT_140030318,0,0);
  _DAT_140030340 = ZEXT816(0);
  _DAT_140030350 = ZEXT816(0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)&DAT_140030360,0,0);
  DAT_1400302b0 = 1;
  _DAT_140030388 = ZEXT816(0);
  _DAT_140030398 = ZEXT816(0);
  _DAT_1400303a8 = ZEXT816(0);
  _DAT_1400303b8 = ZEXT816(0);
  atexit(FUN_1400256e0);
  return;
}



void FUN_1400015b0(void)

{
  atexit(FUN_140025740);
  return;
}



void FUN_1400015d0(void)

{
  DAT_140031360 = FUN_140006420;
  DAT_1400313a0 = FUN_140006600;
  DAT_140031448 = FUN_1400063b0;
  DAT_140031458 = FUN_140006640;
  return;
}



void FUN_140001610(void)

{
  DAT_140031380 = FUN_140006af0;
  return;
}



void FUN_140001630(void)

{
  atexit(FUN_1400257a0);
  return;
}



void FUN_140001650(void)

{
  atexit(FUN_1400257d0);
  return;
}



undefined4 FUN_140001664(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 != (void *)0x0) {
    if ((param_3 != (void *)0x0) && (param_4 <= param_2)) {
      memcpy(param_1,param_3,param_4);
      return 0;
    }
    memset(param_1,0,param_2);
    if (param_3 != (void *)0x0) {
      if (param_4 <= param_2) {
        return 0x16;
      }
      puVar1 = (undefined4 *)_o__errno();
      uVar2 = 0x22;
      goto LAB_140001692;
    }
  }
  puVar1 = (undefined4 *)_o__errno();
  uVar2 = 0x16;
LAB_140001692:
  *puVar1 = uVar2;
  _o__invalid_parameter_noinfo();
  return uVar2;
}



// Library Function - Multiple Matches With Different Base Names
//  long __cdecl StringCchCopyW(unsigned short * __ptr64,unsigned __int64,unsigned short const *
// __ptr64)
//  StringCchCopyW
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint FID_conflict_StringCchCopyW(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0x7ffffffe < param_2 - 1U) {
    uVar4 = 0x80070057;
  }
  if ((int)uVar4 < 0) {
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_2 != 0) {
      lVar5 = 0x7ffffffe - param_2;
      lVar3 = param_3 - (longlong)param_1;
      do {
        if ((lVar5 + param_2 == 0) || (sVar1 = *(short *)(lVar3 + (longlong)param_1), sVar1 == 0))
        break;
        *param_1 = sVar1;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    psVar2 = param_1 + -1;
    if (param_2 != 0) {
      psVar2 = param_1;
    }
    uVar4 = ~-(uint)(param_2 != 0) & 0x8007007a;
    *psVar2 = 0;
  }
  return uVar4;
}



// Library Function - Multiple Matches With Different Base Names
//  long __cdecl StringCchCatW(unsigned short * __ptr64,unsigned __int64,unsigned short const *
// __ptr64)
//  StringCchCatW
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong FID_conflict_StringCchCatW(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0;
  uVar6 = uVar5;
  if (0x7ffffffe < param_2 - 1U) {
    uVar6 = 0x80070057;
  }
  if (-1 < (int)uVar6) {
    psVar2 = param_1;
    lVar4 = param_2;
    if (param_2 != 0) {
      do {
        if (*psVar2 == 0) break;
        psVar2 = psVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar6 = (ulonglong)(~-(uint)(lVar4 != 0) & 0x80070057);
    if (lVar4 != 0) {
      uVar5 = param_2 - lVar4;
    }
  }
  if (-1 < (int)uVar6) {
    psVar2 = param_1 + uVar5;
    lVar4 = param_2 - uVar5;
    if (lVar4 != 0) {
      lVar7 = uVar5 + 0x7ffffffe + (lVar4 - param_2);
      lVar8 = param_3 - (longlong)psVar2;
      do {
        if ((lVar7 == 0) || (sVar1 = *(short *)(lVar8 + (longlong)psVar2), sVar1 == 0)) break;
        *psVar2 = sVar1;
        lVar7 = lVar7 + -1;
        psVar2 = psVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    psVar3 = psVar2 + -1;
    if (lVar4 != 0) {
      psVar3 = psVar2;
    }
    uVar6 = (ulonglong)(~-(uint)(lVar4 != 0) & 0x8007007a);
    *psVar3 = 0;
  }
  return uVar6;
}



int FUN_140001860(wchar_t *param_1,longlong param_2,wchar_t *param_3,undefined8 param_4)

{
  ulonglong _Count;
  int iVar1;
  int iVar2;
  undefined8 local_res20;
  
  iVar2 = 0;
  if (0x7ffffffe < param_2 - 1U) {
    iVar2 = -0x7ff8ffa9;
  }
  if (iVar2 < 0) {
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    _Count = param_2 - 1;
    iVar2 = 0;
    local_res20 = param_4;
    iVar1 = FID_conflict__vsnprintf(param_1,_Count,param_3,(va_list)&local_res20);
    if ((iVar1 < 0) || (_Count < (ulonglong)(longlong)iVar1)) {
      param_1[_Count] = L'\0';
      iVar2 = -0x7ff8ff86;
    }
    else if ((longlong)iVar1 == _Count) {
      param_1[_Count] = L'\0';
    }
  }
  return iVar2;
}



wchar_t * FUN_1400018e0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,undefined8 param_4)

{
  size_t _Count;
  int iVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  lVar2 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (lVar2 - 1U < 0x7fffffff) {
    _Count = lVar2 - 1;
    local_res20 = param_4;
    iVar1 = FID_conflict__vsnprintf(param_1,_Count,param_3,(va_list)&local_res20);
    if (((iVar1 < 0) || (_Count < (ulonglong)(longlong)iVar1)) || ((longlong)iVar1 == _Count)) {
      param_1[_Count] = L'\0';
    }
  }
  else if (lVar2 != 0) {
    *param_1 = L'\0';
  }
  if (param_2 != param_1) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != L'\0');
    param_1 = param_1 + lVar2;
  }
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140001964(wchar_t *param_1,longlong param_2,int *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  undefined auStackY632 [32];
  WCHAR local_238 [256];
  ulonglong local_38;
  
  lVar3 = DAT_1400312d0;
  local_38 = DAT_140030470 ^ (ulonglong)auStackY632;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((lVar3 != 0) && (DAT_1400312e8 != '\0')) {
      (*(code *)lVar3)();
      if (*param_1 != L'\0') goto LAB_140001ba7;
    }
    iVar2 = *param_3;
    pcVar5 = "";
    if (iVar2 == 0) {
      pcVar5 = "Exception";
    }
    else if (iVar2 == 1) {
      pcVar5 = "ReturnHr";
    }
    else if (iVar2 == 2) {
      pcVar5 = "LogHr";
    }
    else if (iVar2 == 3) {
      pcVar5 = "FailFast";
    }
    local_238[0] = L'\0';
    FormatMessageW(0x1200,(LPCVOID)0x0,param_3[1],0x400,local_238,0x100,(va_list *)0x0);
    pwVar1 = param_1 + param_2;
    if (*(longlong *)(param_3 + 0xc) == 0) {
      pwVar4 = FUN_1400018e0(param_1,pwVar1,L"%hs!%p: ",*(undefined8 *)(param_3 + 0x1e));
    }
    else {
      pwVar4 = FUN_1400018e0(param_1,pwVar1,L"%hs(%u)\\%hs!%p: ",*(undefined8 *)(param_3 + 0xc));
    }
    if (*(longlong *)(param_3 + 0x22) != 0) {
      pwVar4 = FUN_1400018e0(pwVar4,pwVar1,L"(caller: %p) ",*(longlong *)(param_3 + 0x22));
    }
    GetCurrentThreadId();
    pwVar4 = FUN_1400018e0(pwVar4,pwVar1,L"%hs(%d) tid(%x) %08X %ws",pcVar5);
    if (((*(longlong *)(param_3 + 4) != 0) || (*(longlong *)(param_3 + 0x10) != 0)) ||
       (*(longlong *)(param_3 + 10) != 0)) {
      pwVar4 = FUN_1400018e0(pwVar4,pwVar1,L"    ",pcVar5);
      if (*(longlong *)(param_3 + 4) != 0) {
        pwVar4 = FUN_1400018e0(pwVar4,pwVar1,L"Msg:[%ws] ",*(longlong *)(param_3 + 4));
      }
      if (*(longlong *)(param_3 + 0x10) != 0) {
        pwVar4 = FUN_1400018e0(pwVar4,pwVar1,L"CallContext:[%hs] ",*(longlong *)(param_3 + 0x10));
      }
      lVar3 = *(longlong *)(param_3 + 10);
      if (*(longlong *)(param_3 + 8) == 0) {
        if (lVar3 == 0) {
          FUN_1400018e0(pwVar4,pwVar1,L"\n",0);
        }
        else {
          FUN_1400018e0(pwVar4,pwVar1,L"[%hs]\n",lVar3);
        }
      }
      else {
        FUN_1400018e0(pwVar4,pwVar1,L"[%hs(%hs)]\n",lVar3);
      }
    }
  }
LAB_140001ba7:
  FUN_140023f70(local_38 ^ (ulonglong)auStackY632);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140001bd8(undefined4 param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = DAT_140031438 + 1;
  _DAT_140031370 = param_1;
  DAT_140031438 = DAT_140031438 + 1;
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140001bf8(undefined4 param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = DAT_140031460 + 1;
  _DAT_14003143c = param_1;
  DAT_140031460 = DAT_140031460 + 1;
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140001c18(undefined4 param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = DAT_140031428 + 1;
  DAT_140031428 = DAT_140031428 + 1;
  _DAT_140031478 = param_1;
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140001c40(undefined4 param_1)

{
  _DAT_140031378 = param_1;
  return 1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140001c54(void)

{
  code *pcVar1;
  
  if (DAT_140031340 != 0) {
    (*(code *)DAT_140031340)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
  return;
}



void FUN_140001c80(LPCWSTR param_1,uint *param_2,char *param_3,longlong param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  CHAR *pCVar4;
  longlong lVar5;
  longlong lVar6;
  undefined auStack360 [32];
  HMODULE local_148 [2];
  CHAR local_138;
  char acStack311 [271];
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack360;
  local_148[0] = (HMODULE)0x0;
  if ((param_1 == (LPCWSTR)0x0) || (BVar1 = GetModuleHandleExW(6,param_1,local_148), BVar1 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = -(uint)(param_1 != (LPCWSTR)0x0) & (int)param_1 - (int)local_148[0];
    }
    if ((param_3 != (char *)0x0) &&
       (DVar2 = GetModuleFileNameA(local_148[0],&local_138,0x104), DVar2 != 0)) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while ((&local_138)[lVar6 + 1] != '\0');
      for (pCVar4 = &local_138 + lVar6 + 1; (&local_138 < pCVar4 && (pCVar4[-1] != '\\'));
          pCVar4 = pCVar4 + -1) {
      }
      if (param_4 - 1U < 0x7fffffff) {
        lVar6 = 0x7ffffffe - param_4;
        lVar5 = (longlong)pCVar4 - (longlong)param_3;
        do {
          if ((lVar6 + param_4 == 0) || (param_3[lVar5] == '\0')) break;
          *param_3 = param_3[lVar5];
          param_3 = param_3 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        pcVar3 = param_3 + -1;
        if (param_4 != 0) {
          pcVar3 = param_3;
        }
        *pcVar3 = '\0';
      }
      else if (param_4 != 0) {
        *param_3 = '\0';
      }
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_140023f70(local_28 ^ (ulonglong)auStack360);
  return;
}



undefined * FUN_140001dc0(void)

{
  if (DAT_140031374 == '\0') {
    FUN_140001c80((LPCWSTR)FUN_140001c40,(uint *)0x0,&DAT_1400313c0,0x40);
    DAT_140031374 = '\x01';
  }
  return &DAT_1400313c0;
}



void DebugBreak(void)

{
                    // WARNING: Could not recover jumptable at 0x000140001e10. Too many branches
                    // WARNING: Treating indirect jump as call
  DebugBreak();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140001e30(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint FUN_140001e9c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else if (((DAT_140031350 == 0) || (uVar1 = (*(code *)DAT_140031350)(), uVar1 == 0)) ||
            (uVar1 == 0x13d)) {
      uVar2 = param_1 | 0x10000000;
    }
    else {
      uVar2 = uVar1 & 0xffff | 0x80070000;
      if ((int)uVar1 < 1) {
        uVar2 = uVar1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint FUN_140001efc(void)

{
  DWORD DVar1;
  uint uVar2;
  int in_stack_00000000;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_1400023f0(0,0,0,0,0,in_stack_00000000,2);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140001f60(void)

{
  if (DAT_140031338 != 0) {
    (*(code *)DAT_140031338)();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140001f84(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8,short *param_9,
                  undefined8 param_10,wchar_t *param_11,undefined8 param_12,undefined *param_13,
                  undefined8 param_14,int *param_15)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  BOOL BVar5;
  undefined8 uVar6;
  short *psVar7;
  int iVar8;
  char cVar9;
  
  iVar8 = 0;
  *param_11 = L'\0';
  *param_13 = 0;
  if (param_7 == 0) {
    iVar8 = FUN_140001bd8(param_8);
  }
  else if (param_7 == 1) {
    iVar8 = FUN_140001bf8(param_8);
  }
  else if (param_7 == 2) {
    if (-1 < param_8) {
      param_8 = -0x7ff8fd64;
      FUN_1400023f0(param_1,param_2,param_3,param_4,param_5,(int)param_6,2);
    }
    iVar8 = FUN_140001c18(param_8);
  }
  else if (param_7 == 3) {
    uVar6 = FUN_140001c40(param_8);
    iVar8 = (int)uVar6;
  }
  *param_15 = param_7;
  param_15[1] = param_8;
  LOCK();
  iVar3 = DAT_140031440 + 1;
  psVar7 = (short *)0x0;
  DAT_140031440 = DAT_140031440 + 1;
  param_15[2] = iVar3;
  if ((param_9 == (short *)0x0) || (*param_9 == 0)) {
    param_9 = psVar7;
  }
  *(short **)(param_15 + 4) = param_9;
  DVar4 = GetCurrentThreadId();
  *(undefined8 *)(param_15 + 0xc) = param_3;
  param_15[6] = DVar4;
  *(undefined8 *)(param_15 + 8) = param_5;
  *(undefined8 *)(param_15 + 0x20) = param_6;
  *(undefined8 *)(param_15 + 0x22) = param_1;
  lVar2 = DAT_140031348;
  param_15[0xe] = param_2;
  param_15[0xf] = iVar8;
  *(undefined8 *)(param_15 + 10) = param_4;
  *(undefined8 *)(param_15 + 0x10) = 0;
  *(undefined (*) [16])(param_15 + 0x12) = ZEXT816(0);
  *(undefined (*) [16])(param_15 + 0x16) = ZEXT816(0);
  *(undefined (*) [16])(param_15 + 0x1a) = ZEXT816(0);
  if (lVar2 != 0) {
    psVar7 = (short *)(*(code *)lVar2)();
  }
  *(short **)(param_15 + 0x1e) = psVar7;
  if (DAT_140031308 != 0) {
    (*(code *)DAT_140031308)();
  }
  if (DAT_1400312f8 != 0) {
    (*(code *)DAT_1400312f8)();
  }
  if (DAT_140031328 != 0) {
    (*(code *)DAT_140031328)();
  }
  if (-1 < param_15[1]) {
    if (param_7 != 3) {
      FUN_14000266c();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[1] = -0x7fff0001;
  }
  if (DAT_1400312c8 == '\0') {
    if (DAT_1400312b8 == 0) {
      BVar5 = IsDebuggerPresent();
      cVar9 = BVar5 != 0;
    }
    else {
      cVar9 = (*(code *)DAT_1400312b8)();
    }
    if (cVar9 == '\0') {
      if ((DAT_1400312d0 != 0) && (DAT_1400312e8 == '\0')) {
        (*(code *)DAT_1400312d0)();
      }
      goto LAB_140002202;
    }
  }
  if ((DAT_1400312d0 != 0) && (DAT_1400312e8 == '\0')) {
    (*(code *)DAT_1400312d0)();
  }
  if (*param_11 == L'\0') {
    FUN_140001964(param_11,0x800,param_15);
  }
  OutputDebugStringW(param_11);
LAB_140002202:
  if ((DAT_1400312d8 != '\0') && (DAT_140031318 != 0)) {
    (*(code *)DAT_140031318)();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140002248(longlong param_1)

{
  code *pcVar1;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  
  if (DAT_140031358 != 0) {
    (*(code *)DAT_140031358)();
  }
  memset(&local_a8,0,0x98);
  local_98 = *(longlong *)(param_1 + 0x80);
  local_90 = 1;
  local_a8 = 0xc0000409;
  local_a4 = 1;
  local_88 = 7;
  if (local_98 == 0) {
    FUN_140001c54();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_80 = (longlong)*(int *)(param_1 + 4);
  local_78 = (ulonglong)*(uint *)(param_1 + 0x38);
  local_90 = 3;
  FUN_140001c54();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe
// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400022e4(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_res20;
  undefined auStackY5440 [32];
  undefined8 in_stack_ffffffffffffeb08;
  undefined8 in_stack_ffffffffffffeb18;
  undefined8 in_stack_ffffffffffffeb28;
  int local_14c0 [36];
  undefined local_1430 [1024];
  wchar_t local_1030 [2048];
  ulonglong local_30;
  undefined8 uStack24;
  
  uStack24 = 0x1400022f1;
  local_30 = DAT_140030470 ^ (ulonglong)auStackY5440;
  if ((param_6 == 0) && (DAT_140031320 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FUN_140001f84(param_1,param_2,param_3,param_4,local_res20,param_5,param_6,param_7,(short *)0x0,
                in_stack_ffffffffffffeb08,local_1030,in_stack_ffffffffffffeb18,local_1430,
                in_stack_ffffffffffffeb28,local_14c0);
  if (param_6 != 3) {
    if (param_6 != 0) {
      FUN_140023f70(local_30 ^ (ulonglong)auStackY5440);
      return;
    }
    if (bVar2) {
      (*(code *)DAT_140031320)();
    }
    FUN_140001f60();
    FUN_140002248((longlong)local_14c0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_140002248((longlong)local_14c0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_1400023f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  FUN_1400022e4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



DWORD FUN_140002438(undefined8 param_1,int param_2,undefined param_3,undefined param_4,
                   undefined param_5,undefined8 param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_1400023f0(param_1,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",0,
                  0,(int)param_6,2);
    DVar1 = 0x29c;
  }
  FUN_1400022e4(param_1,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",0,0,
                (int)param_6,3);
  return DVar1;
}



uint FUN_1400024f8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = GetLastError();
  if (uVar2 == 0) {
    FUN_1400023f0(param_1,param_2,param_3,0,0,param_6,2);
    uVar2 = 0x29c;
  }
  uVar1 = uVar2 & 0xffff | 0x80070000;
  if ((int)uVar2 < 1) {
    uVar1 = uVar2;
  }
  FUN_1400022e4(param_1,param_2,param_3,0,0,param_6,1);
  return uVar1;
}



void FUN_1400025bc(undefined8 param_1,int param_2,undefined8 param_3)

{
  int in_stack_00000000;
  
  FUN_1400023f0(param_1,param_2,param_3,0,0,in_stack_00000000,1);
  return;
}



void FUN_1400025f4(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int in_stack_00000000;
  undefined8 in_stack_ffffffffffffffd8;
  
  FUN_1400024f8(param_1,param_2,param_3,param_4,in_stack_ffffffffffffffd8,in_stack_00000000);
  return;
}



void FUN_140002614(undefined8 param_1,int param_2)

{
  undefined in_R8B;
  undefined in_R9B;
  undefined8 in_stack_00000000;
  undefined in_stack_ffffffffffffffd8;
  
  FUN_140002438(param_1,param_2,in_R8B,in_R9B,in_stack_ffffffffffffffd8,in_stack_00000000);
  return;
}



void FUN_140002634(undefined8 param_1,int param_2,undefined8 param_3)

{
  int in_stack_00000000;
  
  FUN_1400023f0(param_1,param_2,param_3,0,0,in_stack_00000000,3);
  return;
}



void FUN_14000266c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
  return;
}



void FUN_14000267c(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined8 in_stack_00000000;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_140002614(in_stack_00000000,0x926);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_1400026b0(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined8 in_stack_00000000;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_140002614(in_stack_00000000,0x930);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_1400026e0(HANDLE *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  
  pvVar1 = *param_1;
  if (pvVar1 != (HANDLE)0x0) {
    DVar2 = GetLastError();
    FUN_14000267c(pvVar1);
    SetLastError(DVar2);
  }
  *param_1 = (HANDLE)0x0;
  pvVar1 = param_1[1];
  if (pvVar1 != (HANDLE)0x0) {
    DVar2 = GetLastError();
    FUN_14000267c(pvVar1);
    SetLastError(DVar2);
  }
  param_1[1] = (HANDLE)0x0;
  return;
}



void FUN_14000276c(HANDLE *param_1,longlong param_2,ulonglong param_3)

{
  HANDLE pvVar1;
  code *pcVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 in_stack_00000000;
  undefined auStackY632 [32];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStackY632;
  if ((param_3 & 3) != 0) {
    FUN_14000266c();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FID_conflict_StringCchCopyW(local_248,0x104,param_2);
  FID_conflict_StringCchCatW(local_248,0x104,(longlong)&DAT_140027648);
  uVar6 = (uint)(param_3 >> 2) & 0x7fffffff;
  uVar7 = 1;
  if ((param_3 >> 2 & 0x7fffffff) != 0) {
    uVar7 = uVar6;
  }
  pvVar4 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,uVar6,uVar7,local_248,0,0x1f0003);
  if (pvVar4 == (HANDLE)0x0) {
    uVar7 = FUN_140001efc();
  }
  else {
    pvVar1 = *param_1;
    if (pvVar1 != (HANDLE)0x0) {
      DVar3 = GetLastError();
      FUN_14000267c(pvVar1);
      SetLastError(DVar3);
    }
    *param_1 = pvVar4;
    uVar7 = 0;
  }
  if ((int)uVar7 < 0) {
    iVar5 = 0x85;
  }
  else {
    FID_conflict_StringCchCatW(local_248,0x104,(longlong)&DAT_140027650);
    uVar7 = (uint)(param_3 >> 0x20);
    uVar8 = uVar7 >> 1;
    uVar6 = 1;
    if (uVar8 != 0) {
      uVar6 = uVar8;
    }
    pvVar4 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,uVar7 >> 1,uVar6,local_248,0,0x1f0003);
    if (pvVar4 == (HANDLE)0x0) {
      uVar7 = FUN_140001efc();
    }
    else {
      pvVar1 = param_1[1];
      if (pvVar1 != (HANDLE)0x0) {
        DVar3 = GetLastError();
        FUN_14000267c(pvVar1);
        SetLastError(DVar3);
      }
      param_1[1] = pvVar4;
      uVar7 = 0;
    }
    if (-1 < (int)uVar7) goto LAB_14000290b;
    iVar5 = 0x89;
  }
  FUN_1400025bc(in_stack_00000000,iVar5,&DAT_140027608);
LAB_14000290b:
  FUN_140023f70(local_38 ^ (ulonglong)auStackY632);
  return;
}



undefined8 FUN_140002948(HANDLE param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 in_stack_00000000;
  int local_res18 [2];
  int local_res20 [2];
  
  DVar1 = WaitForSingleObject(param_1,0);
  if (DVar1 == 0xffffffff) {
    iVar4 = 0x95;
    goto LAB_140002970;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_res18[0] = 0;
    if (DVar1 == 0) {
      BVar2 = ReleaseSemaphore(param_1,1,local_res18);
      if (BVar2 == 0) {
        iVar4 = 0x9e;
LAB_140002970:
        uVar3 = FUN_1400025f4(in_stack_00000000,iVar4,&DAT_140027608,param_4);
        return uVar3;
      }
      local_res18[0] = local_res18[0] + 1;
      BVar2 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar2 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_140002a91:
        *param_2 = local_res18[0];
        return 0;
      }
      iVar4 = 0xa3;
    }
    else {
      local_res20[0] = 0;
      BVar2 = ReleaseSemaphore(param_1,1,local_res20);
      if (BVar2 == 0) {
        iVar4 = 0xad;
        goto LAB_140002970;
      }
      if (local_res20[0] == 0) {
        BVar2 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar2 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb4;
            goto LAB_140002970;
          }
          if (DVar1 == 0) goto LAB_140002a91;
          iVar4 = 0xb5;
        }
        else {
          iVar4 = 0xb1;
        }
      }
      else {
        iVar4 = 0xae;
      }
    }
  }
  else {
    iVar4 = 0x96;
  }
  FUN_1400025bc(in_stack_00000000,iVar4,&DAT_140027608);
  return 0x8000ffff;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140002ad0(longlong param_1,undefined *param_2,undefined4 param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  LPVOID lpMem;
  char *pcVar5;
  short *psVar6;
  longlong lVar7;
  HANDLE pvVar8;
  LPVOID pvVar9;
  longlong lVar10;
  void *_Dst;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  ppvVar1 = (void **)(param_1 + 0x10);
  ppvVar2 = (void **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  ppvVar3 = (void **)(param_1 + 0x38);
  *ppvVar1 = (void *)0x0;
  lVar11 = -1;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x38);
  *(undefined *)(param_1 + 0x1a) = *param_2;
  *ppvVar2 = (void *)0x0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x88);
  *ppvVar3 = (void *)0x0;
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar7 = 1;
  }
  else {
    lVar13 = -1;
    do {
      lVar7 = lVar13;
      lVar13 = lVar7 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0x30) + lVar13) != '\0');
    lVar7 = lVar7 + 2;
  }
  if (*(longlong *)(param_2 + 0x78) == 0) {
    lVar10 = 1;
  }
  else {
    lVar13 = -1;
    do {
      lVar10 = lVar13;
      lVar13 = lVar10 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0x78) + lVar13) != '\0');
    lVar10 = lVar10 + 2;
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar13 = 2;
  }
  else {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (*(short *)(*(longlong *)(param_2 + 0x10) + lVar13 * 2) != 0);
    lVar13 = lVar13 * 2 + 2;
  }
  uVar12 = lVar13 + lVar10 + lVar7;
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(ulonglong *)(param_1 + 0x48) < uVar12)) {
    pvVar8 = GetProcessHeap();
    pvVar9 = HeapAlloc(pvVar8,8,uVar12);
    lVar13 = DAT_140031300;
    if (DAT_140031300 != 0) {
      GetProcessHeap();
      (*(code *)lVar13)();
    }
    if (pvVar9 != (LPVOID)0x0) {
      lpMem = *(LPVOID *)(param_1 + 0x40);
      pvVar8 = GetProcessHeap();
      HeapFree(pvVar8,0,lpMem);
      *(LPVOID *)(param_1 + 0x40) = pvVar9;
      *(ulonglong *)(param_1 + 0x48) = uVar12;
    }
  }
  _Dst = *(void **)(param_1 + 0x40);
  if (_Dst == (void *)0x0) {
    return;
  }
  uVar12 = *(ulonglong *)(param_1 + 0x48);
  pcVar5 = *(char **)(param_2 + 0x30);
  pvVar4 = (void *)(uVar12 + (longlong)_Dst);
  if (((_Dst == pvVar4) || (pcVar5 == (char *)0x0)) || (*pcVar5 == '\0')) {
LAB_140002c99:
    if (ppvVar1 != (void **)0x0) {
      *ppvVar1 = (void *)0x0;
    }
  }
  else {
    lVar13 = -1;
    do {
      lVar7 = lVar13;
      lVar13 = lVar7 + 1;
    } while (pcVar5[lVar13] != '\0');
    uVar14 = lVar7 + 2;
    if (uVar12 < uVar14) goto LAB_140002c99;
    if (uVar14 != 0) {
      FUN_140001664(_Dst,uVar12,pcVar5,uVar14);
    }
    if (ppvVar1 != (void **)0x0) {
      *ppvVar1 = _Dst;
    }
    _Dst = (void *)((longlong)_Dst + uVar14);
  }
  pcVar5 = *(char **)(param_2 + 0x78);
  if (((_Dst == pvVar4) || (pcVar5 == (char *)0x0)) || (*pcVar5 == '\0')) {
LAB_140002cf1:
    if (ppvVar2 != (void **)0x0) {
      *ppvVar2 = (void *)0x0;
    }
  }
  else {
    lVar13 = -1;
    do {
      lVar7 = lVar13;
      lVar13 = lVar7 + 1;
    } while (pcVar5[lVar13] != '\0');
    uVar12 = lVar7 + 2;
    if ((ulonglong)((longlong)pvVar4 - (longlong)_Dst) < uVar12) goto LAB_140002cf1;
    if (uVar12 != 0) {
      FUN_140001664(_Dst,(longlong)pvVar4 - (longlong)_Dst,pcVar5,uVar12);
    }
    if (ppvVar2 != (void **)0x0) {
      *ppvVar2 = _Dst;
    }
    _Dst = (void *)((longlong)_Dst + uVar12);
  }
  psVar6 = *(short **)(param_2 + 0x10);
  if (((_Dst != pvVar4) && (psVar6 != (short *)0x0)) && (*psVar6 != 0)) {
    do {
      lVar11 = lVar11 + 1;
    } while (psVar6[lVar11] != 0);
    uVar12 = lVar11 * 2 + 2;
    if (uVar12 <= (ulonglong)((longlong)pvVar4 - (longlong)_Dst)) {
      if (uVar12 != 0) {
        FUN_140001664(_Dst,(longlong)pvVar4 - (longlong)_Dst,psVar6,uVar12);
      }
      if (ppvVar3 != (void **)0x0) {
        *ppvVar3 = _Dst;
      }
      _Dst = (void *)((longlong)_Dst + uVar12);
      goto LAB_140002d50;
    }
  }
  if (ppvVar3 != (void **)0x0) {
    *ppvVar3 = (void *)0x0;
  }
LAB_140002d50:
  memset(_Dst,0,(longlong)pvVar4 - (longlong)_Dst);
  return;
}



void FUN_140002d84(longlong param_1)

{
  LPVOID *ppvVar1;
  ushort uVar2;
  LPVOID lpMem;
  HANDLE pvVar3;
  LPVOID *lpMem_00;
  LPVOID *ppvVar4;
  
  lpMem_00 = *(LPVOID **)(param_1 + 0x18);
  uVar2 = *(ushort *)(param_1 + 0x20);
  if (lpMem_00 != lpMem_00 + (ulonglong)uVar2 * 10) {
    ppvVar4 = lpMem_00 + 8;
    do {
      lpMem = *ppvVar4;
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
      *ppvVar4 = (LPVOID)0x0;
      ppvVar4[1] = (LPVOID)0x0;
      ppvVar1 = ppvVar4 + 2;
      ppvVar4 = ppvVar4 + 10;
    } while (ppvVar1 != lpMem_00 + (ulonglong)uVar2 * 10);
    lpMem_00 = *(LPVOID **)(param_1 + 0x18);
  }
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,lpMem_00);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140002e44(longlong param_1,undefined *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  HANDLE hHeap;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
    if (iVar2 != 0) {
      hHeap = GetProcessHeap();
      piVar5 = (int *)HeapAlloc(hHeap,8,400);
      lVar4 = DAT_140031300;
      if (DAT_140031300 != 0) {
        GetProcessHeap();
        (*(code *)lVar4)();
      }
      *(int **)(param_1 + 0x18) = piVar5;
      if (piVar5 != (int *)0x0) {
        piVar6 = piVar5 + 100;
        *(undefined4 *)(param_1 + 0x20) = 5;
        if (piVar5 != piVar6) {
          do {
            *(undefined2 *)piVar5 = 0x50;
            piVar5 = piVar5 + 0x14;
          } while (piVar5 != piVar6);
          piVar5 = *(int **)(param_1 + 0x18);
        }
      }
    }
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  if ((iVar2 != 0) && (piVar5 != piVar5 + (ulonglong)*(ushort *)(param_1 + 0x20) * 0x14)) {
    piVar6 = piVar5 + 2;
    do {
      if ((*(uint *)(param_1 + 0x10) <= (uint)piVar6[-1] && piVar6[-1] != *(uint *)(param_1 + 0x10))
         && (*piVar6 == *(int *)(param_2 + 4))) {
        return;
      }
      piVar1 = piVar6 + 0x12;
      piVar6 = piVar6 + 0x14;
    } while (piVar1 != piVar5 + (ulonglong)*(ushort *)(param_1 + 0x20) * 0x14);
  }
  uVar3 = (ulonglong)(*(ushort *)(param_1 + 0x22) + 1) % (ulonglong)*(ushort *)(param_1 + 0x20);
  *(short *)(param_1 + 0x22) = (short)uVar3;
  piVar6 = *(int **)(param_1 + 8);
  LOCK();
  iVar2 = *piVar6;
  *piVar6 = *piVar6 + 1;
  FUN_140002ad0((longlong)(piVar5 + uVar3 * 0x14),param_2,iVar2 + 1);
  return;
}



DWORD * FUN_140002f9c(void)

{
  undefined8 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  ulonglong uVar5;
  int *local_res10 [3];
  
  puVar1 = DAT_1400312c0;
  pDVar4 = (DWORD *)0x0;
  if (DAT_1400312c0 != (undefined8 *)0x0) {
    if (DAT_1400312c0[1] == 0) {
      local_res10[0] = (int *)0x0;
      iVar2 = FUN_14000709c(*DAT_1400312c0,local_res10);
      if ((-1 < iVar2) && (puVar1[1] == 0)) {
        puVar1[1] = local_res10[0];
      }
    }
    uVar5 = -(ulonglong)(puVar1[1] != 0) & puVar1[1] + 0x20;
    if (uVar5 != 0) {
      DVar3 = GetCurrentThreadId();
      for (pDVar4 = *(DWORD **)(uVar5 + 8 + ((ulonglong)DVar3 + ((ulonglong)DVar3 / 10) * -10) * 8);
          pDVar4 != (DWORD *)0x0; pDVar4 = *(DWORD **)(pDVar4 + 2)) {
        if (*pDVar4 == DVar3) {
          pDVar4 = pDVar4 + 4;
          break;
        }
      }
      if ((pDVar4 != (DWORD *)0x0) && (*(longlong *)(pDVar4 + 2) == 0)) {
        *(ulonglong *)(pDVar4 + 2) = uVar5 + 4;
      }
    }
  }
  return pDVar4;
}



ulonglong FUN_140003068(longlong param_1,longlong param_2,undefined *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined4 extraout_var;
  longlong lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  uVar6 = in_RAX & 0xffffffffffffff00;
  *param_3 = 0;
  if (param_2 != 0) {
    uVar6 = FUN_140003068(param_1,*(longlong *)(param_2 + 0x10),param_3,param_4);
    piVar1 = *(int **)(param_2 + 0x20);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        LOCK();
        iVar4 = DAT_140030494 + 1;
        DAT_140030494 = DAT_140030494 + 1;
        *piVar1 = iVar4;
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar4 = piVar1[1];
        iVar2 = piVar1[2];
        iVar3 = piVar1[3];
        *(int *)(param_1 + 0x48) = *piVar1;
        *(int *)(param_1 + 0x4c) = iVar4;
        *(int *)(param_1 + 0x50) = iVar2;
        *(int *)(param_1 + 0x54) = iVar3;
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(piVar1 + 4);
      }
      iVar4 = piVar1[1];
      iVar2 = piVar1[2];
      iVar3 = piVar1[3];
      lVar7 = -1;
      *(int *)(param_1 + 0x60) = *piVar1;
      *(int *)(param_1 + 100) = iVar4;
      *(int *)(param_1 + 0x68) = iVar2;
      *(int *)(param_1 + 0x6c) = iVar3;
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(piVar1 + 4);
      do {
        lVar7 = lVar7 + 1;
      } while (param_3[lVar7] != '\0');
      puVar11 = param_3 + lVar7;
      puVar8 = param_3 + (param_4 - (longlong)puVar11);
      if (2 < (longlong)puVar8) {
        *puVar11 = 0x5c;
        puVar11 = puVar11 + 1;
        lVar7 = -1;
        do {
          lVar9 = lVar7;
          lVar7 = lVar9 + 1;
        } while (*(char *)((longlong)*(void **)(piVar1 + 2) + lVar7) != '\0');
        puVar10 = (undefined *)(lVar9 + 2);
        puVar13 = param_3 + (param_4 - (longlong)puVar11);
        puVar12 = puVar13;
        if (puVar10 < puVar13) {
          puVar12 = puVar10;
        }
        if (puVar12 != (undefined *)0x0) {
          uVar5 = FUN_140001664(puVar11,(ulonglong)puVar13,*(void **)(piVar1 + 2),(ulonglong)puVar12
                               );
          puVar8 = (undefined *)CONCAT44(extraout_var,uVar5);
        }
        puVar11[(longlong)(puVar12 + -1)] = 0;
      }
      uVar6 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
    }
  }
  return uVar6;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140003170(undefined *param_1,undefined *param_2,longlong param_3)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  DWORD *pDVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *param_2 = 0;
  lVar7 = DAT_1400312e0;
  if (DAT_1400312e0 != 0) {
    DVar2 = GetCurrentThreadId();
    for (pDVar4 = *(DWORD **)(lVar7 + ((ulonglong)DVar2 + ((ulonglong)DVar2 / 10) * -10) * 8);
        pDVar4 != (DWORD *)0x0; pDVar4 = *(DWORD **)(pDVar4 + 2)) {
      if (*pDVar4 == DVar2) {
        plVar6 = (longlong *)(pDVar4 + 4);
        goto LAB_1400031eb;
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1400031eb:
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    *param_2 = 0;
    uVar3 = FUN_140003068((longlong)param_1,*plVar6,param_2,param_3);
    if ((char)uVar3 != '\0') {
      *(undefined **)(param_1 + 0x40) = param_2;
    }
    lVar7 = *plVar6;
    do {
      (**(code **)**(undefined8 **)(lVar7 + 8))();
      lVar7 = *(longlong *)(lVar7 + 0x10);
    } while (lVar7 != 0);
  }
  if (DAT_1400312f0 != 0) {
    (*(code *)DAT_1400312f0)();
  }
  DVar2 = GetCurrentThreadId();
  if (DAT_14003137c != DVar2) {
    LOCK();
    iVar1 = DAT_140031390 + 1;
    iVar5 = DAT_140031390 + 1;
    DAT_140031390 = iVar1;
    if (iVar5 < 4) {
      DAT_14003137c = DVar2;
      pDVar4 = FUN_140002f9c();
      if (pDVar4 != (DWORD *)0x0) {
        FUN_140002e44((longlong)pDVar4,param_1);
      }
      DAT_14003137c = 0;
    }
    LOCK();
    DAT_140031390 = DAT_140031390 + -1;
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined4 FUN_1400032d0(void)

{
  undefined4 uVar1;
  
  if (DAT_140031430 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_140031430 = GetProcAddress(DAT_140031410,"RtlNtStatusToDosErrorNoTeb");
    if (DAT_140031430 == (FARPROC)0x0) {
      return 0;
    }
  }
  uVar1 = (*DAT_140031430)();
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

ulonglong FUN_140003350(void)

{
  FARPROC pFVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (DAT_140031368 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    pFVar1 = GetProcAddress(DAT_140031410,"RtlDllShutdownInProgress");
    DAT_140031368 = pFVar1;
    if (pFVar1 == (FARPROC)0x0) goto LAB_1400033b4;
  }
  pFVar1 = (FARPROC)(*DAT_140031368)();
  bVar2 = (byte)pFVar1;
LAB_1400033b4:
  return (ulonglong)pFVar1 & 0xffffffffffffff00 | (ulonglong)bVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined4 FUN_1400033d0(void)

{
  undefined4 uVar1;
  
  if (DAT_140031400 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_140031400 = GetProcAddress(DAT_140031410,"RtlDisownModuleHeapAllocation");
    if (DAT_140031400 == (FARPROC)0x0) {
      return 0;
    }
  }
  uVar1 = (*DAT_140031400)();
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_140003464(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (DAT_1400313a8 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_1400313a8 = GetProcAddress(DAT_140031410,"NtQueryWnfStateData");
    if (DAT_1400313a8 == (FARPROC)0x0) {
      return 0xc0000139;
    }
  }
  uVar1 = (*DAT_1400313a8)();
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_14000350c(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
             undefined param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  if (DAT_140031420 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_140031420 = GetProcAddress(DAT_140031410,"NtUpdateWnfStateData");
    if (DAT_140031420 == (FARPROC)0x0) {
      return 0xc0000139;
    }
  }
  uVar1 = (*DAT_140031420)();
  return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400035c8(uint *param_1,uint param_2,undefined8 param_3,undefined (*param_4) [16])

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  HANDLE pvVar4;
  undefined (*pauVar5) [16];
  undefined uVar6;
  ulonglong uVar7;
  undefined (*lpMem) [16];
  undefined uVar8;
  SIZE_T SVar9;
  ulonglong uVar10;
  ulonglong dwBytes;
  undefined (*lpMem_00) [16];
  undefined auStackY152 [32];
  uint local_68;
  int local_64;
  undefined (*local_60) [16];
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140030470 ^ (ulonglong)auStackY152;
  local_58 = local_58 & 0xffffffff00000000 | (ulonglong)param_2;
  uVar6 = 0;
  uVar8 = 0x50;
  local_60 = param_4;
  memset(param_1 + 2,0,0x50);
  lpMem = (undefined (*) [16])0x0;
  *param_1 = param_2;
  param_1[1] = 0;
  local_50 = 0x418a073aa3bc88f5;
  dwBytes = -(ulonglong)(param_4 != (undefined (*) [16])0x0) & 200;
  if ((int)local_58 == 0) {
    local_50 = 0x418a073aa3bc7c75;
  }
  local_68 = -(uint)(param_4 != (undefined (*) [16])0x0) & 200;
  uVar3 = FUN_140003464((char)&local_50,uVar6,uVar8,(char)param_1 + '\b',param_4,&local_68);
  iVar2 = (int)uVar3;
  pauVar5 = lpMem;
  lpMem_00 = lpMem;
  if (iVar2 != 0) goto LAB_140003718;
  pauVar5 = local_60;
  lpMem_00 = (undefined (*) [16])0x0;
  if (local_60 != (undefined (*) [16])0x0) goto LAB_140003718;
  do {
    if (dwBytes < 200) {
      dwBytes = 200;
    }
    if (dwBytes < local_68) {
      dwBytes = (ulonglong)local_68;
    }
    if (dwBytes < 0x10) {
      dwBytes = 0x10;
    }
    if (lpMem != (undefined (*) [16])0x0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,lpMem);
    }
    pvVar4 = GetProcessHeap();
    uVar6 = 0;
    SVar9 = dwBytes;
    pauVar5 = (undefined (*) [16])HeapAlloc(pvVar4,0,dwBytes);
    if (pauVar5 == (undefined (*) [16])0x0) goto LAB_1400038ac;
    local_68 = (uint)dwBytes;
    uVar3 = FUN_140003464((char)&local_50,uVar6,(char)SVar9,(char)param_1 + '\b',pauVar5,&local_68);
    iVar2 = (int)uVar3;
    lpMem_00 = pauVar5;
LAB_140003718:
    lpMem = lpMem_00;
  } while (iVar2 == -0x3fffffdd);
  if ((iVar2 != 0) || (pauVar5 == (undefined (*) [16])0x0)) {
    if (lpMem_00 != (undefined (*) [16])0x0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,lpMem_00);
    }
    goto LAB_1400038ac;
  }
  uVar10 = (ulonglong)local_68;
  if (4 < local_68) {
    *(undefined *)(param_1 + 3) = (*pauVar5)[0];
  }
  if (((local_68 < 0x10) || (*(char *)(param_1 + 3) != '\x02')) ||
     (*(ushort *)(*pauVar5 + 2) < 0x10)) {
LAB_14000382d:
    local_68 = 0x10;
    *pauVar5 = ZEXT816(0);
    *(undefined4 *)*pauVar5 = 0x100202;
    uVar10 = 0x10;
    *(undefined (**) [16])(param_1 + 6) = pauVar5;
    uVar1 = *(ushort *)(*pauVar5 + 2);
    *(undefined **)(param_1 + 8) = *pauVar5 + uVar1;
    *(undefined **)(param_1 + 10) = *pauVar5 + uVar1 + (ulonglong)*(ushort *)(*pauVar5 + 4) * 0xc;
  }
  else {
    uVar7 = (ulonglong)*(ushort *)(*pauVar5 + 6) * 0x10 + (ulonglong)*(ushort *)(*pauVar5 + 4) * 0xc
            + (ulonglong)*(ushort *)(*pauVar5 + 2);
    if (uVar10 < uVar7) goto LAB_14000382d;
    local_64 = 0;
    if (*(ushort *)(*pauVar5 + 4) != 0) {
      local_58 = 0x418a073aa3bc90f5;
      if ((int)local_58 == 0) {
        local_58 = 0x418a073aa3bc8075;
      }
      local_60 = (undefined (*) [16])((ulonglong)local_60 & 0xffffffff00000000);
      FUN_140003464((char)&local_58,(char)uVar7,(char)local_68,(char)&local_64,0,&local_60);
      uVar10 = (ulonglong)local_68;
    }
    *(undefined (**) [16])(param_1 + 6) = pauVar5;
    *(undefined (**) [16])(param_1 + 8) = pauVar5[1];
    *(undefined **)(param_1 + 10) = pauVar5[1] + (ulonglong)*(ushort *)(*pauVar5 + 4) * 0xc;
    param_1[0xc] = (uint)(local_64 != 0);
    if (((*pauVar5)[0] == '\x02') && ((byte)(*pauVar5)[1] < 2)) {
      uVar10 = (ulonglong)
               ((uint)*(ushort *)(*pauVar5 + 6) * 0x10 +
                ((uint)*(ushort *)(*pauVar5 + 4) + (uint)*(ushort *)(*pauVar5 + 4) * 2) * 4 +
               (uint)*(ushort *)(*pauVar5 + 2));
      param_1[4] = 1;
    }
  }
  *(ulonglong *)(param_1 + 0x10) = uVar10;
  uVar10 = 200;
  if (lpMem_00 != (undefined (*) [16])0x0) {
    uVar10 = dwBytes;
  }
  *(undefined (**) [16])(param_1 + 0xe) = pauVar5;
  *(ulonglong *)(param_1 + 0x12) = uVar10;
  param_1[0x14] = (uint)(pauVar5 == lpMem_00);
LAB_1400038ac:
  FUN_140023f70(local_48 ^ (ulonglong)auStackY152);
  return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1400038d8(longlong param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 local_38;
  uint local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar8 = 0;
  uVar1 = 1;
  uVar9 = 1;
  uVar7 = 0;
  if (*(ushort *)(lVar2 + 4) != 0) {
    do {
      if (*(int *)(lVar3 + uVar7 * 0xc) == param_3) {
        if ((param_4 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
          local_38 = *(undefined8 *)(lVar3 + uVar7 * 0xc);
          local_30 = *(uint *)(lVar3 + 8 + uVar7 * 0xc);
          uVar8 = uVar1;
          if ((*(byte *)(lVar3 + 4 + uVar7 * 0xc) & 1) != 0) break;
        }
        else if ((*(byte *)(lVar3 + 4 + uVar7 * 0xc) & 1) == 0) {
          local_38 = *(undefined8 *)(lVar3 + uVar7 * 0xc);
          local_30 = *(uint *)(lVar3 + 8 + uVar7 * 0xc);
          goto LAB_14000397e;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(ushort *)(lVar2 + 4));
  }
  uVar4 = 0;
  if (uVar8 != 0) {
LAB_14000397e:
    if ((param_4 == 0) || (lVar3 = 0xc, *(int *)(param_1 + 0x30) == 0)) {
      lVar3 = 8;
    }
    uVar8 = *(uint *)(lVar3 + lVar2);
    if ((uVar8 & 4) != 0) {
      local_38._4_4_ = local_38._4_4_ & 0xffffcfff;
    }
    if ((uVar8 & 2) != 0) {
      local_38._4_4_ = local_38._4_4_ & 0xfffff3ff;
    }
    if ((uVar8 & 1) != 0) {
      local_38._4_4_ = local_38._4_4_ & 0xfffffcff;
    }
    if ((uVar8 & 8) != 0) {
      local_38._4_4_ = local_38._4_4_ & 0xc0ffffff;
      local_30 = 0;
    }
    if ((int)local_38 != 0) {
      if (((((local_38._4_4_ >> 0xc | local_38._4_4_ >> 10 | local_38._4_4_ >> 8) & 3) != 0) ||
          ((local_38._4_4_ & 0x3f000000) != 0)) || ((local_38._4_4_ & 2) != 0)) {
        param_2[3] = local_30;
        param_2[2] = local_38._4_4_ >> 0x1e;
        *(byte *)(param_2 + 1) = (byte)(local_38._4_4_ >> 0x18) & 0x3f;
        param_2[5] = local_38._4_4_ >> 1 & 1;
        uVar8 = local_38._4_4_ >> 0xc & 3;
        uVar4 = uVar9;
        if (uVar8 == 0) {
          uVar8 = local_38._4_4_ >> 10 & 3;
          if (uVar8 == 0) {
            uVar8 = local_38._4_4_ >> 8 & 3;
            if (uVar8 != 0) {
              *param_2 = uVar8;
            }
          }
          else {
            *param_2 = uVar8;
          }
        }
        else {
          *param_2 = uVar8;
        }
        goto LAB_140003a45;
      }
    }
    uVar4 = 0;
  }
LAB_140003a45:
  uVar6 = 0;
  piVar5 = *(int **)(param_1 + 0x28);
  uVar8 = 0;
  if (*(ushort *)(lVar2 + 6) != 0) {
    do {
      uVar8 = uVar1;
      if (*piVar5 == param_3) break;
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 4;
      uVar8 = 0;
    } while (uVar6 < *(ushort *)(lVar2 + 6));
  }
  param_2[4] = uVar8;
  return uVar4;
}



undefined8 FUN_140003a94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void FUN_140003aa4(longlong param_1,int param_2,short param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined uVar10;
  undefined auStackY4240 [32];
  int *piVar11;
  uint local_1050;
  undefined4 local_104c;
  undefined4 local_1048;
  undefined4 local_1044;
  int local_1040;
  int local_103c [1025];
  ulonglong local_38;
  undefined8 local_30;
  
  uVar9 = (ulonglong)(ushort)param_3;
  piVar5 = (int *)(ulonglong)(uint)param_2;
  local_30 = 0x140003acd;
  local_38 = DAT_140030470 ^ (ulonglong)auStackY4240;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar8 = 0;
  if (*(short *)(*(longlong *)(param_1 + 0x18) + 6) != 0) {
    do {
      uVar6 = (ulonglong)uVar8;
      if (((*(int *)(lVar1 + uVar6 * 0x10) == param_2) &&
          (*(short *)(lVar1 + 0xc + uVar6 * 0x10) == param_3)) &&
         (((*(uint *)(lVar1 + 0xc + uVar6 * 0x10) & 0x10000) == 0 || (param_4 != 0)))) {
        local_1048 = *(undefined4 *)(lVar1 + 4 + uVar6 * 0x10);
        local_1044 = *(undefined4 *)(lVar1 + 8 + uVar6 * 0x10);
        do {
          local_1050 = 0x1000;
          piVar11 = &local_1040;
          uVar10 = SUB81(&local_104c,0);
          uVar4 = FUN_140003464((char)&local_1048,(char)piVar5,(char)uVar9,uVar10,piVar11,
                                &local_1050);
          iVar3 = (int)uVar4;
          if (iVar3 == 0) {
            uVar7 = 0;
            if ((local_1050 & 7) != 0) {
              local_1050 = 0;
            }
            uVar9 = (ulonglong)local_1050;
            uVar2 = local_1050 >> 3;
            if (uVar2 != 0) {
              piVar5 = local_103c;
              do {
                if ((piVar5[-1] == param_2) && (*(short *)piVar5 == param_3)) goto LAB_140003bd3;
                uVar7 = uVar7 + 1;
                piVar5 = piVar5 + 2;
              } while (uVar7 < uVar2);
            }
            if (uVar9 + 8 < 0x1001) {
              local_1050 = local_1050 + 8;
              uVar9 = (ulonglong)local_1050;
              local_103c[(ulonglong)uVar2 * 2 + -1] = param_2;
              *(short *)(local_103c + (ulonglong)uVar2 * 2) = param_3;
            }
LAB_140003bd3:
            piVar5 = &local_1040;
            uVar4 = FUN_14000350c((char)&local_1048,(char)piVar5,(char)uVar9,uVar10,(char)piVar11,
                                  local_104c,1);
            iVar3 = (int)uVar4;
          }
        } while (iVar3 == -0x3fffffff);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(*(longlong *)(param_1 + 0x18) + 6));
  }
  FUN_140023f70(local_38 ^ (ulonglong)auStackY4240);
  return;
}



void FUN_140003c50(uint param_1,uint *param_2,undefined8 param_3,int param_4,uint *param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  HANDLE hHeap;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined auStack440 [48];
  int local_188 [4];
  uint local_178 [6];
  longlong local_160;
  longlong local_158;
  LPVOID local_140;
  int local_128;
  undefined local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_140030470 ^ (ulonglong)auStack440;
  iVar3 = FUN_1400035c8(local_178,param_1,param_3,(undefined (*) [16])local_118);
  if (iVar3 != 0) goto LAB_140003daa;
  FUN_1400038d8((longlong)local_178,param_2,(int)param_3,param_4);
  lVar2 = local_160;
  if (param_5 != (uint *)0x0) {
    uVar7 = 1;
    uVar8 = 0;
    local_188[0] = 0;
    uVar9 = (uint)*(ushort *)(local_160 + 4);
    if (*(ushort *)(local_160 + 4) == 0) {
LAB_140003d72:
      if (*(short *)(local_160 + 6) == 0) {
        uVar7 = 0;
      }
    }
    else {
      do {
        piVar1 = (int *)(local_158 + uVar8 * 0xc);
        if ((*piVar1 != 0) &&
           ((((uVar5 = piVar1[1], (uVar5 & 0x300) != 0 || ((uVar5 & 0xc00) != 0)) ||
             ((uVar5 & 0x3000) != 0)) || (((uVar5 & 0x3f000000) != 0 || ((uVar5 & 2) != 0)))))) {
          if (((uVar5 & 1) == 0) && (uVar6 = 0, uVar9 != 0)) {
            do {
              if (((int)uVar6 != (int)uVar8) && (*piVar1 == *(int *)(local_158 + uVar6 * 0xc)))
              goto LAB_140003d5a;
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar5;
            } while (uVar5 < uVar9);
          }
          uVar4 = FUN_140003a94(piVar1,local_188);
          if ((int)uVar4 == 0) break;
        }
LAB_140003d5a:
        uVar9 = (uint)*(ushort *)(lVar2 + 4);
        uVar5 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar5;
      } while (uVar5 < uVar9);
      if (local_188[0] == 0) goto LAB_140003d72;
    }
    *param_5 = *param_5 | uVar7;
  }
  if (local_128 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_140);
  }
LAB_140003daa:
  FUN_140023f70(local_48 ^ (ulonglong)auStack440);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140003ddc(uint *param_1,uint param_2,int param_3,uint param_4,uint *param_5,
                  undefined4 *param_6)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined auStackY136 [32];
  
  uVar3 = DAT_140030470 ^ (ulonglong)auStackY136;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  *param_6 = 1;
  bVar1 = false;
  if (DAT_1400312a0 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_1400312a0 = GetProcAddress(DAT_140031410,"RtlQueryFeatureConfiguration");
    if (DAT_1400312a0 == (FARPROC)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_140003eae;
    }
  }
  iVar2 = (*DAT_1400312a0)();
LAB_140003eae:
  if (iVar2 == 0) {
    bVar1 = true;
    param_1[3] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined *)(param_1 + 1) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else if (iVar2 == 0x117) {
    param_1[4] = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)(iVar2 != -0x7fffffde);
  }
  if (!bVar1) {
    FUN_140003c50(param_4,param_1,(ulonglong)param_2,param_3,param_5);
  }
  FUN_140023f70(uVar3 ^ (ulonglong)auStackY136);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

ulonglong FUN_140003f64(void **param_1,void *param_2)

{
  longlong lVar1;
  void *pvVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  ulonglong uVar6;
  SIZE_T dwBytes;
  
  pvVar2 = (void *)((longlong)param_1[2] - (longlong)*param_1);
  if (pvVar2 < param_2) {
    dwBytes = ((ulonglong)param_2 & 0xffffffffffffffc0) + 0x40;
    pvVar3 = GetProcessHeap();
    pvVar4 = HeapAlloc(pvVar3,0,dwBytes);
    lVar1 = DAT_140031300;
    pvVar5 = pvVar4;
    if (DAT_140031300 != 0) {
      GetProcessHeap();
      pvVar5 = (LPVOID)(*(code *)lVar1)();
    }
    if (pvVar4 == (LPVOID)0x0) {
      return (ulonglong)pvVar5 & 0xffffffffffffff00;
    }
    uVar6 = (longlong)param_1[1] - (longlong)*param_1;
    if (uVar6 != 0) {
      FUN_140001664(pvVar4,dwBytes,*param_1,uVar6);
    }
    pvVar5 = param_1[3];
    param_1[3] = pvVar4;
    if (pvVar5 != (LPVOID)0x0) {
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,pvVar5);
    }
    *param_1 = pvVar4;
    param_1[1] = (void *)((longlong)pvVar4 + uVar6);
    pvVar2 = (void *)((longlong)pvVar4 + dwBytes);
    param_1[2] = pvVar2;
  }
  return CONCAT71((int7)((ulonglong)pvVar2 >> 8),1);
}



ulonglong FUN_14000406c(void **param_1,void *param_2,void *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((ulonglong)((longlong)param_1[2] - (longlong)*param_1) <=
      (ulonglong)(((longlong)param_1[1] - (longlong)*param_1) + (longlong)param_3)) {
    pvVar2 = (void *)(((longlong)param_1[2] - (longlong)*param_1) * 2);
    pvVar3 = param_3;
    if (param_3 < pvVar2) {
      pvVar3 = pvVar2;
    }
    uVar1 = FUN_140003f64(param_1,pvVar3);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
  }
  pvVar2 = param_1[1];
  if (param_3 != (void *)0x0) {
    FUN_140001664(pvVar2,-(ulonglong)(pvVar2 < param_1[2]) & (longlong)param_1[2] - (longlong)pvVar2
                  ,param_2,(ulonglong)param_3);
    pvVar2 = param_1[1];
  }
  param_1[1] = (void *)((longlong)pvVar2 + (longlong)param_3);
  return CONCAT71((int7)((ulonglong)(void *)((longlong)pvVar2 + (longlong)param_3) >> 8),1);
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void FUN_140004100(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *in_RDX;
  int iVar5;
  ulonglong in_R8;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined auStackY4224 [32];
  undefined8 *puVar8;
  uint local_1040;
  undefined4 local_103c [3];
  undefined8 local_1030;
  undefined4 local_1028 [1024];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x140004129;
  local_28 = DAT_140030470 ^ (ulonglong)auStackY4224;
  uVar7 = 0;
  if (0xb < (ulonglong)(param_1[1] - *param_1)) {
    iVar5 = 0;
    do {
      local_1040 = 0x1000;
      puVar8 = &local_1030;
      uVar3 = FUN_140003464(0xf0,(char)in_RDX,(char)in_R8,(char)local_103c,puVar8,&local_1040);
      if ((int)uVar3 == 0) {
        in_R8 = (ulonglong)local_1040;
        puVar6 = (undefined8 *)*param_1;
        if (in_R8 != (in_R8 / 0xc) * 0xc) {
          in_R8 = 0;
        }
        local_1040 = (uint)in_R8;
        uVar7 = in_R8 / 0xc;
        puVar1 = (undefined8 *)
                 ((longlong)puVar6 + ((ulonglong)(param_1[1] - (longlong)puVar6) / 0xc) * 0xc);
        while( true ) {
          in_RDX = &local_1030;
          if (puVar6 == puVar1) break;
          puVar2 = (undefined8 *)((longlong)in_RDX + uVar7 * 0xc);
          if (&local_1030 != puVar2) {
            puVar4 = &local_1030;
            do {
              if ((*(int *)puVar4 == *(int *)puVar6) &&
                 (*(short *)((longlong)puVar4 + 4) == *(short *)((longlong)puVar6 + 4))) {
                *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + *(int *)(puVar6 + 1);
                in_R8 = (ulonglong)local_1040;
                goto LAB_140004254;
              }
              puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
            } while (puVar4 != puVar2);
          }
          if (in_R8 + 0xc < 0x1001) {
            local_1040 = (int)in_R8 + 0xc;
            in_R8 = (ulonglong)local_1040;
            *puVar2 = *puVar6;
            local_1028[uVar7 * 3] = *(undefined4 *)(puVar6 + 1);
            uVar7 = (ulonglong)((int)uVar7 + 1);
          }
LAB_140004254:
          puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
        }
        uVar7 = FUN_14000350c(0xf0,(char)in_RDX,(char)in_R8,(char)in_R8,(char)puVar8,local_103c[0],1
                             );
        uVar7 = uVar7 & 0xffffffff;
      }
      iVar5 = iVar5 + 1;
    } while ((((int)uVar7 == -0x3fffffff) && (iVar5 < 100)) && ((int)uVar3 == 0));
  }
  FUN_140023f70(local_28 ^ (ulonglong)auStackY4224);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400042ec(void)

{
  if (DAT_140031418 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_140031418 = GetProcAddress(DAT_140031410,"RtlUnsubscribeWnfNotificationWaitForCompletion");
    if (DAT_140031418 == (FARPROC)0x0) {
      return;
    }
  }
  (*DAT_140031418)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140004360(void)

{
  if (DAT_1400312b0 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_1400312b0 =
         GetProcAddress(DAT_140031410,"RtlUnregisterFeatureConfigurationChangeNotification");
    if (DAT_1400312b0 == (FARPROC)0x0) {
      return;
    }
  }
  (*DAT_1400312b0)();
  return;
}



ulonglong FUN_1400043d4(short *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  void *in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  short *psVar5;
  ulonglong uVar6;
  short local_res8 [4];
  
  pvVar3 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    pvVar4 = (void *)((longlong)pvVar3 + 2);
    if (param_3 < pvVar4) goto LAB_14000447f;
    local_res8[0] = param_1[2];
    psVar5 = local_res8;
    uVar6 = 2;
    uVar2 = 2;
LAB_14000443b:
    uVar1 = FUN_140001664(pvVar3,uVar2,psVar5,uVar6);
    in_RAX = (void *)CONCAT44(extraout_var,uVar1);
    pvVar3 = pvVar4;
  }
  else if (*(char *)(param_1 + 1) == '\x02') {
    pvVar4 = (void *)((longlong)pvVar3 + 4);
    if (param_3 < pvVar4) goto LAB_14000447f;
    uVar2 = 4;
    psVar5 = param_1 + 2;
    uVar6 = 4;
    goto LAB_14000443b;
  }
  pvVar4 = pvVar3;
  if (*param_1 == 0) {
    pvVar4 = (void *)((longlong)pvVar3 + 2);
    if (param_3 < pvVar4) goto LAB_14000447f;
    FUN_140001664(pvVar3,(longlong)param_3 - (longlong)pvVar3,param_1 + 4,2);
  }
  uVar2 = (ulonglong)(ushort)param_1[4];
  in_RAX = (void *)(uVar2 + (longlong)pvVar4);
  if (in_RAX <= param_3) {
    if (uVar2 != 0) {
      uVar1 = FUN_140001664(pvVar4,(longlong)param_3 - (longlong)pvVar4,*(void **)(param_1 + 0xc),
                            uVar2);
      in_RAX = (void *)CONCAT44(extraout_var_00,uVar1);
      uVar2 = (ulonglong)(ushort)param_1[4];
    }
    *param_2 = (void *)(uVar2 + (longlong)pvVar4);
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_14000447f:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



ulonglong FUN_1400044d0(ushort *param_1,void **param_2,undefined *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort local_res8 [4];
  
  puVar4 = (undefined *)*param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar3 = puVar4 + 2;
    if (param_3 < puVar3) goto LAB_14000458b;
    *(undefined **)(param_1 + 8) = puVar4;
    FUN_140001664(local_res8,2,puVar4,2);
    *(uint *)(param_1 + 2) = (uint)local_res8[0];
  }
  else {
    puVar3 = puVar4;
    if (*(char *)(param_1 + 1) == '\x02') {
      puVar3 = puVar4 + 4;
      if (param_3 < puVar3) goto LAB_14000458b;
      *(undefined **)(param_1 + 8) = puVar4;
      FUN_140001664(param_1 + 2,4,puVar4,4);
    }
  }
  uVar2 = *param_1;
  register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar2;
  puVar1 = param_1 + 4;
  *puVar1 = uVar2;
  puVar4 = puVar3;
  if (uVar2 == 0) {
    puVar4 = puVar3 + 2;
    if (param_3 < puVar4) goto LAB_14000458b;
    FUN_140001664(puVar1,2,puVar3,2);
    register0x00000020 = (BADSPACEBASE *)(ulonglong)*puVar1;
  }
  if ((undefined *)((longlong)register0x00000020 + (longlong)puVar4) <= param_3) {
    *(undefined **)(param_1 + 0xc) = puVar4;
    *param_2 = (undefined *)((longlong)register0x00000020 + (longlong)puVar4);
    return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
  }
LAB_14000458b:
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}



void FUN_1400045b8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  HANDLE pvVar13;
  
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  uVar11 = *(undefined4 *)(param_1 + 0x20);
  uVar12 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  pvVar5 = *(LPVOID *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  if (pvVar5 != (LPVOID)0x0) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,pvVar5);
  }
  *(undefined4 *)(param_2 + 0x18) = uVar9;
  *(undefined4 *)(param_2 + 0x1c) = uVar10;
  *(undefined4 *)(param_2 + 0x20) = uVar11;
  *(undefined4 *)(param_2 + 0x24) = uVar12;
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  pvVar5 = *(LPVOID *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  if (pvVar5 != (LPVOID)0x0) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,pvVar5);
  }
  uVar2 = *(undefined *)(param_1 + 0x38);
  *(undefined *)(param_1 + 0x38) = *(undefined *)(param_2 + 0x38);
  *(undefined *)(param_2 + 0x38) = uVar2;
  uVar2 = *(undefined *)(param_1 + 0x39);
  *(undefined *)(param_1 + 0x39) = *(undefined *)(param_2 + 0x39);
  *(undefined *)(param_2 + 0x39) = uVar2;
  return;
}



void FUN_1400046ac(ushort *param_1,short *param_2,ulonglong param_3,ulonglong param_4)

{
  LPVOID lpMem;
  code *pcVar1;
  undefined uVar2;
  HANDLE hHeap;
  bool bVar3;
  undefined8 in_stack_00000000;
  
  if (9 < param_4) {
    lpMem = *(LPVOID *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lpMem != (LPVOID)0x0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
    *(short **)(param_1 + 0xc) = param_2;
    *(ulonglong *)(param_1 + 0x10) = (longlong)param_2 + param_3;
    bVar3 = 9 < param_3;
    *(undefined *)((longlong)param_1 + 0x39) = 0;
    *(ulonglong *)(param_1 + 0x14) = (longlong)param_2 + param_4;
    if (bVar3) {
      if ((*param_2 != 0) || (uVar2 = 0, *param_1 <= (ushort)param_2[1] && param_2[1] != *param_1))
      {
        uVar2 = 1;
      }
      *(undefined *)((longlong)param_1 + 0x39) = uVar2;
      if ((((*param_2 != 0) || (param_2[1] != *param_1)) || (param_2[2] != param_1[1])) ||
         (((*(char *)(param_2 + 4) != *(char *)(param_1 + 2) || (param_2[3] != param_1[3])) ||
          (*(char *)((longlong)param_2 + 9) != *(char *)(param_1 + 4))))) {
        bVar3 = false;
      }
    }
    if (!bVar3) {
      *param_2 = 0;
      param_2[1] = *param_1;
      param_2[2] = param_1[1];
      *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 2);
      param_2[3] = param_1[3];
      *(undefined *)((longlong)param_2 + 9) = *(undefined *)(param_1 + 4);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0xc) + 10;
    }
    return;
  }
  FUN_140002634(in_stack_00000000,0x1196,"onecore\\internal\\sdk\\inc\\wil/Staging.h");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1400047e8(ushort *param_1,void *param_2,ulonglong param_3,void *param_4,ulonglong param_5,
             int param_6)

{
  void **ppvVar1;
  LPVOID lpMem;
  void *pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  HANDLE pvVar5;
  void *pvVar6;
  undefined local_48 [16];
  undefined local_38 [16];
  
  uVar3 = FUN_140004c1c((longlong)param_1,param_2,param_3,param_4,param_5,param_6);
  if ((char)uVar3 == '\0') {
    pvVar6 = (void *)(param_5 + 0x20 + param_3);
    ppvVar1 = (void **)(param_1 + 0xc);
    if (*ppvVar1 == (void *)0x0) {
      local_48 = ZEXT816(0);
      local_38 = ZEXT816(0);
      uVar4 = FUN_140003f64((void **)local_48,(void *)((longlong)pvVar6 + 10));
      if ((char)uVar4 == '\0') {
      }
      else {
        FUN_1400046ac(param_1,local_48._0_8_,0,local_38._0_8_ - (longlong)local_48._0_8_);
        lpMem = *(LPVOID *)(param_1 + 0x18);
        *(LPVOID *)(param_1 + 0x18) = local_38._8_8_;
        if (lpMem != (LPVOID)0x0) {
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,lpMem);
        }
        *(undefined *)(param_1 + 0x1d) = 1;
        local_38._8_8_ = (LPVOID)0x0;
      }
      if (local_38._8_8_ != (LPVOID)0x0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,local_38._8_8_);
      }
    }
    else if ((*(char *)(param_1 + 0x1d) != '\0') &&
            ((ulonglong)(*(longlong *)(param_1 + 0x14) - (longlong)*ppvVar1) <=
             (ulonglong)((*(longlong *)(param_1 + 0x10) - (longlong)*ppvVar1) + (longlong)pvVar6)))
    {
      pvVar2 = (void *)((*(longlong *)(param_1 + 0x14) - (longlong)*ppvVar1) * 2);
      if (pvVar6 < pvVar2) {
        pvVar6 = pvVar2;
      }
      FUN_140003f64(ppvVar1,pvVar6);
    }
    uVar3 = FUN_140004c1c((longlong)param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar3;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14000495c(longlong param_1,longlong param_2,void *param_3,void *param_4,size_t param_5
                       ,int param_6)

{
  undefined auVar1 [16];
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  void **ppvVar8;
  void **ppvVar9;
  ulonglong uVar10;
  bool bVar11;
  void *local_res8;
  ushort local_80;
  char local_7e;
  int local_7c;
  ushort local_78;
  undefined local_70 [16];
  ushort local_60;
  undefined local_5e;
  undefined4 local_5c;
  ushort local_58;
  undefined local_50 [24];
  
  local_80 = *(ushort *)(param_1 + 6);
  ppvVar9 = (void **)(param_2 + 4);
  iVar2 = -1;
  local_7e = *(char *)(param_1 + 8);
  uVar4 = 0;
  uVar10 = 4;
  local_7c = 0;
  local_78 = 0;
  local_70 = ZEXT816(0);
  iVar7 = (int)param_5;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar5 = uVar4;
    if (*(uint *)ppvVar9 == 0) {
      return (ulonglong)param_3;
    }
    while (local_res8 = param_3,
          uVar10 = FUN_1400044d0(&local_80,&local_res8,*(undefined **)(param_1 + 0x20)),
          (char)uVar10 != '\0') {
      if (param_5 == local_78) {
        iVar2 = memcmp(param_4,local_70._8_8_,param_5);
      }
      else {
        iVar2 = iVar7 - (uint)local_78;
      }
      if ((iVar2 < 1) || (uVar5 = uVar5 + 1, param_3 = local_res8, *(uint *)ppvVar9 <= uVar5))
      goto LAB_140004b8b;
    }
    if (*(uint *)ppvVar9 != uVar5) {
      *(uint *)ppvVar9 = uVar5;
      if (*(char *)(param_2 + 2) == '\x01') {
        local_res8 = (void *)((ulonglong)local_res8 & 0xffffffffffff0000 | (ulonglong)(ushort)uVar5)
        ;
        ppvVar9 = &local_res8;
        uVar10 = 2;
      }
      else {
        if (*(char *)(param_2 + 2) != '\x02') goto LAB_140004b8b;
        uVar10 = 4;
      }
      FUN_140001664(*(void **)(param_2 + 0x10),uVar10,ppvVar9,uVar10);
    }
  }
  else {
    auVar1 = ZEXT816((ulonglong)(*(longlong *)(param_1 + 0x20) - (longlong)param_3)) /
             ZEXT816(*(ulonglong *)(param_1 + 0x10));
    if ((SUB168(auVar1,0) < (ulonglong)*(uint *)ppvVar9) &&
       (uVar5 = SUB164(auVar1,0), *(uint *)ppvVar9 != uVar5)) {
      *(uint *)ppvVar9 = uVar5;
      if (*(char *)(param_2 + 2) == '\x01') {
        local_res8 = (void *)((ulonglong)local_res8 & 0xffffffffffff0000 |
                             (ulonglong)*(ushort *)ppvVar9);
        uVar10 = 2;
        ppvVar8 = &local_res8;
      }
      else {
        ppvVar8 = ppvVar9;
        if (*(char *)(param_2 + 2) != '\x02') goto LAB_140004a08;
      }
      FUN_140001664(*(void **)(param_2 + 0x10),uVar10,ppvVar8,uVar10);
    }
LAB_140004a08:
    local_50._0_16_ = ZEXT816(0);
    local_5c = 0;
    pvVar3 = (void *)(*(longlong *)(param_1 + 0x10) * (ulonglong)*(uint *)ppvVar9 +
                     (longlong)param_3);
    local_58 = 0;
    local_60 = *(ushort *)(param_1 + 6);
    local_5e = *(undefined *)(param_1 + 8);
    uVar10 = (ulonglong)*(uint *)ppvVar9;
    while (uVar6 = uVar10, uVar6 != 0) {
      uVar10 = uVar6 >> 1;
      local_res8 = (void *)(*(longlong *)(param_1 + 0x10) * uVar10 + (longlong)param_3);
      FUN_1400044d0(&local_60,&local_res8,*(undefined **)(param_1 + 0x20));
      if (param_5 == local_58) {
        iVar2 = memcmp(param_4,local_50._8_8_,param_5);
      }
      else {
        iVar2 = iVar7 - (uint)local_58;
      }
      if (0 < iVar2) {
        uVar10 = uVar6 + (-1 - uVar10);
        param_3 = local_res8;
      }
    }
    if (pvVar3 <= param_3) {
      return (ulonglong)param_3;
    }
    local_res8 = param_3;
    FUN_1400044d0(&local_80,&local_res8,*(undefined **)(param_1 + 0x20));
    if (param_5 == local_78) {
      iVar2 = memcmp(param_4,local_70._8_8_,param_5);
    }
    else {
      iVar2 = iVar7 - (uint)local_78;
    }
  }
LAB_140004b8b:
  if (iVar2 != 0) {
    return (ulonglong)param_3;
  }
  bVar11 = local_7e != '\0';
  if ((local_7e != '\0') && (iVar2 = param_6 + local_7c, local_7c != iVar2)) {
    if (local_7e == '\x01') {
      local_res8 = (void *)((ulonglong)local_res8 & 0xffffffffffff0000 | (ulonglong)(ushort)iVar2);
      ppvVar9 = &local_res8;
      uVar10 = 2;
    }
    else {
      if (local_7e != '\x02') goto LAB_140004be2;
      uVar10 = 4;
      ppvVar9 = (void **)&local_7c;
    }
    local_7c = iVar2;
    FUN_140001664(local_70._0_8_,uVar10,ppvVar9,uVar10);
  }
LAB_140004be2:
  if ((bVar11) || (*(char *)(param_1 + 0x38) != '\0')) {
    uVar4 = 1;
  }
  *(char *)(param_1 + 0x38) = (char)uVar4;
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_140004c1c(longlong param_1,void *param_2,ulonglong param_3,void *param_4,
                       ulonglong param_5,int param_6)

{
  uint uVar1;
  undefined auVar2 [16];
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *pvVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined2 local_res8;
  void *local_res10;
  uint local_88 [2];
  void *local_80;
  ushort local_78;
  char local_76;
  uint local_74;
  ushort local_70;
  undefined local_68 [16];
  ushort local_58;
  char local_56;
  int local_54;
  undefined2 local_50;
  undefined local_48 [16];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
LAB_140004fee:
    return in_RAX & 0xffffffffffffff00;
  }
  local_78 = *(ushort *)(param_1 + 2);
  pvVar11 = (void *)(*(longlong *)(param_1 + 0x18) + 10);
  local_76 = *(char *)(param_1 + 4);
  bVar3 = false;
  local_74 = 0;
  local_70 = 0;
  local_68 = ZEXT816(0);
  local_res8 = local_res8 & 0xff00;
  local_res10 = param_2;
LAB_140004dca:
  local_80 = pvVar11;
  uVar8 = FUN_1400044d0(&local_78,&local_80,*(undefined **)(param_1 + 0x20));
  bVar5 = false;
  if ((char)uVar8 != '\0') {
    if (param_3 == local_70) {
      iVar6 = memcmp(param_2,local_68._8_8_,param_3);
    }
    else {
      iVar6 = (int)param_3 - (uint)local_70;
    }
    uVar7 = local_74;
    pvVar15 = local_80;
    if (iVar6 < 0) {
LAB_140004e78:
      local_80 = pvVar11;
      bVar5 = bVar3;
      if ((char)uVar8 != '\0') goto LAB_140004df5;
      goto LAB_140004df1;
    }
    if (iVar6 == 0) {
      pvVar11 = (void *)FUN_14000495c(param_1,(longlong)&local_78,local_80,param_4,param_5,param_6);
      if (pvVar11 != (void *)0x0) {
        bVar3 = true;
        local_res8 = CONCAT11(local_res8._1_1_,1);
        goto LAB_140004e78;
      }
      goto LAB_140004e64;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      local_58 = *(ushort *)(param_1 + 6);
      uVar10 = 0;
      local_56 = *(undefined *)(param_1 + 8);
      local_54 = 0;
      local_50 = 0;
      local_48 = ZEXT816(0);
      uVar1 = 0;
      if (local_74 != 0) {
        do {
          uVar10 = uVar1;
          uVar8 = FUN_1400044d0(&local_58,&local_80,*(undefined **)(param_1 + 0x20));
          if ((char)uVar8 == '\0') break;
          uVar10 = uVar10 + 1;
          uVar1 = uVar10;
        } while (uVar10 < uVar7);
      }
      pvVar11 = local_80;
      param_2 = local_res10;
      if (uVar7 != uVar10) {
        local_74 = uVar10;
        if (local_76 == '\x01') {
          uVar14 = 2;
          local_88[0]._0_2_ = (undefined2)uVar10;
          uVar8 = 2;
          puVar13 = local_88;
        }
        else {
          if (local_76 != '\x02') goto LAB_140004dca;
          uVar8 = 4;
          puVar13 = &local_74;
          uVar14 = 4;
        }
        FUN_140001664(local_68._0_8_,uVar8,puVar13,uVar14);
        param_2 = local_res10;
      }
    }
    else {
      auVar2 = ZEXT816((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18))) /
               ZEXT816(*(ulonglong *)(param_1 + 0x10));
      uVar8 = (ulonglong)local_74;
      if ((SUB168(auVar2,0) < uVar8) && (uVar7 = SUB164(auVar2,0), local_74 != uVar7)) {
        uVar8 = (ulonglong)uVar7;
        local_74 = uVar7;
        if (local_76 == '\x01') {
          local_88[0]._0_2_ = SUB162(auVar2,0);
          FUN_140001664(local_68._0_8_,2,local_88,2);
        }
        else if (local_76 == '\x02') {
          FUN_140001664(local_68._0_8_,4,&local_74,4);
          uVar8 = (ulonglong)local_74;
        }
      }
      pvVar11 = (void *)((longlong)pvVar15 + uVar8 * *(longlong *)(param_1 + 0x10));
    }
    goto LAB_140004dca;
  }
LAB_140004df1:
  bVar3 = bVar5;
  *(void **)(param_1 + 0x20) = local_80;
LAB_140004df5:
  cVar4 = local_76;
  pvVar15 = (void *)0x0;
  pvVar11 = pvVar15;
  if (!bVar3) {
    pvVar11 = (void *)(ulonglong)local_78;
    local_74 = 1;
    local_70 = (ushort)param_3;
    local_68 = CONCAT88(param_2,local_68._0_8_) & (undefined  [16])0xffffffffffffffff;
    if (local_78 == 0) {
      pvVar11 = (void *)((param_3 & 0xffff) + 2);
    }
    local_68._0_8_ = pvVar15;
    if (local_76 == '\x01') {
      pvVar11 = (void *)((longlong)pvVar11 + 2);
    }
    else if (local_76 == '\x02') {
      pvVar11 = (void *)((longlong)pvVar11 + 4);
      local_68._0_8_ = (void *)0x0;
    }
  }
  uVar7 = local_74;
  local_58 = *(ushort *)(param_1 + 6);
  uVar8 = (ulonglong)local_58;
  local_56 = *(char *)(param_1 + 8);
  local_54 = param_6;
  local_50 = (undefined2)param_5;
  local_48 = ZEXT816(param_4) << 0x40;
  if (local_58 == 0) {
    uVar8 = (param_5 & 0xffff) + 2;
  }
  if (local_56 == '\x01') {
    uVar8 = uVar8 + 2;
  }
  else if (local_56 == '\x02') {
    uVar8 = uVar8 + 4;
  }
  uVar14 = *(ulonglong *)(param_1 + 0x28);
  uVar8 = uVar8 + (longlong)pvVar11;
  uVar12 = *(ulonglong *)(param_1 + 0x20);
  in_RAX = -(ulonglong)(uVar12 < uVar14) & uVar14 - uVar12;
  if (in_RAX < uVar8) goto LAB_140004fee;
  uVar12 = uVar12 - (longlong)local_80;
  if (uVar12 != 0) {
    if (((void *)(uVar8 + (longlong)local_80) == (void *)0x0) || (local_80 == (void *)0x0)) {
      puVar9 = (undefined4 *)_o__errno();
      *puVar9 = 0x16;
    }
    else {
      if (uVar12 <= (uVar14 - uVar8) - (longlong)local_80) {
        memmove((void *)(uVar8 + (longlong)local_80),local_80,uVar12);
        goto LAB_140004f6e;
      }
      puVar9 = (undefined4 *)_o__errno();
      *puVar9 = 0x22;
    }
    _o__invalid_parameter_noinfo();
  }
LAB_140004f6e:
  pvVar11 = (void *)(*(longlong *)(param_1 + 0x20) + uVar8);
  *(void **)(param_1 + 0x20) = pvVar11;
  if ((char)local_res8 == '\0') {
    FUN_1400043d4((short *)&local_78,&local_80,pvVar11);
  }
  else if ((cVar4 != '\0') && (uVar1 = uVar7 + 1, uVar7 != uVar1)) {
    local_74 = uVar1;
    if (cVar4 == '\x01') {
      uVar14 = 2;
      local_res8 = (ushort)uVar1;
      uVar8 = 2;
      puVar13 = (uint *)&local_res8;
    }
    else {
      if (cVar4 != '\x02') goto LAB_140004fd4;
      puVar13 = &local_74;
      uVar14 = 4;
      uVar8 = 4;
    }
    FUN_140001664(local_68._0_8_,uVar8,puVar13,uVar14);
  }
LAB_140004fd4:
  pvVar11 = (void *)FUN_1400043d4((short *)&local_58,&local_80,*(void **)(param_1 + 0x20));
  *(undefined *)(param_1 + 0x38) = 1;
LAB_140004e64:
  return CONCAT71((int7)((ulonglong)pvVar11 >> 8),1);
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe
// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps

void FUN_140005014(ulonglong param_1,longlong param_2,ushort *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  HANDLE pvVar8;
  undefined uVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  undefined uVar13;
  ulonglong uVar14;
  undefined auStackY4608 [32];
  undefined uVar15;
  uint local_11c0 [2];
  undefined4 local_11b8 [2];
  void *local_11b0 [2];
  ushort local_11a0;
  ushort local_119e;
  undefined local_119c;
  ushort local_119a;
  char local_1198;
  ulonglong local_1190;
  undefined8 local_1188;
  undefined local_1178 [16];
  ulonglong *local_1168;
  undefined2 local_1160;
  undefined local_115e;
  undefined8 local_1158;
  undefined8 local_1150;
  ushort local_1148;
  undefined local_1146;
  uint local_1144;
  ushort local_1140;
  undefined local_1138 [16];
  ushort local_1128;
  undefined local_1126;
  uint local_1124;
  ushort local_1120;
  undefined local_1118 [16];
  ulonglong local_1108;
  undefined8 local_1100;
  ulonglong local_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 uStack4320;
  ushort *local_10d8;
  undefined **local_10c0;
  undefined4 local_10b8;
  undefined4 uStack4276;
  undefined4 uStack4272;
  undefined4 uStack4268;
  ushort *local_10a8;
  undefined ***local_1058;
  ulonglong local_1048 [512];
  ulonglong local_48;
  undefined8 uStack64;
  
  uStack64 = 0x140005036;
  local_48 = DAT_140030470 ^ (ulonglong)auStackY4608;
  uVar14 = 0;
  uVar1 = param_1 + param_2 * 8;
  local_1150 = 0;
  puVar11 = (ulonglong *)param_3;
  while( true ) {
    local_11a0 = *param_3;
    local_119a = param_3[3];
    local_1190 = (ulonglong)local_119a;
    local_1198 = *(char *)(param_3 + 4);
    local_119e = param_3[1];
    local_119c = *(undefined *)(param_3 + 2);
    if (local_119a == 0) {
      local_1190 = 0;
    }
    else if (local_1198 == '\x01') {
      local_1190 = local_1190 + 2;
    }
    else if (local_1198 == '\x02') {
      local_1190 = local_1190 + 4;
    }
    local_1160 = 0;
    puVar12 = local_1048;
    local_1188 = 0;
    local_1178 = ZEXT816(0);
    local_1168 = (ulonglong *)0x0;
    local_115e = 0;
    local_11c0[0] = 0x1000;
    uVar9 = (undefined)param_1;
    uVar6 = FUN_140003464(uVar9,(char)local_119a,(char)puVar11,(char)local_11b8,puVar12,local_11c0);
    FUN_140001e9c((uint)uVar6);
    if ((uint)uVar6 != 0) {
      local_11b8[0] = 0;
      local_11c0[0] = 0;
    }
    uVar6 = 0;
    FUN_1400046ac(&local_11a0,(short *)local_1048,(ulonglong)local_11c0[0],0x1000);
    puVar11 = local_1168;
    if (local_1160._1_1_ != '\0') break;
    local_10e8 = &local_1158;
    local_1158 = 0;
    uStack4320 = &local_1150;
    local_10d8 = &local_11a0;
    local_10e8._4_4_ = (undefined4)((ulonglong)local_10e8 >> 0x20);
    uStack4320._4_4_ = (undefined4)((ulonglong)uStack4320 >> 0x20);
    local_10c0 = &PTR_FUN_140026068;
    local_1058 = &local_10c0;
    local_11b0[0] = (void *)(*(longlong *)(param_3 + 0xc) + 10);
    local_1148 = param_3[1];
    local_1146 = *(undefined *)(param_3 + 2);
    local_1128 = param_3[3];
    local_1126 = *(undefined *)(param_3 + 4);
    local_10b8 = (undefined4)local_10e8;
    uStack4276 = local_10e8._4_4_;
    uStack4272 = (undefined4)uStack4320;
    uStack4268 = uStack4320._4_4_;
    local_1144 = 0;
    local_1140 = 0;
    local_1138 = ZEXT816(0);
    local_1124 = 0;
    local_1120 = 0;
    local_1118 = ZEXT816(0);
    local_10a8 = local_10d8;
LAB_1400051c2:
    uVar10 = 0;
    puVar11 = *(ulonglong **)(param_3 + 0x10);
    uVar7 = FUN_1400044d0(&local_1148,local_11b0,(undefined *)puVar11);
    uVar4 = local_1144;
    uVar15 = SUB81(puVar12,0);
    uVar13 = (undefined)uVar6;
    if ((char)uVar7 != '\0') {
      if (local_1144 != 0) {
        do {
          uVar7 = FUN_1400044d0(&local_1128,local_11b0,*(undefined **)(param_3 + 0x10));
          if ((char)uVar7 == '\0') break;
          local_11c0[0] = local_1124;
          local_1108 = (ulonglong)local_1120;
          local_1100 = local_1118._8_8_;
          local_10f8 = (ulonglong)local_1140;
          local_10f0 = local_1138._8_8_;
          if (local_1058 == (undefined ***)0x0) {
            FUN_14000266c();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = 0;
          puVar12 = &local_1108;
          puVar11 = &local_10f8;
          cVar5 = (*(code *)(*local_1058)[4])();
          uVar15 = SUB81(puVar12,0);
          uVar13 = (undefined)uVar6;
          if (cVar5 == '\0') {
            if (local_1058 != (undefined ***)0x0) {
              (*(code *)(*local_1058)[3])();
            }
            bVar3 = false;
            goto LAB_1400052b0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
      }
      goto LAB_1400051c2;
    }
    if (local_1058 != (undefined ***)0x0) {
      (*(code *)(*local_1058)[3])();
    }
    bVar3 = true;
LAB_1400052b0:
    if ((char)local_1160 == '\0') {
LAB_140005307:
      param_1 = param_1 + 8;
      local_1150 = local_1158;
    }
    else {
      puVar11 = (ulonglong *)(ulonglong)(uint)(local_1178._0_4_ - (int)local_1188);
      uVar6 = FUN_14000350c(uVar9,(char)local_1188,(char)(local_1178._0_4_ - (int)local_1188),uVar13
                            ,uVar15,local_11b8[0],1);
      if ((int)uVar6 != -0x3fffffff) {
        if ((int)uVar6 != 0) {
          puVar11 = (ulonglong *)(ulonglong)(uint)(local_1178._0_4_ - (int)local_1188);
          FUN_14000350c(uVar9,(char)local_1188,(char)(local_1178._0_4_ - (int)local_1188),uVar13,
                        uVar15,0,0);
        }
        goto LAB_140005307;
      }
      uVar14 = uVar14 + 1;
      bVar3 = false;
    }
    puVar12 = local_1168;
    local_1168 = (ulonglong *)0x0;
    if (puVar12 != (ulonglong *)0x0) {
      pvVar8 = GetProcessHeap();
      HeapFree(pvVar8,0,puVar12);
      puVar11 = puVar12;
    }
    if (((bVar3) || (uVar1 <= param_1)) || (0x31 < uVar14)) goto LAB_140005389;
  }
  local_1168 = (ulonglong *)0x0;
  if (puVar11 != (ulonglong *)0x0) {
    pvVar8 = GetProcessHeap();
    HeapFree(pvVar8,0,puVar11);
  }
LAB_140005389:
  FUN_140023f70(local_48 ^ (ulonglong)auStackY4608);
  return;
}



undefined4 * FUN_1400053c0(undefined4 *param_1)

{
  *param_1 = 0x40000;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)((longlong)param_1 + 0x3a) = 0;
  *(undefined2 *)((longlong)param_1 + 6) = 4;
  *(undefined8 *)(param_1 + 4) = 4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x46) = 4;
  param_1[0x10] = 0x40000;
  *(undefined *)(param_1 + 0x11) = 1;
  *(undefined *)(param_1 + 0x12) = 2;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 8;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined *)((longlong)param_1 + 0x7a) = 0;
  param_1[0x20] = 0x40000;
  *(undefined *)(param_1 + 0x21) = 1;
  *(undefined2 *)((longlong)param_1 + 0x86) = 0;
  *(undefined *)(param_1 + 0x22) = 1;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined *)((longlong)param_1 + 0xba) = 0;
  return param_1;
}



void FUN_140005480(ushort *param_1)

{
  undefined auStack104 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack104;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    local_48 = 0x418a073aa3bc1c75;
    local_40 = 0x418a073aa3bc2475;
    local_38 = 0x418a073aa3bc2c75;
    FUN_140005014((ulonglong)&local_48,3,param_1);
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    local_48 = 0x418a073aa3bc3475;
    local_40 = 0x418a073aa3bc3c75;
    local_38 = 0x418a073aa3bc4475;
    FUN_140005014((ulonglong)&local_48,3,param_1 + 0x20);
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    local_48 = 0x418a073aa3bc4c75;
    local_40 = 0x418a073aa3bc5475;
    local_38 = 0x418a073aa3bc5c75;
    local_30 = 0x418a073aa3bc6475;
    local_28 = 0x418a073aa3bc6c75;
    local_20 = 0x418a073aa3bc7475;
    FUN_140005014((ulonglong)&local_48,6,param_1 + 0x40);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStack104);
  return;
}



void FUN_140005590(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  longlong **pplVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong local_18;
  longlong local_10;
  
  *param_2 = 0;
  pplVar1 = (longlong **)(param_1 + 0x28);
  plVar3 = *pplVar1;
  uVar4 = 0;
  uVar6 = (ulonglong)(*(longlong *)(param_1 + 0x30) - (longlong)plVar3) >> 4;
  plVar5 = plVar3;
  if (uVar6 != 0) {
    do {
      uVar2 = uVar4 + 1;
      if (*plVar5 == 0) {
        plVar3[uVar4 * 2] = param_3;
        plVar3[uVar4 * 2 + 1] = param_4;
        *param_2 = uVar2;
        return;
      }
      uVar4 = uVar2;
      plVar5 = plVar5 + 2;
    } while (uVar2 < uVar6);
  }
  local_18 = param_3;
  local_10 = param_4;
  uVar4 = FUN_14000406c(pplVar1,&local_18,&DAT_00000010);
  if ((char)uVar4 != '\0') {
    *param_2 = (ulonglong)(*(longlong *)(param_1 + 0x30) - (longlong)*pplVar1) >> 4;
  }
  return;
}



void FUN_140005628(LPCRITICAL_SECTION param_1,PSRWLOCK param_2,longlong param_3)

{
  if (param_3 != 0) {
    EnterCriticalSection(param_1);
    AcquireSRWLockExclusive(param_2);
    if (param_3 - 1U <
        (ulonglong)(*(longlong *)&param_1[1].LockCount - (longlong)param_1[1].DebugInfo) >> 4) {
      *(undefined (*) [16])((longlong)param_1[1].DebugInfo + (param_3 - 1U) * 0x10) = ZEXT816(0);
    }
    if (param_2 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(param_2);
    }
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400056c8(LPCRITICAL_SECTION param_1,PSRWLOCK param_2)

{
  LIST_ENTRY *pLVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  
  AcquireSRWLockShared(param_2);
  uVar4 = (ulonglong)(*(longlong *)&param_1[1].LockCount - (longlong)param_1[1].DebugInfo) >> 4;
  if (param_2 != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(param_2);
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      pcVar5 = (code *)0x0;
      EnterCriticalSection(param_1);
      AcquireSRWLockExclusive(param_2);
      if (uVar2 < uVar4) {
        pLVar1 = (LIST_ENTRY *)(&(param_1[1].DebugInfo)->Type + uVar2 * 8);
        uVar3 = uVar2;
        do {
          uVar2 = uVar3 + 1;
          if (pLVar1->Flink != (_LIST_ENTRY *)0x0) {
            pcVar5 = *(code **)(&(param_1[1].DebugInfo)->Type + uVar3 * 8);
            break;
          }
          pLVar1 = pLVar1 + 1;
          uVar3 = uVar2;
        } while (uVar2 < uVar4);
      }
      if (param_2 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_2);
      }
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)();
      }
      if (param_1 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(param_1);
      }
    } while (uVar2 < uVar4);
  }
  return;
}



void FUN_1400057ec(longlong param_1)

{
  LPVOID lpMem;
  HANDLE hHeap;
  undefined4 local_c8 [16];
  undefined local_88 [64];
  undefined local_48 [64];
  
  FUN_1400053c0(local_c8);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1400045b8((longlong)local_c8,param_1 + 8);
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_1400045b8((longlong)local_88,param_1 + 0x48);
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
    FUN_1400045b8((longlong)local_48,param_1 + 0x88);
  }
  FUN_140005480((ushort *)local_c8);
  FUN_140005974((longlong)local_c8);
  lpMem = *(LPVOID *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lpMem != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  FUN_140005974(param_1 + 8);
  return;
}



void FUN_1400058d4(PSRWLOCK param_1)

{
  undefined4 local_c8 [16];
  undefined local_88 [64];
  undefined local_48 [64];
  
  FUN_1400053c0(local_c8);
  AcquireSRWLockExclusive(param_1);
  if (*(char *)&param_1[8].Ptr != '\0') {
    FUN_1400045b8((longlong)local_c8,(longlong)(param_1 + 1));
  }
  if (*(char *)&param_1[0x10].Ptr != '\0') {
    FUN_1400045b8((longlong)local_88,(longlong)(param_1 + 9));
  }
  if (*(char *)&param_1[0x18].Ptr != '\0') {
    FUN_1400045b8((longlong)local_48,(longlong)(param_1 + 0x11));
  }
  ReleaseSRWLockExclusive(param_1);
  FUN_140005480((ushort *)local_c8);
  FUN_140005974((longlong)local_c8);
  return;
}



void FUN_140005974(longlong param_1)

{
  LPVOID pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = *(LPVOID *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,pvVar1);
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,pvVar1);
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,pvVar1);
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140005a24(char *param_1,undefined4 param_2,uint param_3,int param_4)

{
  PSRWLOCK pRVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((*param_1 != '\0') && (uVar4 = FUN_140005f40((longlong)param_1), (char)uVar4 != '\0')) {
    pRVar1 = *(PSRWLOCK *)(param_1 + 0x18);
    if (param_3 == 0xfe) {
      FUN_1400058d4(pRVar1);
      cVar2 = '\x01';
    }
    else {
      if (199 < param_3) {
        if ((int)param_3 < 0x100) {
          return;
        }
        if (0x1ff < param_3) {
          return;
        }
      }
      AcquireSRWLockExclusive(pRVar1);
      if (((param_3 < 8) && ((0xccU >> (param_3 & 0x1f) & 1) != 0)) || (param_3 - 0x100 < 0x80)) {
        FUN_140006b60((ushort *)(pRVar1 + 1),param_3,param_2);
        cVar2 = *(char *)&pRVar1[8].Ptr;
      }
      else {
        cVar2 = FUN_140006b28((ushort *)(pRVar1 + 9),param_3,param_2,param_4);
      }
      if (pRVar1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar1);
      }
    }
    if ((cVar2 != '\0') && (DAT_140031330 == '\0')) {
      uVar4 = DAT_140031310;
      if (DAT_140031310 != 0) {
        bVar3 = (*(code *)DAT_140031310)();
        uVar4 = (ulonglong)bVar3;
      }
      if ((int)uVar4 == 0) {
        pRVar1 = (PSRWLOCK)(param_1 + 0x20);
        AcquireSRWLockExclusive(pRVar1);
        FUN_140005ff0(param_1);
        if (pRVar1 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar1);
        }
      }
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140005ddc(char *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  PSRWLOCK SRWLock;
  PTP_TIMER p_Var1;
  char cVar2;
  DWORD dwErrCode;
  PTP_TIMER pti;
  _FILETIME local_res8;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  
  if (*param_1 == '\0') {
    return;
  }
  if (DAT_140031330 != '\0') {
    return;
  }
  if (DAT_140031310 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (*(code *)DAT_140031310)();
  }
  if (cVar2 != '\0') {
    return;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x28);
  AcquireSRWLockExclusive(SRWLock);
  local_22 = 0;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  FUN_14000406c((void **)(param_1 + 0xf8),&local_28,(void *)0xc);
  if (param_1[0x40] == '\0') {
    pti = *(PTP_TIMER *)(param_1 + 0x38);
    if (pti == (PTP_TIMER)0x0) {
      pti = CreateThreadpoolTimer(FUN_140007b00,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      p_Var1 = *(PTP_TIMER *)(param_1 + 0x38);
      if (p_Var1 != (PTP_TIMER)0x0) {
        dwErrCode = GetLastError();
        FUN_14000781c(p_Var1);
        SetLastError(dwErrCode);
      }
      *(PTP_TIMER *)(param_1 + 0x38) = pti;
      if (pti == (PTP_TIMER)0x0) goto LAB_140005f09;
    }
    local_res8 = (_FILETIME)0xfffffffffd050f80;
    SetThreadpoolTimer(pti,&local_res8,0,0x4e2);
    param_1[0x40] = '\x01';
  }
LAB_140005f09:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}



ulonglong FUN_140005f40(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  int *local_res8;
  
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  bVar4 = uVar2 == 0;
  if (bVar4) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      local_res8 = (int *)0x0;
      iVar1 = FUN_140006b98(*(undefined8 *)(param_1 + 8),&local_res8);
      if ((-1 < iVar1) && (*(longlong *)(param_1 + 0x10) == 0)) {
        *(int **)(param_1 + 0x10) = local_res8;
      }
    }
    SRWLock = (PSRWLOCK)(param_1 + 0x20);
    uVar3 = -(ulonglong)(*(longlong *)(param_1 + 0x10) != 0) & *(longlong *)(param_1 + 0x10) + 0x20U
    ;
    AcquireSRWLockExclusive(SRWLock);
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    if (*(ulonglong *)(param_1 + 0x18) == 0) {
      *(ulonglong *)(param_1 + 0x18) = uVar3;
      uVar2 = uVar3;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
      uVar2 = *(ulonglong *)(param_1 + 0x18);
    }
    bVar4 = uVar2 == 0;
  }
  return uVar2 & 0xffffffffffffff00 | (ulonglong)!bVar4;
}



void FUN_140005ff0(PVOID param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  PTP_TIMER pti;
  _FILETIME local_res8;
  
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    pti = *(PTP_TIMER *)((longlong)param_1 + 0x30);
    if (pti == (PTP_TIMER)0x0) {
      pti = CreateThreadpoolTimer(FUN_140007a60,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      p_Var1 = *(PTP_TIMER *)((longlong)param_1 + 0x30);
      if (p_Var1 != (PTP_TIMER)0x0) {
        dwErrCode = GetLastError();
        FUN_14000781c(p_Var1);
        SetLastError(dwErrCode);
      }
      *(PTP_TIMER *)((longlong)param_1 + 0x30) = pti;
      if (pti == (PTP_TIMER)0x0) {
        return;
      }
    }
    local_res8 = (_FILETIME)0xffffffff4d2fa200;
    SetThreadpoolTimer(pti,&local_res8,0,75000);
    *(undefined *)((longlong)param_1 + 0x41) = 1;
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400060b8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  DWORD dwErrCode;
  undefined auStackY152 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStackY152;
  local_40 = param_2;
  if (*param_1 == 0) {
    local_48 = 0;
    local_44 = 0;
    FUN_140003464((char)&local_40,(char)param_2,(undefined)param_3,(char)&local_48,0,&local_44);
    if (*param_1 != 0) {
      dwErrCode = GetLastError();
      FUN_1400042ec();
      SetLastError(dwErrCode);
    }
    *param_1 = 0;
    if (DAT_140031398 == (FARPROC)0x0) {
      if (DAT_140031410 == (HMODULE)0x0) {
        DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
      }
      DAT_140031398 = GetProcAddress(DAT_140031410,"RtlSubscribeWnfStateChangeNotification");
      if (DAT_140031398 == (FARPROC)0x0) goto LAB_1400061d5;
    }
    (*DAT_140031398)();
  }
LAB_1400061d5:
  FUN_140023f70(local_38 ^ (ulonglong)auStackY152);
  return;
}



undefined8 FUN_140006200(void)

{
  char *in_R9;
  
  if (*in_R9 != '\0') {
    FUN_1400056c8((LPCRITICAL_SECTION)(in_R9 + 0x68),(PSRWLOCK)(in_R9 + 0x20));
  }
  return 0;
}



void FUN_140006230(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_1400056c8((LPCRITICAL_SECTION)(param_1 + 0x68),(PSRWLOCK)(param_1 + 0x20));
  }
  return;
}



void FUN_140006260(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_1400056c8((LPCRITICAL_SECTION)(param_1 + 0xb0),(PSRWLOCK)(param_1 + 0x20));
  }
  return;
}



void FUN_140006288(longlong param_1)

{
  if ((param_1 != 0) && (DAT_1400302c8 != (PSRWLOCK)0x0)) {
    FUN_140005628((LPCRITICAL_SECTION)(DAT_1400302c8 + 0x19),DAT_1400302c8,param_1);
  }
  return;
}



ulonglong FUN_1400062b8(uint *param_1,uint param_2,byte param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint local_res20 [2];
  
  puVar5 = (uint *)&DAT_140031468;
  if (param_4 == 0) {
    puVar5 = (uint *)&DAT_140031388;
  }
  uVar1 = *puVar5;
  if ((uVar1 & 1) == 0) {
    local_res20[0] = 1;
    iVar2 = FUN_140006978();
    uVar4 = FUN_140003ddc(param_1,param_2,(uint)param_3,param_4,local_res20,param_5);
    iVar3 = (int)uVar4;
    uVar1 = *puVar5;
    *puVar5 = (-(uint)(local_res20[0] != 0) & 8) + 3;
    if ((local_res20[0] == 0) && ((uVar1 & 2) == 0)) {
      uVar4 = FUN_140006a48(puVar5,0,iVar2);
    }
    uVar4 = uVar4 & 0xffffffffffffff00 | (ulonglong)(iVar3 != 0);
  }
  else if ((uVar1 & 8) == 0) {
    uVar4 = (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  else {
    uVar4 = FUN_140003ddc(param_1,param_2,(uint)param_3,param_4,(uint *)0x0,param_5);
    uVar4 = uVar4 & 0xffffffffffffff00 | (ulonglong)((int)uVar4 != 0);
  }
  return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_1400063b0(uint param_1,uint param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined local_28 [16];
  undefined8 local_18;
  
  local_28 = ZEXT816(0);
  local_18 = 0;
  uVar1 = FUN_1400062b8((uint *)local_28,param_1,(param_2 & 0xffffff7f) - 2 < 2,param_2 >> 7 & 1,
                        param_3);
  local_28._0_4_ = 0;
  if ((char)uVar1 != '\0') {
  }
  if ((int)local_18 != 0) {
    local_28._0_4_ = local_28._0_4_ | 0x80;
  }
  if (local_18._4_4_ != 0) {
    local_28._0_4_ = local_28._0_4_ | 0x40;
  }
  return local_28._0_4_;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps

void FUN_140006420(int param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  HANDLE hHeap;
  short sVar4;
  uint uVar5;
  undefined auStack408 [48];
  ulonglong local_168;
  uint local_158 [14];
  LPVOID local_120;
  int local_108;
  undefined local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack408;
  uVar5 = param_2 & 0x7fffffff;
  iVar2 = (int)param_3;
  if (((param_1 == 0) && (iVar2 == 0)) && (uVar5 == 0)) {
    if (DAT_140031330 == '\0') {
      uVar3 = DAT_140031310;
      if (DAT_140031310 != 0) {
        bVar1 = (*(code *)DAT_140031310)();
        uVar3 = (ulonglong)bVar1;
      }
      if ((int)uVar3 == 0) {
        uVar3 = FUN_140005f40((longlong)&DAT_1400302b0);
        if ((char)uVar3 != '\0') {
          FUN_1400056c8((LPCRITICAL_SECTION)(DAT_1400302c8 + 0x19),DAT_1400302c8);
        }
      }
    }
    goto LAB_1400065d4;
  }
  sVar4 = (short)uVar5;
  if (uVar5 >> 0x1e != 0) {
    FUN_140005ddc(&DAT_1400302b0,param_1,sVar4,iVar2);
    goto LAB_1400065d4;
  }
  if ((iVar2 != 0) || (uVar5 == 0xfe)) {
    FUN_140005a24(&DAT_1400302b0,param_1,uVar5,iVar2);
    goto LAB_1400065d4;
  }
  local_168 = (ulonglong)CONCAT24(sVar4,param_1);
  if ((int)param_2 < 0) {
    local_168 = CONCAT26(1,CONCAT24(sVar4,param_1));
  }
  if (DAT_140031298 == (FARPROC)0x0) {
    if (DAT_140031410 == (HMODULE)0x0) {
      DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_140031298 = GetProcAddress(DAT_140031410,"RtlNotifyFeatureUsage");
    if (DAT_140031298 != (FARPROC)0x0) goto LAB_140006555;
    iVar2 = -0x3ffffec7;
  }
  else {
LAB_140006555:
    iVar2 = (*DAT_140031298)();
  }
  if (iVar2 != 0) {
    iVar2 = FUN_1400035c8(local_158,0,param_3,(undefined (*) [16])local_f8);
    if (iVar2 == 0) {
      FUN_140003aa4((longlong)local_158,param_1,sVar4,param_2 >> 0x1f);
      if (local_108 != 0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,local_120);
      }
    }
  }
LAB_1400065d4:
  FUN_140023f70(local_28 ^ (ulonglong)auStack408);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140006600(ulonglong *param_1,longlong param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_3 == -1) {
    *param_1 = 0;
    if ((DAT_1400302b0 != '\0') && (DAT_140031330 == '\0')) {
      uVar3 = DAT_140031310;
      if (DAT_140031310 != 0) {
        bVar1 = (*(code *)DAT_140031310)();
        uVar3 = (ulonglong)bVar1;
      }
      if (((int)uVar3 == 0) &&
         (uVar3 = FUN_140005f40((longlong)&DAT_1400302b0), (char)uVar3 != '\0')) {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_1400302d0);
        SRWLock = DAT_1400302c8;
        if ((DAT_140030310 == 0) && (DAT_1400302c8 != (PSRWLOCK)0x0)) {
          DAT_140030310 = 0;
          AcquireSRWLockExclusive(DAT_1400302c8);
          FUN_140005590((longlong)(SRWLock + 0x19),(ulonglong *)&DAT_140030310,
                        (longlong)FUN_140006260,(longlong)&DAT_1400302b0);
          ReleaseSRWLockExclusive(SRWLock);
        }
        FUN_140005590((longlong)&DAT_140030360,param_1,param_2,0);
        if (*param_1 != 0) {
          *param_1 = *param_1 | 0x80000000;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1400302d0);
      }
    }
    return;
  }
  *param_1 = 0;
  if (DAT_1400302b0 == '\0') {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1400302d0);
  if (DAT_140030308 == 0) {
    DAT_140030308 = 0;
    if (DAT_1400312a8 == (FARPROC)0x0) {
      if (DAT_140031410 == (HMODULE)0x0) {
        DAT_140031410 = GetModuleHandleW(L"ntdll.dll");
      }
      DAT_1400312a8 =
           GetProcAddress(DAT_140031410,"RtlRegisterFeatureConfigurationChangeNotification");
      if (DAT_1400312a8 == (FARPROC)0x0) {
        iVar2 = -0x3ffffec7;
        goto LAB_140005c3b;
      }
    }
    iVar2 = (*DAT_1400312a8)();
  }
  else {
    iVar2 = 0;
  }
LAB_140005c3b:
  if (((iVar2 == 0) &&
      (iVar2 = FUN_1400060b8(&DAT_1400302f8,0x418a073aa3bc7c75,&DAT_1400302b0), iVar2 == 0)) &&
     (iVar2 = FUN_1400060b8(&DAT_140030300,0x418a073aa3bc88f5,&DAT_1400302b0), iVar2 == 0)) {
    FUN_140005590((longlong)&DAT_140030318,param_1,param_2,param_3);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1400302d0);
  return;
}



void FUN_140006640(ulonglong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  if ((param_1 & 0x80000000) == 0) {
    if (DAT_1400302b0 == '\0') {
      return;
    }
    p_Var1 = (LPCRITICAL_SECTION)&DAT_140030318;
  }
  else {
    if (DAT_1400302b0 == '\0') {
      return;
    }
    param_1 = param_1 & 0xffffffff7fffffff;
    p_Var1 = (LPCRITICAL_SECTION)&DAT_140030360;
  }
  FUN_140005628(p_Var1,(PSRWLOCK)&DAT_1400302d0,param_1);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140006698(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DAT_140031360;
  if ((DAT_140031360 != 0) || (pcVar1 = (code *)DAT_1400313b0, DAT_1400313b0 != 0)) {
    (*pcVar1)();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400066c8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DAT_140031458;
  if ((DAT_140031458 != 0) || (pcVar1 = (code *)DAT_140031470, DAT_140031470 != 0)) {
    (*pcVar1)();
  }
  return;
}



void FUN_1400066f8(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 8);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = *(int **)(param_1 + 0x58);
    for (piVar3 = *(int **)(param_1 + 0x50); piVar3 != piVar1; piVar3 = piVar3 + 4) {
      LOCK();
      **(uint **)(piVar3 + 2) = **(uint **)(piVar3 + 2) & (-(uint)(*piVar3 != 0) & 0x205) - 0x208;
    }
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = 1;
    if (*(int *)(param_1 + 0x1c) + 1 != 0) {
      iVar2 = *(int *)(param_1 + 0x1c) + 1;
    }
    *(int *)(param_1 + 0x1c) = iVar2;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



void thunk_FUN_1400066f8(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 8);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = *(int **)(param_1 + 0x58);
    for (piVar3 = *(int **)(param_1 + 0x50); piVar3 != piVar1; piVar3 = piVar3 + 4) {
      LOCK();
      **(uint **)(piVar3 + 2) = **(uint **)(piVar3 + 2) & (-(uint)(*piVar3 != 0) & 0x205) - 0x208;
    }
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = 1;
    if (*(int *)(param_1 + 0x1c) + 1 != 0) {
      iVar2 = *(int *)(param_1 + 0x1c) + 1;
    }
    *(int *)(param_1 + 0x1c) = iVar2;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14000679c(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined auStack168 [48];
  undefined4 local_78;
  uint uStack116;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStack168;
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (0xf < (ulonglong)(lVar2 - lVar7)) {
    for (; lVar7 != lVar2; lVar7 = lVar7 + 0x10) {
      puVar3 = *(uint **)(lVar7 + 8);
      uVar4 = *puVar3;
      while( true ) {
        LOCK();
        if (uVar4 == *puVar3) break;
        uVar4 = *puVar3;
      }
      *puVar3 = uVar4 & 0xffc0401e;
      uVar6 = uVar4 >> 1 & 0xf;
      if (uVar6 != 0) {
        uVar8 = puVar3[1];
        while( true ) {
          LOCK();
          puVar1 = puVar3 + 1;
          if (uVar8 == *puVar1) break;
          uVar8 = *puVar1;
        }
        *puVar1 = uVar8 | uVar6;
        uVar6 = uVar6 & ~uVar8;
      }
      local_78 = 2;
      local_70 = 6;
      uStack116 = uVar6 & 1;
      puVar10 = (undefined8 *)&local_78;
      local_68 = 3;
      local_6c = uVar6 >> 1 & 1;
      uVar8 = uVar4 >> 5 & 0x1ff;
      local_60 = 7;
      uVar9 = 0;
      local_64 = uVar6 >> 2 & 1;
      local_5c = uVar6 >> 3;
      local_58 = 0;
      local_50 = 4;
      local_54 = uVar8;
      if ((uVar4 & 0x4000) != 0) {
        local_54 = 0;
      }
      local_48 = 1;
      local_40 = 5;
      uVar6 = uVar4 >> 0xf & 0x7f;
      local_4c = -(uint)((uVar4 & 0x4000) != 0) & uVar8;
      local_44 = uVar6;
      if ((uVar4 & 0x400000) != 0) {
        local_44 = 0;
      }
      local_3c = -(uint)((uVar4 & 0x400000) != 0) & uVar6;
      do {
        if ((int)((ulonglong)*puVar10 >> 0x20) != 0) {
          FUN_140006698();
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 < 8);
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
    pcVar5 = (code *)DAT_140031360;
    if ((DAT_140031360 != 0) || (pcVar5 = (code *)DAT_1400313b0, DAT_1400313b0 != 0)) {
      (*pcVar5)();
    }
  }
  FUN_140023f70(local_38 ^ (ulonglong)auStack168);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_140006978(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_140030c14 != 0) {
    return DAT_140030c14;
  }
  if (DAT_140030bf8 == '\0') {
LAB_140006a28:
    iVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
    if (DAT_140030c18 == 0) {
      DAT_140030c18 = 0;
      pcVar1 = (code *)DAT_1400313a0;
      if ((DAT_1400313a0 != 0) || (pcVar1 = (code *)DAT_140031408, DAT_140031408 != 0)) {
        (*pcVar1)();
      }
      if (DAT_140030c18 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
        goto LAB_140006a28;
      }
      DAT_140030c14 = 1;
    }
    iVar2 = DAT_140030c14;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
  }
  return iVar2;
}



void FUN_140006a48(uint *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int local_18 [2];
  uint *local_10;
  
  if (DAT_140030bf8 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
    if (((param_3 == 0) || (param_3 != DAT_140030c14)) ||
       (local_18[0] = param_2, local_10 = param_1,
       uVar1 = FUN_14000406c((void **)&DAT_140030c48,local_18,&DAT_00000010), (char)uVar1 == '\0'))
    {
      LOCK();
      *param_1 = *param_1 & (-(uint)(param_2 != 0) & 0x205) - 0x208;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
    return;
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140006af0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DAT_140031360;
  if ((DAT_140031360 != 0) || (pcVar1 = (code *)DAT_1400313b0, DAT_1400313b0 != 0)) {
    (*pcVar1)();
  }
  return;
}



void FUN_140006b28(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  FUN_1400047e8(param_1,local_res10,4,local_res18,4,param_4);
  return;
}



void FUN_140006b60(ushort *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  FUN_1400047e8(param_1,local_res10,4,local_res18,4,1);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps

void FUN_140006b98(undefined8 param_1,int **param_2)

{
  code *pcVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hHandle;
  HANDLE pvVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  HANDLE pvVar9;
  undefined8 in_stack_00000000;
  undefined auStack680 [32];
  undefined4 local_288;
  undefined8 local_280;
  ulonglong local_278;
  undefined local_270 [16];
  HANDLE local_260;
  int *local_258;
  wchar_t local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStack680;
  *param_2 = (int *)0x0;
  DVar3 = GetCurrentProcessId();
  local_288 = 0x130;
  local_280 = param_1;
  FUN_140001860(local_248,0x104,L"Local\\SM0:%d:%d:%hs",(ulonglong)DVar3);
  uVar8 = 0x1f0001;
  hHandle = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_248,0,0x1f0001);
  local_260 = hHandle;
  if (hHandle == (HANDLE)0x0) {
    FUN_140001efc();
    goto LAB_140006ced;
  }
  uVar7 = 0;
  DVar3 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  pvVar9 = hHandle;
  if (DVar3 == 0x102) {
LAB_140006c66:
    if ((DVar3 & 0xffffff7f) != 0) {
      pvVar9 = (HANDLE)0x0;
    }
  }
  else if (DVar3 != 0) {
    if (DVar3 != 0x80) {
      FUN_140002634(in_stack_00000000,0xb4c,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_140006c66;
  }
  piVar6 = (int *)0x0;
  local_278 = 0;
  iVar4 = FUN_140007868((longlong)local_248,&local_278,uVar7,uVar8);
  if (iVar4 < 0) {
    FUN_1400025bc(in_stack_00000000,0x6b,&DAT_140027608);
  }
  else {
    piVar6 = (int *)(local_278 << 2);
    iVar4 = 0;
  }
  if (iVar4 < 0) {
    iVar4 = 0x126;
LAB_140006e9a:
    FUN_1400025bc(in_stack_00000000,iVar4,&DAT_140027608);
  }
  else {
    if (piVar6 == (int *)0x0) {
      *param_2 = (int *)0x0;
      pvVar5 = GetProcessHeap();
      piVar6 = (int *)HeapAlloc(pvVar5,8,0x130);
      lVar2 = DAT_140031300;
      if (DAT_140031300 != 0) {
        GetProcessHeap();
        (*(code *)lVar2)();
      }
      local_258 = piVar6;
      if (piVar6 == (int *)0x0) {
        FUN_1400025bc(in_stack_00000000,0x142,&DAT_140027608);
      }
      else {
        local_270 = ZEXT816(0);
        iVar4 = FUN_14000276c((HANDLE *)local_270,(longlong)local_248,(ulonglong)piVar6);
        if (iVar4 < 0) {
          FUN_1400025bc(in_stack_00000000,0x145,&DAT_140027608);
          if (local_270._8_8_ != (HANDLE)0x0) {
            FUN_14000267c(local_270._8_8_);
          }
          if (local_270._0_8_ != (HANDLE)0x0) {
            FUN_14000267c(local_270._0_8_);
          }
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,piVar6);
        }
        else {
          *(HANDLE *)(piVar6 + 4) = local_270._0_8_;
          *(HANDLE *)(piVar6 + 2) = hHandle;
          hHandle = (HANDLE)0x0;
          *(HANDLE *)(piVar6 + 6) = local_270._8_8_;
          *piVar6 = 1;
          memset(piVar6 + 10,0,0x108);
          *(undefined8 *)(piVar6 + 8) = 0;
          FUN_1400053c0(piVar6 + 10);
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(piVar6 + 0x3a),0,0);
          *(undefined8 *)(piVar6 + 0x44) = 0;
          *(undefined8 *)(piVar6 + 0x46) = 0;
          *(undefined8 *)(piVar6 + 0x48) = 0;
          *(undefined8 *)(piVar6 + 0x4a) = 0;
          iVar4 = 0;
          *param_2 = piVar6;
        }
        if (-1 < iVar4) goto LAB_140006ce0;
      }
      iVar4 = 0x12e;
      goto LAB_140006e9a;
    }
    *param_2 = piVar6;
    **param_2 = *piVar6 + 1;
    hHandle = local_260;
  }
LAB_140006ce0:
  if (pvVar9 != (HANDLE)0x0) {
    FUN_1400026b0(pvVar9);
  }
LAB_140006ced:
  if (hHandle != (HANDLE)0x0) {
    FUN_14000267c(hHandle);
  }
  FUN_140023f70(local_38 ^ (ulonglong)auStack680);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140006ed0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  DWORD DVar4;
  ulonglong uVar5;
  HANDLE hHeap;
  HANDLE hHandle;
  undefined8 in_stack_00000000;
  undefined4 local_c8 [16];
  undefined local_88 [64];
  undefined local_48 [64];
  
  if (DAT_140031330 != '\0') {
LAB_140006ff0:
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_1400053c0(local_c8);
      if (*(char *)(param_1 + 0x18) != '\0') {
        FUN_1400045b8((longlong)local_c8,(longlong)(param_1 + 10));
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        FUN_1400045b8((longlong)local_88,(longlong)(param_1 + 0x1a));
      }
      if (*(char *)(param_1 + 0x38) != '\0') {
        FUN_1400045b8((longlong)local_48,(longlong)(param_1 + 0x2a));
      }
      FUN_140005480((ushort *)local_c8);
      FUN_140005974((longlong)local_c8);
    }
    return;
  }
  uVar5 = DAT_140031310;
  if (DAT_140031310 != 0) {
    bVar3 = (*(code *)DAT_140031310)();
    uVar5 = (ulonglong)bVar3;
  }
  if ((int)uVar5 != 0) goto LAB_140006ff0;
  hHandle = *(HANDLE *)(param_1 + 2);
  DVar4 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar4 != 0x102) {
    if (DVar4 == 0) goto LAB_140006f4d;
    if (DVar4 != 0x80) {
      FUN_140002634(in_stack_00000000,0xb4c,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((DVar4 & 0xffffff7f) != 0) {
    hHandle = (HANDLE)0x0;
  }
LAB_140006f4d:
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_1400026e0((HANDLE *)(param_1 + 4));
    if (hHandle != (HANDLE)0x0) {
      DVar4 = GetLastError();
      FUN_1400026b0(hHandle);
      SetLastError(DVar4);
    }
    hHandle = (HANDLE)0x0;
    FUN_1400057ec((longlong)(param_1 + 8));
    if (*(HANDLE *)(param_1 + 6) != (HANDLE)0x0) {
      FUN_14000267c(*(HANDLE *)(param_1 + 6));
    }
    if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
      FUN_14000267c(*(HANDLE *)(param_1 + 4));
    }
    if (*(HANDLE *)(param_1 + 2) != (HANDLE)0x0) {
      FUN_14000267c(*(HANDLE *)(param_1 + 2));
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  if (hHandle == (HANDLE)0x0) {
    return;
  }
  FUN_1400026b0(hHandle);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps

void FUN_14000709c(undefined8 param_1,int **param_2)

{
  code *pcVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hHandle;
  HANDLE pvVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  HANDLE pvVar9;
  undefined8 in_stack_00000000;
  undefined auStack680 [32];
  undefined4 local_288;
  undefined8 local_280;
  undefined local_278 [16];
  ulonglong local_268;
  HANDLE local_260;
  int *local_258;
  wchar_t local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStack680;
  *param_2 = (int *)0x0;
  DVar3 = GetCurrentProcessId();
  local_288 = 0x78;
  local_280 = param_1;
  FUN_140001860(local_248,0x104,L"Local\\SM0:%d:%d:%hs",(ulonglong)DVar3);
  uVar8 = 0x1f0001;
  hHandle = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_248,0,0x1f0001);
  local_260 = hHandle;
  if (hHandle == (HANDLE)0x0) {
    FUN_140001efc();
    goto LAB_1400071f1;
  }
  uVar7 = 0;
  DVar3 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  pvVar9 = hHandle;
  if (DVar3 == 0x102) {
LAB_14000716a:
    if ((DVar3 & 0xffffff7f) != 0) {
      pvVar9 = (HANDLE)0x0;
    }
  }
  else if (DVar3 != 0) {
    if (DVar3 != 0x80) {
      FUN_140002634(in_stack_00000000,0xb4c,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_14000716a;
  }
  piVar6 = (int *)0x0;
  local_268 = 0;
  iVar4 = FUN_140007868((longlong)local_248,&local_268,uVar7,uVar8);
  if (iVar4 < 0) {
    FUN_1400025bc(in_stack_00000000,0x6b,&DAT_140027608);
  }
  else {
    piVar6 = (int *)(local_268 << 2);
    iVar4 = 0;
  }
  if (iVar4 < 0) {
    iVar4 = 0x126;
LAB_140007389:
    FUN_1400025bc(in_stack_00000000,iVar4,&DAT_140027608);
  }
  else {
    if (piVar6 == (int *)0x0) {
      *param_2 = (int *)0x0;
      pvVar5 = GetProcessHeap();
      piVar6 = (int *)HeapAlloc(pvVar5,8,0x78);
      lVar2 = DAT_140031300;
      if (DAT_140031300 != 0) {
        GetProcessHeap();
        (*(code *)lVar2)();
      }
      local_258 = piVar6;
      if (piVar6 == (int *)0x0) {
        FUN_1400025bc(in_stack_00000000,0x142,&DAT_140027608);
      }
      else {
        local_278 = ZEXT816(0);
        iVar4 = FUN_14000276c((HANDLE *)local_278,(longlong)local_248,(ulonglong)piVar6);
        if (iVar4 < 0) {
          FUN_1400025bc(in_stack_00000000,0x145,&DAT_140027608);
          if (local_278._8_8_ != (HANDLE)0x0) {
            FUN_14000267c(local_278._8_8_);
          }
          if (local_278._0_8_ != (HANDLE)0x0) {
            FUN_14000267c(local_278._0_8_);
          }
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,piVar6);
        }
        else {
          *(HANDLE *)(piVar6 + 2) = hHandle;
          hHandle = (HANDLE)0x0;
          *(HANDLE *)(piVar6 + 4) = local_278._0_8_;
          local_278 = ZEXT816(0);
          *piVar6 = 1;
          local_260 = (HANDLE)0x0;
          *(HANDLE *)(piVar6 + 6) = local_278._8_8_;
          memset((void *)((longlong)piVar6 + 0x22),0,0x56);
          *(undefined2 *)(piVar6 + 8) = 0x58;
          piVar6[9] = 1;
          memset(piVar6 + 10,0,0x50);
          iVar4 = 0;
          *param_2 = piVar6;
        }
        if (-1 < iVar4) goto LAB_1400071e4;
      }
      iVar4 = 0x12e;
      goto LAB_140007389;
    }
    *param_2 = piVar6;
    **param_2 = *piVar6 + 1;
    hHandle = local_260;
  }
LAB_1400071e4:
  if (pvVar9 != (HANDLE)0x0) {
    FUN_1400026b0(pvVar9);
  }
LAB_1400071f1:
  if (hHandle != (HANDLE)0x0) {
    FUN_14000267c(hHandle);
  }
  FUN_140023f70(local_38 ^ (ulonglong)auStack680);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400073c0(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  code *pcVar3;
  byte bVar4;
  DWORD DVar5;
  ulonglong uVar6;
  HANDLE pvVar7;
  HANDLE hHandle;
  LPVOID lpMem;
  LPVOID *ppvVar8;
  undefined8 in_stack_00000000;
  
  if (DAT_140031330 != '\0') {
LAB_140007536:
    *param_1 = *param_1 + -1;
    return;
  }
  uVar6 = DAT_140031310;
  if (DAT_140031310 != 0) {
    bVar4 = (*(code *)DAT_140031310)();
    uVar6 = (ulonglong)bVar4;
  }
  if ((int)uVar6 != 0) goto LAB_140007536;
  hHandle = *(HANDLE *)(param_1 + 2);
  DVar5 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar5 != 0x102) {
    if (DVar5 == 0) goto LAB_14000743b;
    if (DVar5 != 0x80) {
      FUN_140002634(in_stack_00000000,0xb4c,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((DVar5 & 0xffffff7f) != 0) {
    hHandle = (HANDLE)0x0;
  }
LAB_14000743b:
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_1400026e0((HANDLE *)(param_1 + 4));
    if (hHandle != (HANDLE)0x0) {
      DVar5 = GetLastError();
      FUN_1400026b0(hHandle);
      SetLastError(DVar5);
    }
    hHandle = (HANDLE)0x0;
    for (ppvVar8 = (LPVOID *)(param_1 + 10); ppvVar8 != (LPVOID *)(param_1 + 0x1e);
        ppvVar8 = ppvVar8 + 1) {
      lpMem = *ppvVar8;
      while (lpMem != (LPVOID)0x0) {
        pvVar2 = *(LPVOID *)((longlong)lpMem + 8);
        FUN_140002d84((longlong)lpMem + 0x10);
        pvVar7 = GetProcessHeap();
        HeapFree(pvVar7,0,lpMem);
        lpMem = pvVar2;
      }
      *ppvVar8 = (LPVOID)0x0;
    }
    if (*(HANDLE *)(param_1 + 6) != (HANDLE)0x0) {
      FUN_14000267c(*(HANDLE *)(param_1 + 6));
    }
    if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
      FUN_14000267c(*(HANDLE *)(param_1 + 4));
    }
    if (*(HANDLE *)(param_1 + 2) != (HANDLE)0x0) {
      FUN_14000267c(*(HANDLE *)(param_1 + 2));
    }
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,param_1);
  }
  if (hHandle == (HANDLE)0x0) {
    return;
  }
  FUN_1400026b0(hHandle);
  return;
}



void FUN_14000781c(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    // WARNING: Could not recover jumptable at 0x000140007855. Too many branches
                    // WARNING: Treating indirect jump as call
  CloseThreadpoolTimer(param_1);
  return;
}



void FUN_140007868(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  int iVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  HANDLE pvVar5;
  LPCWSTR pWVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000000;
  undefined auStack632 [32];
  int local_258;
  int local_254 [3];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStack632;
  *param_2 = 0;
  uVar7 = 0;
  FID_conflict_StringCchCopyW(local_248,0x104,param_1);
  FID_conflict_StringCchCatW(local_248,0x104,(longlong)&DAT_140027648);
  pWVar6 = local_248;
  pvVar3 = OpenSemaphoreW(0x1f0003,0,pWVar6);
  if (pvVar3 == (HANDLE)0x0) {
    DVar1 = GetLastError();
    if (DVar1 != 2) {
      iVar2 = FUN_1400025f4(in_stack_00000000,0xc9,&DAT_140027608,param_4);
      goto LAB_140007a07;
    }
  }
  else {
    local_254[0] = 0;
    local_258 = 0;
    uVar4 = FUN_140002948(pvVar3,local_254,pWVar6,param_4);
    iVar2 = (int)uVar4;
    if (iVar2 < 0) {
      FUN_1400025bc(in_stack_00000000,0xcf,&DAT_140027608);
    }
    else {
      FID_conflict_StringCchCatW(local_248,0x104,(longlong)&DAT_140027650);
      pWVar6 = local_248;
      pvVar5 = OpenSemaphoreW(0x1f0003,0,pWVar6);
      if (pvVar5 == (HANDLE)0x0) {
        iVar2 = FUN_1400025f4(in_stack_00000000,0xd5,&DAT_140027608,param_4);
      }
      else {
        uVar4 = FUN_140002948(pvVar5,&local_258,pWVar6,param_4);
        iVar2 = (int)uVar4;
        if (-1 < iVar2) {
          FUN_14000267c(pvVar5);
          uVar7 = (longlong)local_254[0] | (longlong)local_258 << 0x1f;
          FUN_14000267c(pvVar3);
          iVar2 = 0;
          goto LAB_140007a07;
        }
        FUN_1400025bc(in_stack_00000000,0xd7,&DAT_140027608);
        FUN_14000267c(pvVar5);
      }
    }
    FUN_14000267c(pvVar3);
LAB_140007a07:
    if (iVar2 < 0) {
      FUN_1400025bc(in_stack_00000000,0x62,&DAT_140027608);
      goto LAB_140007a2b;
    }
  }
  *param_2 = uVar7;
LAB_140007a2b:
  FUN_140023f70(local_38 ^ (ulonglong)auStack632);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140007a60(undefined8 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  ulonglong uVar2;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x20);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x41] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    if (DAT_140031330 == '\0') {
      uVar2 = DAT_140031310;
      if (DAT_140031310 != 0) {
        bVar1 = (*(code *)DAT_140031310)();
        uVar2 = (ulonglong)bVar1;
      }
      if ((int)uVar2 == 0) {
        uVar2 = FUN_140005f40((longlong)param_2);
        if ((char)uVar2 != '\0') {
          FUN_1400056c8((LPCRITICAL_SECTION)(*(PSRWLOCK *)(param_2 + 0x18) + 0x19),
                        *(PSRWLOCK *)(param_2 + 0x18));
        }
      }
    }
    if (*(PSRWLOCK *)(param_2 + 0x18) != (PSRWLOCK)0x0) {
      FUN_1400058d4(*(PSRWLOCK *)(param_2 + 0x18));
    }
  }
  return;
}



void FUN_140007b00(undefined8 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x28);
    AcquireSRWLockExclusive(SRWLock);
    plVar1 = (longlong *)(param_2 + 0xf8);
    if (0xb < (ulonglong)(*(longlong *)(param_2 + 0x100) - *plVar1)) {
      FUN_140004100(plVar1);
      *(longlong *)(param_2 + 0x100) = *plVar1;
    }
    param_2[0x40] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



undefined8 * FUN_140007b80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140026090;
  if ((param_2 & 1) != 0) {
    _o_free(param_1,0x20);
  }
  return param_1;
}



undefined8 * FUN_140007bc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140026090;
  if ((param_2 & 1) != 0) {
    _o_free(param_1,8);
  }
  return param_1;
}



void FUN_140007c00(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = &PTR_FUN_140026068;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 2) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



void FUN_140007c30(void)

{
  return;
}



ulonglong FUN_140007c40(longlong param_1,void **param_2,ulonglong *param_3,void **param_4,
                       ulonglong *param_5,int *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = **(ulonglong **)(param_1 + 0x10);
  if (uVar1 <= **(ulonglong **)(param_1 + 8)) {
    uVar1 = FUN_1400047e8(*(ushort **)(param_1 + 0x18),*param_2,*param_3,*param_4,*param_5,*param_6)
    ;
    uVar2 = 0;
    if ((char)uVar1 == '\0') goto LAB_140007c97;
  }
  uVar2 = 1;
  **(longlong **)(param_1 + 8) = **(longlong **)(param_1 + 8) + 1;
LAB_140007c97:
  return uVar1 & 0xffffffffffffff00 | uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007ca8(void)

{
  if (DAT_140031520 != (HGLOBAL)0x0) {
    GlobalFree(DAT_140031520);
  }
  if (DAT_140031528 != (HGLOBAL)0x0) {
    GlobalFree(DAT_140031528);
  }
  _DAT_140031520 = ZEXT816(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007cf4(void)

{
  WCHAR local_res8 [16];
  
  _DAT_140031580 = 0xc;
  _DAT_140031570 = FUN_14001e190;
  GetLocaleInfoW(0x400,0xd,local_res8,2);
  if (local_res8[0] == L'1') {
    _DAT_140031530 = 0xa006;
    DAT_140031550 = 1000;
    DAT_140031558 = 1000;
    DAT_14003154c = 0x2ee;
  }
  else {
    _DAT_140031530 = 0xa00a;
    DAT_140031550 = 0x9c4;
    DAT_140031558 = 0x9c4;
    DAT_14003154c = 2000;
  }
  DAT_140031554 = DAT_14003154c;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007d94(void)

{
  _DAT_140032380 = 0;
  _DAT_140032480 = 0;
  DAT_1400325a1 = 0;
  DAT_1400325a2 = 0;
  return;
}



void FUN_140007db8(int param_1,int param_2)

{
  undefined auStackY88 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY88;
  if (DAT_140032378 != 0) {
    FUN_140011f40(param_1);
  }
  GetClientRect(DAT_140032590,&local_28);
  MoveWindow(DAT_140032588,0,0,param_1,
             param_2 - (-(uint)(DAT_140032378 != 0) & local_28.bottom - local_28.top),1);
  FUN_140023f70(local_18 ^ (ulonglong)auStackY88);
  return;
}



void FUN_140007e58(int param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 local_res10;
  undefined local_res14;
  undefined8 local_res18;
  uint local_res20 [2];
  
  uVar3 = DAT_1400314a8;
  if ((DAT_1400314a8 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14000d1d8(&DAT_1400314a8,local_res20);
    local_res18 = *puVar1;
    uVar3 = (uint)local_res18;
  }
  local_res10 = 0;
  local_res14 = 3;
  FUN_14000dd74((uint *)&DAT_1400314b0,0x107b944,uVar3 >> 8 & 1,(ulonglong)(uVar3 >> 9 & 1),
                &local_res10,1,3);
  uVar2 = SendMessageW(DAT_140032588,0x1514,(longlong)(param_1 + -1),0);
  if ((int)uVar2 != -1) {
    SendMessageW(DAT_140032588,0xb1,uVar2 & 0xffffffff,uVar2 & 0xffffffff);
    SendMessageW(DAT_140032588,0xb7,0,0);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_140007f44(short *param_1,uint param_2)

{
  short sVar1;
  BOOL BVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 local_res8;
  undefined4 local_res18;
  undefined local_res1c;
  uint local_res20 [2];
  
  sVar1 = *param_1;
  if (sVar1 == -0x4411) {
    if (param_2 < 3) {
      return DAT_1400315e8;
    }
    if (*(char *)(param_1 + 1) != -0x41) {
      return DAT_1400315e8;
    }
    return 4;
  }
  if (sVar1 == -0x101) {
LAB_140007fac:
    uVar5 = 2;
  }
  else {
    if (sVar1 == -2) {
      return 3;
    }
    local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
    BVar2 = IsTextUnicode(param_1,param_2,(LPINT)&local_res8);
    if (BVar2 != 0) {
      if (((int)local_res8 == 2) && ((int)param_2 < 100)) {
        BVar2 = 0;
      }
      if (BVar2 != 0) goto LAB_140007fac;
    }
    iVar3 = MultiByteToWideChar(0xfde9,8,(LPCSTR)param_1,param_2,(LPWSTR)0x0,0);
    if ((iVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x459)) {
      return 1;
    }
    uVar7 = DAT_1400314b8;
    if ((DAT_1400314b8 & 2) == 0) {
      puVar6 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_res20);
      local_res8 = *puVar6;
      uVar7 = (uint)local_res8;
    }
    local_res18 = 0;
    local_res1c = 3;
    FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar7 >> 8 & 1,(ulonglong)(uVar7 >> 9 & 1),
                  &local_res18,1,3);
    uVar5 = 5;
  }
  return uVar5;
}



void FUN_14000809c(LPCWSTR param_1)

{
  BOOL BVar1;
  HANDLE hFile;
  undefined auStackY1128 [32];
  uint local_428 [4];
  short local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY1128;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    BVar1 = ReadFile(hFile,local_418,0x400,local_428,(LPOVERLAPPED)0x0);
    if (((0 < BVar1) && (local_428[0] != 0)) && (1 < local_428[0])) {
      FUN_140007f44(local_418,local_428[0]);
    }
    CloseHandle(hFile);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY1128);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_14000817c(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 local_res8;
  undefined local_resc;
  undefined8 local_res18;
  uint local_res20 [2];
  
  iVar1 = (**(code **)(*param_1 + 0xd0))();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x30))();
    if (-1 < iVar1) {
      if (param_2 != '\0') {
        iVar1 = (**(code **)(*param_1 + 0x98))();
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x98))();
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_1 + 0x98))();
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_1 + 0x98))();
            if (-1 < iVar1) {
              uVar3 = DAT_1400314b8;
              if ((DAT_1400314b8 & 2) == 0) {
                puVar2 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_res20);
                local_res18 = *puVar2;
                uVar3 = (uint)local_res18;
              }
              local_res8 = 0;
              local_resc = 3;
              FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar3 >> 8 & 1,
                            (ulonglong)(uVar3 >> 9 & 1),&local_res8,1,3);
              iVar1 = (**(code **)(*param_1 + 0x98))();
              if (-1 < iVar1) {
                iVar1 = (**(code **)(*param_1 + 0x98))();
              }
            }
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xd8))();
  }
  return iVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x0001400084ba)

int FUN_140008370(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x88))();
  if ((((-1 < iVar1) && (iVar1 = (**(code **)(*param_2 + 0xb0))(), -1 < iVar1)) &&
      (iVar1 = (**(code **)(*param_2 + 0x20))(), -1 < iVar1)) &&
     (((iVar1 = (**(code **)(*param_2 + 0x50))(), -1 < iVar1 &&
       (iVar1 = (**(code **)(*param_2 + 0x48))(), -1 < iVar1)) &&
      ((iVar1 = (**(code **)(*param_2 + 0x18))(), -1 < iVar1 &&
       (iVar1 = (**(code **)(*param_2 + 0xa0))(), -1 < iVar1)))))) {
    iVar1 = (**(code **)(lRam0000000000000000 + 0x28))();
  }
  return iVar1;
}



void FUN_1400084ec(LPCWSTR *param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  LPCWSTR pv;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined auStack456 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  LPCWSTR local_178 [2];
  tagOFNW local_168;
  wchar_t local_c8 [80];
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack456;
  FUN_14000e224(local_178,(short *)0x0,0x104);
  pv = local_178[0];
  if (local_178[0] != (LPCWSTR)0x0) {
    memset(&local_168,0,0x98);
    local_168.hwndOwner = DAT_140032598;
    local_168.hInstance = DAT_140031670;
    local_168.lStructSize = 0x98;
    local_168.nMaxFile = 0x104;
    local_168.lpstrFile = pv;
    FID_conflict_StringCchCopyW(pv,0x104,(longlong)L"*.txt");
    local_188 = 0;
    pwVar7 = L"%s%c*.txt%c%s%c*.*%c";
    uVar6 = 0x50;
    local_190 = 0;
    local_168.lpstrTitle = DAT_1400305b8;
    local_198 = DAT_1400305c0;
    local_1a0 = 0;
    local_1a8 = 0;
    uVar8 = DAT_1400305c8;
    iVar1 = FUN_140001860(local_c8,0x50,L"%s%c*.txt%c%s%c*.*%c",DAT_1400305c8);
    local_168.Flags = 0x881064;
    local_168.nFilterIndex = 1;
    local_168.lpstrDefExt = L"txt";
    pwVar5 = local_c8;
    if (iVar1 < 0) {
      pwVar5 = local_168.lpstrFilter;
    }
    local_168.lpTemplateName = (LPCWSTR)0xf;
    local_168.lpfnHook = FUN_14000c4a0;
    local_168.lpstrFilter = pwVar5;
    uVar4 = SetThreadDpiAwarenessContext(0xfffffffffffffffe);
    iVar1 = 0;
    BVar2 = GetOpenFileNameW(&local_168);
    if (BVar2 == 0) {
      DVar3 = CommDlgExtendedError();
      if (DVar3 == 0) {
        iVar1 = -0x7ff8fb39;
      }
      else {
        FUN_14000bf20();
        iVar1 = -0x7fffbffb;
      }
    }
    SetThreadDpiAwarenessContext();
    if (-1 < iVar1) {
      FUN_1400208bc(uVar4,uVar6,pwVar7,uVar8);
      if (DAT_1400315e4 == 0) {
        DAT_1400315e4 = FUN_14000809c(pv);
      }
      if (param_1 != local_178) {
        FUN_14000c6a8(param_1,local_178);
        pv = local_178[0];
      }
    }
    if (pv != (LPCWSTR)0x0) {
      CoTaskMemFree(pv);
    }
  }
  FUN_140023f70(local_28 ^ (ulonglong)auStack456);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

HRESULT FUN_1400086fc(undefined8 param_1,LPCWSTR *param_2)

{
  HRESULT HVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int *piVar4;
  LPCWSTR *ppWVar5;
  int local_res18 [2];
  longlong *local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_140027440,(LPUNKNOWN)0x0,1,(IID *)&DAT_140027b88,local_28);
  if (-1 < HVar1) {
    local_res20 = (longlong *)0x0;
    HVar1 = (**(code **)*local_28[0])();
    if (-1 < HVar1) {
      HVar1 = FUN_14000817c(local_res20,'\x01');
      if (-1 < HVar1) {
        HVar1 = (**(code **)(*local_res20 + 200))();
        if (-1 < HVar1) {
          ppWVar5 = param_2;
          HVar1 = FUN_140008370(param_1,local_28[0]);
          if (-1 < HVar1) {
            piVar4 = local_res18;
            uVar3 = 1;
            plVar2 = local_res20;
            HVar1 = (**(code **)(*local_res20 + 0xc0))();
            if (-1 < HVar1) {
              DAT_1400315e4 = local_res18[0];
              FUN_1400208bc(plVar2,uVar3,piVar4,ppWVar5);
              if (DAT_1400315e4 == 0) {
                DAT_1400315e4 = FUN_14000809c(*param_2);
              }
            }
          }
        }
      }
    }
    plVar2 = local_res20;
    if (local_res20 != (longlong *)0x0) {
      local_res20 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = local_28[0];
  if (local_28[0] != (longlong *)0x0) {
    local_28[0] = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return HVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000885c(longlong param_1,LPWSTR *param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  LPWSTR pv;
  undefined auStack456 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  LPWSTR local_178 [2];
  tagOFNW local_168;
  wchar_t local_c8 [80];
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack456;
  FUN_14000e224(local_178,(short *)0x0,0x104);
  pv = local_178[0];
  if (local_178[0] != (LPWSTR)0x0) {
    memset(&local_168,0,0x98);
    local_168.hwndOwner = DAT_140032598;
    local_168.hInstance = DAT_140031670;
    local_168.lStructSize = 0x98;
    local_168.nMaxFile = 0x104;
    local_168.lpstrFile = pv;
    FID_conflict_StringCchCopyW(pv,0x104,param_1);
    local_188 = 0;
    local_190 = 0;
    local_168.lpstrTitle = DAT_1400305b0;
    local_168.lpfnHook = FUN_14000c3e0;
    local_198 = DAT_1400305c0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_168.Flags = 0x888866;
    local_168.lpTemplateName = (LPCWSTR)0xf;
    iVar1 = FUN_140001860(local_c8,0x50,L"%s%c*.txt%c%s%c*.*%c",DAT_1400305c8);
    pwVar5 = local_c8;
    if (iVar1 < 0) {
      pwVar5 = local_168.lpstrFilter;
    }
    local_168.lpstrDefExt = L"txt";
    local_168.nFilterIndex = 1;
    local_168.lpstrFilter = pwVar5;
    uVar4 = SetThreadDpiAwarenessContext(0xfffffffffffffffe);
    _DAT_140032360 = 1;
    iVar1 = 0;
    BVar2 = GetSaveFileNameW(&local_168);
    if (BVar2 == 0) {
      DVar3 = CommDlgExtendedError();
      if (DVar3 == 0) {
        iVar1 = -0x7ff8fb39;
      }
      else {
        FUN_14000bf20();
        iVar1 = -0x7fffbffb;
      }
    }
    _DAT_140032360 = 0;
    SetThreadDpiAwarenessContext(uVar4);
    if ((-1 < iVar1) && (param_2 != local_178)) {
      FUN_14000c6a8(param_2,local_178);
      pv = local_178[0];
    }
    if (pv != (LPWSTR)0x0) {
      CoTaskMemFree(pv);
    }
  }
  FUN_140023f70(local_28 ^ (ulonglong)auStack456);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HRESULT FUN_140008a60(undefined8 param_1,LPCWSTR param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  HRESULT HVar2;
  BOOL BVar3;
  undefined4 local_48;
  undefined4 uStack68;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28 [2];
  
  local_40 = (longlong *)0x0;
  HVar2 = CoCreateInstance((IID *)&DAT_140027450,(LPUNKNOWN)0x0,1,(IID *)&DAT_140027b68,&local_40);
  if (-1 < HVar2) {
    *param_3 = 0;
    local_28[0] = (longlong *)0x0;
    _DAT_140032360 = 1;
    HVar2 = PSGetPropertyDescriptionListFromString
                      (L"prop:System.Security.EncryptionOwners",(IID *)&DAT_140027b58,local_28);
    if ((-1 < HVar2) && (HVar2 = (**(code **)(*local_40 + 0xe8))(), -1 < HVar2)) {
      local_38 = (longlong *)0x0;
      HVar2 = (**(code **)*local_40)();
      if ((-1 < HVar2) &&
         ((HVar2 = FUN_14000817c(local_38,'\0'), -1 < HVar2 &&
          (HVar2 = (**(code **)(*local_38 + 200))(), plVar1 = local_40, -1 < HVar2)))) {
        BVar3 = PathIsFileSpecW(param_2);
        if (BVar3 == 0) {
          HVar2 = SHCreateItemFromParsingName
                            (param_2,(IBindCtx *)0x0,(IID *)&DAT_140027430,(void **)&local_48);
          if (-1 < HVar2) {
            (**(code **)(*plVar1 + 0xd8))();
            (**(code **)(*(longlong *)CONCAT44(uStack68,local_48) + 0x10))();
          }
        }
        else {
          (**(code **)(*plVar1 + 0x78))();
        }
        local_30 = (longlong *)0x0;
        HVar2 = (**(code **)*local_40)();
        if (((-1 < HVar2) && (HVar2 = FUN_140008370(param_1,local_30), -1 < HVar2)) &&
           (HVar2 = (**(code **)(*local_38 + 0xc0))(), -1 < HVar2)) {
          DAT_1400315e0 = local_48;
        }
        plVar1 = local_30;
        if (local_30 != (longlong *)0x0) {
          local_30 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      plVar1 = local_38;
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((-1 < HVar2) && (param_4 != 0)) {
        (**(code **)*local_40)();
      }
    }
    plVar1 = local_28[0];
    _DAT_140032360 = 0;
    if (local_28[0] != (longlong *)0x0) {
      local_28[0] = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    local_40 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return HVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x000140009bf1)
// WARNING: Removing unreachable block (ram,0x000140009c07)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140008d34(HWND param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  HANDLE pvVar3;
  uint uVar4;
  char cVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  HRESULT HVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  LPWSTR pWVar15;
  INT_PTR IVar16;
  HDC hdc;
  HFONT wParam;
  undefined8 *hIcon;
  HWND pHVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  UINT UVar21;
  wchar_t *pwVar22;
  undefined8 uVar23;
  wchar_t *pwVar24;
  undefined8 *puVar25;
  ushort uVar26;
  HINSTANCE *ppHVar27;
  undefined *puVar28;
  ulonglong uVar29;
  WPARAM wParam_00;
  ulonglong uVar30;
  LPCWSTR lpParameters;
  undefined8 uVar31;
  undefined8 in_stack_00000000;
  undefined auStackY1496 [32];
  INT nShowCmd;
  wchar_t *local_588;
  LPCWSTR local_580;
  uint local_578;
  int local_574;
  uint local_570;
  int local_56c;
  int local_568;
  int local_564;
  undefined4 local_560;
  undefined local_55c;
  undefined4 local_558;
  undefined local_554;
  undefined4 local_550;
  undefined local_54c;
  longlong *local_548;
  LPCWSTR local_540;
  short *local_538;
  HINSTANCE local_530 [2];
  uint local_520 [2];
  uint local_518 [2];
  uint local_510 [2];
  CHOOSEFONTW local_508;
  tagRECT local_498;
  undefined local_488 [24];
  undefined8 local_470;
  undefined local_468 [24];
  undefined8 local_450;
  short local_448 [256];
  short local_248;
  ulonglong local_48;
  
  local_48 = DAT_140030470 ^ (ulonglong)auStackY1496;
  puVar14 = (undefined8 *)0x0;
  local_540 = (LPCWSTR)0x0;
  uVar19 = (uint)param_2;
  if (param_2 < 0x302) {
    if (0x2ff < uVar19) {
LAB_140009a7e:
      if (param_2 == 0x300) {
        _DAT_1400314e2 = _DAT_1400314e2 + 1;
      }
      else if (param_2 == 0x301) {
        _DAT_1400314e4 = _DAT_1400314e4 + 1;
      }
      else {
        _DAT_1400314e8 = _DAT_1400314e8 + 1;
      }
      local_564 = 0;
      local_568 = 0;
      SendMessageW(DAT_140032588,0xb0,(WPARAM)&local_564,(LPARAM)&local_568);
      if (local_564 == local_568) goto LAB_140009c54;
LAB_140009adf:
      uVar26 = 0x150f;
      if (param_2 != 0x1c) {
        uVar26 = param_2;
      }
      goto LAB_140009af3;
    }
    if (0x18 < uVar19) {
      if (uVar19 < 0x22) {
        if (uVar19 == 0x21) {
          _DAT_1400314f0 = _DAT_1400314f0 + 1;
          memset(&local_508,0,0x68);
          hdc = GetDC((HWND)0x0);
          if (hdc != (HDC)0x0) {
            local_508.lStructSize = 0x68;
            local_508.lpLogFont = (LPLOGFONTW)&DAT_140031610;
            local_508.hwndOwner = param_1;
            iVar8 = GetDeviceCaps(hdc,0x5a);
            _DAT_140031610 = MulDiv(DAT_14003067c,iVar8,0x2d0);
            local_508.Flags = 0x1010041;
            _DAT_140031610 = -_DAT_140031610;
            local_508.nFontType = 0x2000;
            ReleaseDC((HWND)0x0,hdc);
            uVar12 = SetThreadDpiAwarenessContext(0xfffffffffffffffe);
            BVar7 = ChooseFontW(&local_508);
            SetThreadDpiAwarenessContext(uVar12);
            if (BVar7 != 0) {
              SetCursor(DAT_140031680);
              iVar8 = GetDpiForWindow();
              _DAT_140031610 = MulDiv(local_508.iPointSize,iVar8,0x2d0);
              _DAT_140031610 = -_DAT_140031610;
              wParam = CreateFontIndirectW((LOGFONTW *)&DAT_140031610);
              if (wParam != (HFONT)0x0) {
                DeleteObject(DAT_140031608);
                DAT_140031608 = wParam;
                SendMessageW(DAT_140032588,0x30,(WPARAM)wParam,1);
                DAT_14003067c = local_508.iPointSize;
              }
              SetCursor(DAT_140031688);
              _DAT_140032350 = 1;
            }
          }
          goto LAB_140009c54;
        }
        if (uVar19 == 0x19) {
          SendMessageW(DAT_140032588,0xb1,0,-1);
          UVar21 = 0xb7;
          goto LAB_1400096ee;
        }
        if (uVar19 == 0x1a) {
          FUN_14000e3a8(0);
          goto LAB_140009c54;
        }
        if (uVar19 == 0x1b) {
          GetClientRect(DAT_140032598,&local_498);
          if (DAT_140032378 == 0) {
            DAT_140032378 = 1;
            FUN_140007db8(local_498.right - local_498.left,local_498.bottom - local_498.top);
            FUN_14000b130();
            ShowWindow(DAT_140032590,5);
          }
          else {
            DAT_140032378 = 0;
            ShowWindow(DAT_140032590,0);
            FUN_140007db8(local_498.right - local_498.left,local_498.bottom - local_498.top);
          }
          _DAT_140032358 = 1;
          goto LAB_140009c54;
        }
        if (uVar19 != 0x1c) {
          uVar18 = uVar19 - 0x1d;
          if (uVar18 != 0) {
            if (uVar18 == 3) {
              iVar8 = FUN_14001cfe0((-(uint)(DAT_14003236c != 0) & 0x100000) + 0x50200104);
              if (iVar8 == 0) {
                MessageBoxW(DAT_140032598,DAT_1400305f8,DAT_140030630,0x30);
              }
              else {
                _DAT_140032358 = 1;
                DAT_14003236c = (uint)(DAT_14003236c == 0);
              }
              uVar19 = DAT_140031488;
              if ((DAT_140031488 & 2) == 0) {
                puVar14 = (undefined8 *)FUN_14000cd48(&DAT_140031488,local_518);
                uVar19 = (uint)*puVar14;
              }
              local_558 = 0;
              local_554 = 3;
              FUN_14000dd74((uint *)&DAT_140031490,0x71cda0,uVar19 >> 8 & 1,
                            (ulonglong)(uVar19 >> 9 & 1),&local_558,1,3);
            }
            goto LAB_140009c54;
          }
LAB_1400094ed:
          if ((_DAT_14003234c != 0) && (_DAT_140032480 != 0)) {
            FUN_14001cc28((ulonglong)uVar18,uVar19 == 0x1d);
            goto LAB_140009c54;
          }
          goto LAB_140009510;
        }
        goto LAB_140009adf;
      }
      if (uVar19 == 0x22) {
        SendMessageW(DAT_140032588,0x4e0,(WPARAM)&local_56c,(LPARAM)&local_570);
        if ((local_56c == 0) || (local_570 == 0)) {
          local_570 = 1;
          local_56c = 1;
        }
        uVar18 = (uint)(local_56c * 100) / local_570 + 10;
        uVar19 = 500;
        if (uVar18 < 500) {
          uVar19 = uVar18;
        }
LAB_140009a3b:
        wParam_00 = (WPARAM)uVar19;
      }
      else {
        if (uVar19 == 0x23) {
          SendMessageW(DAT_140032588,0x4e0,(WPARAM)&local_574,(LPARAM)&local_578);
          if ((local_574 == 0) || (local_578 == 0)) {
            local_578 = 1;
            local_574 = 1;
          }
          uVar18 = (uint)(local_574 * 100) / local_578 - 10;
          uVar19 = 10;
          if (10 < uVar18) {
            uVar19 = uVar18;
          }
          goto LAB_140009a3b;
        }
        if (uVar19 != 0x24) {
          if (uVar19 == 0x40) {
            pwVar22 = L"https://go.microsoft.com/fwlink/?LinkId=834783";
            uVar31 = 0;
            uVar23 = 0;
            uVar12 = 0;
            ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,L"https://go.microsoft.com/fwlink/?LinkId=834783",
                          (LPCWSTR)0x0,(LPCWSTR)0x0,1);
            FUN_1400207b0(uVar12,uVar23,pwVar22,uVar31);
            goto LAB_140009c54;
          }
          if (uVar19 == 0x41) {
            ppHVar27 = local_530;
            local_530[0] = DAT_140031670;
            local_530[1] = (HINSTANCE)DAT_140031678;
            puVar25 = puVar14;
            do {
              hIcon = (undefined8 *)LoadIconW(*ppHVar27,(LPCWSTR)0x2);
              if (hIcon != (undefined8 *)0x0) break;
              uVar19 = (int)puVar25 + 1;
              puVar25 = (undefined8 *)(ulonglong)uVar19;
              ppHVar27 = ppHVar27 + 1;
              hIcon = puVar14;
            } while (uVar19 < 2);
            ShellAboutW(DAT_140032598,DAT_140030630,L"",(HICON)hIcon);
            goto LAB_140009c54;
          }
          if (uVar19 != 0x42) goto LAB_140009c54;
          nShowCmd = 1;
          pwVar22 = L"feedback-hub://?tabid=2&contextid=1010";
          lpParameters = (LPCWSTR)0x0;
          goto LAB_140009371;
        }
        wParam_00 = 100;
      }
      SendMessageW(DAT_140032588,0x4e1,wParam_00,100);
      FUN_14000b660();
      goto LAB_140009c54;
    }
    if (uVar19 == 0x18) {
      _DAT_1400314ee = _DAT_1400314ee + 1;
      IVar16 = DialogBoxParamW(DAT_140031670,(LPCWSTR)0xe,DAT_140032598,FUN_14000bfe0,0);
      if (IVar16 == 0) {
        FUN_140007e58(DAT_14003166c);
      }
      goto LAB_140009c54;
    }
    if (7 < uVar19) {
      if (uVar19 - 8 == 0) {
        pWVar15 = FUN_14000d37c((ulonglong)(uVar19 - 8),&local_540,0x301,param_4);
        if ((int)pWVar15 < 0) {
          FUN_1400025bc(in_stack_00000000,0x355,"shell\\osshell\\accesory\\notepad\\notepad.cpp");
          goto LAB_140009c54;
        }
        lpParameters = L"";
        nShowCmd = 5;
        pwVar22 = local_540;
LAB_140009371:
        ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,pwVar22,lpParameters,(LPCWSTR)0x0,nShowCmd);
        goto LAB_140009c54;
      }
      if (uVar19 == 0xf) goto LAB_140009c54;
      if (uVar19 != 0x10) {
        if (uVar19 != 0x15) {
          uVar18 = uVar19 - 0x16;
          if (uVar18 != 0) {
            if (uVar18 == 1) {
              _DAT_1400314ec = _DAT_1400314ec + 1;
              _DAT_14003234c = 1;
              if (DAT_140032580 != (HWND)0x0) {
                SendMessageW(DAT_140032580,0x10,0,0);
              }
              _DAT_1400315a8 = 0x10001;
              uVar19 = DAT_140032660;
              if ((DAT_140032660 & 2) == 0) {
                puVar14 = (undefined8 *)FUN_14000cf20(&DAT_140032660,local_520);
                uVar19 = (uint)*puVar14;
              }
              local_560 = 0;
              local_55c = 3;
              FUN_14000dd74((uint *)&DAT_140032668,0x10d8158,uVar19 >> 8 & 1,
                            (ulonglong)(uVar19 >> 9 & 1),&local_560,1,3);
              uVar19 = -(uint)(DAT_1400325a2 != '\0') & 4;
              _DAT_1400315a8 =
                   _DAT_1400315a8 | (-(uint)(DAT_1400325a1 != '\0') & 0x100000) + 0x40000 | uVar19;
              FUN_14001cf00((ulonglong)uVar19);
              _DAT_1400315c0 = 0x800080;
              DAT_1400315b0 = &DAT_140032480;
              DAT_1400315b8 = &DAT_140032380;
              DAT_140032580 = ReplaceTextW((LPFINDREPLACEW)&DAT_140031590);
            }
            goto LAB_140009c54;
          }
          goto LAB_1400094ed;
        }
LAB_140009510:
        _DAT_14003234c = 1;
        if (uVar19 == 0x15) {
          _DAT_1400314ea = _DAT_1400314ea + 1;
        }
        if (DAT_140032580 != (HWND)0x0) {
          SendMessageW(DAT_140032580,0x10,0,0);
        }
        _DAT_1400315a8 = 0x10000;
        uVar19 = DAT_140032660;
        if ((DAT_140032660 & 2) == 0) {
          puVar14 = (undefined8 *)FUN_14000cf20(&DAT_140032660,local_510);
          uVar19 = (uint)*puVar14;
        }
        local_550 = 0;
        local_54c = 3;
        FUN_14000dd74((uint *)&DAT_140032668,0x10d8158,uVar19 >> 8 & 1,(ulonglong)(uVar19 >> 9 & 1),
                      &local_550,1,3);
        uVar19 = -(uint)(DAT_1400325a2 != '\0') & 4;
        _DAT_1400315a8 =
             _DAT_1400315a8 |
             (uint)(DAT_1400325a0 == '\0') | (-(uint)(DAT_1400325a1 != '\0') & 0x100000) + 0x40000 |
             uVar19;
        FUN_14001cf00((ulonglong)uVar19);
        DAT_1400315b8 = (undefined *)0x0;
        DAT_1400315b0 = &DAT_140032480;
        _DAT_1400315c0 = 0x80;
        DAT_140032580 = FindTextW((LPFINDREPLACEW)&DAT_140031590);
        goto LAB_140009c54;
      }
      _DAT_1400314e0 = _DAT_1400314e0 + 1;
      UVar21 = 199;
LAB_1400096ee:
      SendMessageW(DAT_140032588,UVar21,0,0);
      goto LAB_140009c54;
    }
    if (uVar19 != 7) {
      if (uVar19 == 1) {
        _DAT_1400314d8 = _DAT_1400314d8 + 1;
        FUN_14000fbec(1);
        goto LAB_140009c54;
      }
      if (uVar19 == 2) {
        iVar8 = FUN_140009fb4();
        uVar19 = DAT_1400315e4;
        if (iVar8 == 0) goto LAB_140009c54;
        local_580 = (LPCWSTR)0x0;
        HVar9 = FUN_1400086fc(param_1,&local_580);
        if (HVar9 < 0) {
          if (HVar9 != -0x7ff8fb39) {
            HVar9 = FUN_1400084ec(&local_580);
          }
          if (-1 < HVar9) goto LAB_1400090ac;
LAB_140009156:
          DAT_1400315e4 = uVar19;
          if (HVar9 == -0x7ff8fff2) {
            MessageBoxW(DAT_140032598,DAT_140030640,DAT_140030630,0x1010);
          }
        }
        else {
LAB_1400090ac:
          pvVar3 = DAT_140031500;
          DAT_140031500 =
               CreateFileW(local_580,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
          uVar4 = DAT_140032378;
          uVar18 = DAT_14003236c;
          uVar10 = FUN_14000efb4(DAT_1400320e0);
          uVar30 = (ulonglong)uVar4;
          uVar13 = (ulonglong)uVar18;
          uVar29 = (ulonglong)uVar10;
          FUN_14002021c((undefined (*) [16])&DAT_1400314d8,uVar10,uVar18,uVar4);
          uVar11 = FUN_14000ace4();
          FUN_14002053c(uVar11,uVar29,uVar13,uVar30);
          cVar5 = FUN_14000f0d4(&local_580,(ulonglong)DAT_1400315e4,0,uVar30);
          if (cVar5 == '\0') {
            FUN_14000fdac(local_580);
            HVar9 = -0x7fffbffb;
            DAT_140031500 = pvVar3;
          }
          if (HVar9 < 0) goto LAB_140009156;
        }
        if (local_580 != (LPCWSTR)0x0) {
          CoTaskMemFree(local_580);
        }
        goto LAB_140009c54;
      }
      if (uVar19 - 3 == 0) {
        _DAT_1400314da = _DAT_1400314da + 1;
        DAT_1400315e0 = DAT_1400315e4;
        if ((DAT_140030678 == 0) &&
           (cVar5 = FUN_14000e730((ulonglong)(uVar19 - 3),&DAT_1400320e0,0,(undefined8 *)0x0),
           cVar5 != '\0')) {
          FUN_14000b83c();
          goto LAB_140009c54;
        }
      }
      else if (uVar19 != 4) {
        if (uVar19 == 5) {
          while (BVar7 = FUN_14000c650((LPPAGESETUPDLGW)&DAT_140031510), BVar7 == 0) {
            DVar6 = CommDlgExtendedError();
            if (((DVar6 - 0x1009 & 0xfffffffc) != 0) || (DVar6 == 0x100a)) {
              FUN_14000bf20();
              goto LAB_140009c54;
            }
            FUN_140007ca8();
            DAT_140031528 = 0;
            DAT_140031520 = 0;
          }
          FID_conflict_StringCchCopyW((short *)&DAT_1400316a0,0x28,(longlong)&DAT_140031740);
          puVar28 = &DAT_140031790;
          uVar12 = 0x28;
          FID_conflict_StringCchCopyW((short *)&DAT_1400316f0,0x28,(longlong)&DAT_140031790);
          _DAT_140032354 = 1;
          if ((_DAT_1400316a0 != 0) || (_DAT_1400316f0 != 0)) {
            puVar14 = (undefined8 *)0x1;
          }
          FUN_140020830(puVar14,uVar12,puVar28,param_4);
        }
        else if (uVar19 == 6) {
          _DAT_1400314de = _DAT_1400314de + 1;
          uVar12 = SetThreadDpiAwarenessContext();
          FUN_14001ea3c(0);
          SetThreadDpiAwarenessContext(uVar12);
        }
        goto LAB_140009c54;
      }
      if (param_2 == 4) {
        _DAT_1400314dc = _DAT_1400314dc + 1;
      }
      pwVar24 = L"*.txt";
      pwVar22 = L"*.txt";
      local_548 = (longlong *)0x0;
      if (DAT_140030678 == 0) {
        pwVar22 = DAT_1400320e0;
      }
      local_588 = (wchar_t *)0x0;
      bVar2 = false;
      iVar8 = FUN_140008a60(param_1,pwVar22,&local_588,(longlong)&local_548);
      if (iVar8 < 0) {
        bVar2 = false;
        if (iVar8 != -0x7ff8fb39) {
          if (DAT_140030678 == 0) {
            pwVar24 = DAT_1400320e0;
          }
          iVar8 = FUN_14000885c((longlong)pwVar24,&local_588);
          bVar2 = true;
        }
        if (-1 < iVar8) goto LAB_140008fb3;
        if (iVar8 == -0x7ff8fff2) {
          MessageBoxW(DAT_140032598,DAT_140030640,DAT_140030630,0x1010);
        }
      }
      else {
LAB_140008fb3:
        uVar29 = 0x1fa;
        memset(&local_248,0,0x1fa);
        plVar20 = local_548;
        if ((((local_548 == (longlong *)0x0) ||
             (uVar13 = FUN_140021688(local_548,&local_248,(uint)uVar29), (int)uVar13 < 0)) ||
            (local_248 == 0)) || (puVar25 = (undefined8 *)&local_248, bVar2)) {
          puVar25 = puVar14;
        }
        cVar5 = FUN_14000e730(plVar20,&local_588,uVar29 & 0xffffffffffffff00 | 1,puVar25);
        if (cVar5 == '\0') {
          FUN_14000fdac(local_588);
        }
        else {
          FUN_14000c6a8(&DAT_1400320e0,&local_588);
          FUN_14000b83c();
        }
      }
      if (local_588 != (wchar_t *)0x0) {
        CoTaskMemFree(local_588);
      }
      plVar20 = local_548;
      if (local_548 != (longlong *)0x0) {
        local_548 = (longlong *)0x0;
        (**(code **)(*plVar20 + 0x10))();
      }
      goto LAB_140009c54;
    }
    UVar21 = 0x10;
  }
  else {
    uVar26 = param_2;
    if (uVar19 != 0x302) {
      if (uVar19 != 0x303) goto LAB_140009c54;
      goto LAB_140009a7e;
    }
LAB_140009af3:
    if ((uVar26 == 0x302) && (_DAT_1400314e6 = _DAT_1400314e6 + 1, DAT_140032348 == 0)) {
      memset(local_448,0,0x1fa);
      iVar8 = FUN_140021808(local_448);
      if ((-1 < iVar8) && (local_448[0] != 0)) {
        local_538 = local_448;
        local_470 = 0;
        DVar6 = WindowsCreateStringReference
                          (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_488
                          );
        if ((int)DVar6 < 0) {
          FUN_140020bc8(DVar6);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar8 = RoGetActivationFactory(local_470);
        local_470 = 0;
        if (-1 < iVar8) {
          FUN_140022274((longlong)local_468,(longlong *)&local_538);
          (**(code **)(lRam0000000000000000 + 0x38))();
          local_450 = 0;
        }
        _DAT_1400314f6 = _DAT_1400314f6 + 1;
      }
    }
    pHVar17 = GetFocus();
    if ((pHVar17 != DAT_140032588) && (pHVar17 != DAT_140032598)) goto LAB_140009c54;
    UVar21 = (UINT)uVar26;
    param_1 = DAT_140032588;
  }
  PostMessageW(param_1,UVar21,0,0);
LAB_140009c54:
  if (local_540 != (LPCWSTR)0x0) {
    CoTaskMemFree(local_540);
  }
  FUN_140023f70(local_48 ^ (ulonglong)auStackY1496);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140009ca4(HDROP param_1,HWND param_2)

{
  HANDLE pvVar1;
  char cVar2;
  UINT UVar3;
  int iVar4;
  undefined8 uVar5;
  LPWSTR local_res18 [2];
  
  UVar3 = DragQueryFileW(param_1,0xffffffff,(LPWSTR)0x0,0);
  if (UVar3 == 0) goto LAB_140009dc9;
  UVar3 = DragQueryFileW(param_1,0,(LPWSTR)0x0,0);
  if (UVar3 == 0) goto LAB_140009dc9;
  FUN_14000e224(local_res18,(short *)0x0,(longlong)(int)(UVar3 + 1));
  DragQueryFileW(param_1,0,local_res18[0],UVar3 + 1);
  SetActiveWindow(param_2);
  pvVar1 = DAT_140031500;
  iVar4 = FUN_140009fb4();
  if (iVar4 != 0) {
    uVar5 = 0;
    DAT_140031500 =
         CreateFileW(local_res18[0],0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    _DAT_140032134 = 1;
    if (DAT_140031500 == (HANDLE)0xffffffffffffffff) {
LAB_140009d9b:
      FUN_14000fdac(local_res18[0]);
      DAT_140031500 = pvVar1;
    }
    else {
      cVar2 = FUN_14000f0d4(local_res18,0,0,uVar5);
      if (cVar2 == '\0') goto LAB_140009d9b;
    }
    _DAT_140032134 = 0;
  }
  if (local_res18[0] != (LPCWSTR)0x0) {
    CoTaskMemFree(local_res18[0]);
  }
LAB_140009dc9:
                    // WARNING: Could not recover jumptable at 0x000140009ddb. Too many branches
                    // WARNING: Treating indirect jump as call
  DragFinish(param_1);
  return;
}



void FUN_140009df0(va_list param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined auStackY2328 [32];
  undefined4 local_8d8 [2];
  LPVOID local_8d0;
  va_list local_8c8 [2];
  undefined4 local_8b8;
  undefined8 local_8b4;
  HINSTANCE local_8ac;
  undefined4 local_8a0;
  undefined8 local_89c;
  LPVOID local_88c;
  undefined4 local_87c;
  undefined *local_878;
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY2328;
  memset(&local_8b8,0,0xa0);
  local_8b4 = DAT_140032598;
  local_8b8 = 0xa0;
  local_878 = &DAT_140027b98;
  local_8ac = DAT_140031670;
  local_8a0 = 8;
  local_89c = 3000;
  local_87c = 2;
  iVar1 = LoadStringW(DAT_140031670,0xbb9,local_818,0x400);
  if (iVar1 == 0) goto LAB_140009f2d;
  local_8d0 = (LPVOID)0x0;
  local_8c8[0] = param_1;
  DVar2 = FormatMessageW(0x2500,local_818,0,0,(LPWSTR)&local_8d0,0,local_8c8);
  if (DVar2 == 0) {
LAB_140009f03:
    local_8d8[0] = 6;
  }
  else {
    local_88c = local_8d0;
    iVar1 = Ordinal_345(&local_8b8,local_8d8,0,0);
    if (iVar1 < 0) goto LAB_140009f03;
  }
  if (local_8d0 != (LPVOID)0x0) {
    CoTaskMemFree(local_8d0);
  }
LAB_140009f2d:
  FUN_140023f70(local_18 ^ (ulonglong)auStackY2328);
  return;
}



undefined FUN_140009f54(void)

{
  LRESULT LVar1;
  
  if (DAT_140030678 != 0) {
    LVar1 = SendMessageW(DAT_140032588,0xe,0,0);
    if (LVar1 == 0) {
      return (char)LVar1;
    }
  }
  LVar1 = SendMessageW(DAT_140032588,0xb8,0,0);
  return (char)LVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140009fb4(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  DWORD dwErrCode;
  ulonglong uVar4;
  LPCWSTR pWVar5;
  wchar_t *psz;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined auStack616 [32];
  wchar_t *local_248;
  LPCWSTR local_240;
  longlong *local_238 [2];
  short local_228 [256];
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack616;
  cVar2 = FUN_140009f54();
  if (cVar2 == '\0') goto LAB_14000a257;
  pWVar5 = DAT_1400320e0;
  if (DAT_140030678 != 0) {
    pWVar5 = DAT_140030658;
  }
  _DAT_140032360 = 1;
  iVar3 = FUN_140009df0((va_list)pWVar5);
  _DAT_140032360 = 0;
  if (iVar3 != 6) goto LAB_14000a257;
  bVar8 = true;
  if (DAT_140030678 == 0) {
    DAT_1400315e0 = DAT_1400315e4;
    cVar2 = FUN_14000e730((ulonglong)DAT_1400315e4,&DAT_1400320e0,0,(undefined8 *)0x0);
    bVar8 = cVar2 == '\0';
    if (cVar2 == '\0') goto LAB_14000a077;
  }
  else {
LAB_14000a077:
    local_240 = (LPCWSTR)0x0;
    psz = L"*.txt";
    if (DAT_140030678 == 0) {
      psz = DAT_1400320e0;
    }
    iVar3 = SHStrDupW(psz,&local_240);
    while ((-1 < iVar3 && (bVar8))) {
      local_238[0] = (longlong *)0x0;
      local_248 = (wchar_t *)0x0;
      iVar3 = FUN_140008a60(DAT_140032598,local_240,&local_248,(longlong)local_238);
      if (-1 < iVar3) {
        uVar7 = 0x1fa;
        memset(local_228,0,0x1fa);
        bVar1 = 0;
        plVar6 = local_238[0];
        if (local_238[0] != (longlong *)0x0) {
          uVar4 = FUN_140021688(local_238[0],local_228,(uint)uVar7);
          iVar3 = (int)uVar4;
          if ((iVar3 < 0) || (bVar1 = 1, local_228[0] == 0)) {
            bVar1 = 0;
          }
        }
        cVar2 = FUN_14000e730(plVar6,&local_248,uVar7 & 0xffffffffffffff00 | 1,
                              (undefined8 *)(-(ulonglong)bVar1 & (ulonglong)local_228));
        if (cVar2 == '\0') {
          FUN_14000fdac(local_248);
          pWVar5 = local_240;
          if (local_240 != (LPCWSTR)0x0) {
            dwErrCode = GetLastError();
            CoTaskMemFree(pWVar5);
            SetLastError(dwErrCode);
          }
          local_240 = (LPCWSTR)0x0;
          iVar3 = SHStrDupW(local_248,&local_240);
        }
        else {
          FUN_14000c6a8(&DAT_1400320e0,&local_248);
          DAT_1400315e4 = DAT_1400315e0;
          FUN_14000b83c();
          bVar8 = false;
        }
      }
      if (local_248 != (wchar_t *)0x0) {
        CoTaskMemFree(local_248);
      }
      plVar6 = local_238[0];
      if (local_238[0] != (longlong *)0x0) {
        local_238[0] = (longlong *)0x0;
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    if (local_240 != (LPCWSTR)0x0) {
      CoTaskMemFree(local_240);
    }
    if ((iVar3 < 0) && (iVar3 == -0x7ff8fff2)) {
      MessageBoxW(DAT_140032598,DAT_140030640,DAT_140030630,0x1010);
    }
  }
  _DAT_1400314da = _DAT_1400314da + 1;
LAB_14000a257:
  FUN_140023f70(local_28 ^ (ulonglong)auStack616);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x00014000a461)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000a290(HWND param_1,UINT param_2,HDROP param_3,HWND param_4)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  ulonglong uVar8;
  HWND pHVar9;
  HWND__ **ppHVar10;
  HKL pHVar11;
  HFONT wParam;
  uint uVar12;
  uint uVar13;
  HCURSOR pHVar14;
  UINT UVar15;
  undefined8 uVar16;
  LPCWSTR lpText;
  ushort uVar17;
  short sVar18;
  undefined auStackY808 [32];
  HWND__ *local_2e0;
  UINT local_2d8;
  undefined local_2d4;
  undefined4 local_2d0;
  undefined local_2cc;
  undefined4 local_2c8;
  undefined local_2c4;
  undefined4 local_2c0;
  undefined local_2bc;
  longlong *local_2b8;
  uint local_2b0 [2];
  uint local_2a8 [2];
  uint local_2a0 [2];
  uint local_298 [2];
  undefined local_290 [24];
  undefined8 local_278;
  undefined local_270 [24];
  undefined8 local_258;
  short local_248;
  ulonglong local_48;
  
  local_48 = DAT_140030470 ^ (ulonglong)auStackY808;
  uVar17 = (ushort)param_3;
  uVar4 = (ushort)((ulonglong)param_4 >> 0x10);
  local_2e0 = param_4;
  local_2d8 = param_2;
  if (param_2 < 0x112) {
    if (param_2 == 0x111) goto LAB_14000aa61;
    if (param_2 == 2) {
      PostQuitMessage(0);
      goto LAB_14000acb4;
    }
    if (param_2 != 5) {
      if (param_2 == 6) {
        if (((uVar17 != 1 && uVar17 != 2) || (BVar7 = IsIconic(DAT_140032598), BVar7 != 0)) ||
           (pHVar9 = GetForegroundWindow(), pHVar9 != DAT_140032598)) goto LAB_14000acb4;
        pHVar9 = GetForegroundWindow();
LAB_14000a747:
        SetFocus(pHVar9);
        goto LAB_14000acb4;
      }
      if (param_2 == 7) {
        BVar7 = IsIconic(DAT_140032598);
        pHVar9 = DAT_140032588;
        if (BVar7 != 0) goto LAB_14000acb4;
        goto LAB_14000a747;
      }
      if (param_2 == 8) {
        UVar15 = 8;
        pHVar9 = DAT_140032588;
LAB_14000a714:
        SendMessageW(pHVar9,UVar15,(WPARAM)param_3,(LPARAM)param_4);
        goto LAB_14000acb4;
      }
      if (param_2 == 0x10) {
        FUN_1400106ec();
        cVar3 = FUN_140009f54();
        if (cVar3 != '\0') {
          uVar12 = DAT_1400314c8;
          if ((DAT_1400314c8 & 2) == 0) {
            ppHVar10 = (HWND__ **)FUN_14000cb70(&DAT_1400314c8,local_2a0);
            local_2e0 = *ppHVar10;
            uVar12 = (uint)local_2e0;
          }
          local_2c8 = 0;
          local_2c4 = 3;
          FUN_14000dd74((uint *)&DAT_1400314d0,0x1228103,uVar12 >> 8 & 1,
                        (ulonglong)(uVar12 >> 9 & 1),&local_2c8,1,3);
          if ((((DAT_1400320e8 == 0) || (*(char *)(DAT_1400320e8 + 0x18) == '\0')) ||
              (uVar8 = FUN_14001f248(DAT_1400320e8), (char)uVar8 == '\0')) &&
             (iVar5 = FUN_140009fb4(), iVar5 == 0)) goto LAB_14000acb4;
        }
        FUN_1400209ec();
        DestroyWindow(DAT_140032590);
        DestroyWindow(DAT_140032598);
        DeleteObject(DAT_140031608);
        goto LAB_14000acb4;
      }
      if (param_2 != 0x11) {
        if (param_2 == 0x16) {
          if (param_3 != (HDROP)0x0) {
            uVar12 = DAT_1400314c8;
            if ((DAT_1400314c8 & 2) == 0) {
              ppHVar10 = (HWND__ **)FUN_14000cb70(&DAT_1400314c8,local_2b0);
              local_2e0 = *ppHVar10;
              uVar12 = (uint)local_2e0;
            }
            local_2d8 = 0;
            local_2d4 = 3;
            FUN_14000dd74((uint *)&DAT_1400314d0,0x1228103,uVar12 >> 8 & 1,
                          (ulonglong)(uVar12 >> 9 & 1),&local_2d8,1,3);
            if ((DAT_1400320e8 != 0) && (((ulonglong)param_4 & 1) != 0)) {
              *(undefined *)(DAT_1400320e8 + 0x18) = 1;
              FUN_14001f248(DAT_1400320e8);
            }
          }
          goto LAB_14000acb4;
        }
        if (param_2 == 0x4e) {
          if ((DAT_140032588 != (HWND)0x0) &&
             (iVar5 = GetDlgCtrlID(DAT_140032588), param_4[2].unused == iVar5)) {
            if (param_4[4].unused == 0x800) {
              if (DAT_140032348 == 0) {
                memset((HWND__ *)&local_248,0,0x1fa);
                iVar5 = FUN_140021808((short *)&local_248);
                if ((-1 < iVar5) && (local_248 != 0)) {
                  local_2e0 = (HWND__ *)&local_248;
                  local_2b8 = (longlong *)0x0;
                  local_278 = 0;
                  DVar6 = WindowsCreateStringReference
                                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37
                                     ,local_290,&local_278);
                  if ((int)DVar6 < 0) {
                    FUN_140020bc8(DVar6);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar5 = RoGetActivationFactory(local_278,&DAT_14002a900,&local_2b8);
                  plVar2 = local_2b8;
                  local_278 = 0;
                  if (-1 < iVar5) {
                    FUN_140022274((longlong)local_270,(longlong *)&local_2e0);
                    (**(code **)(*plVar2 + 0x38))();
                    local_258 = 0;
                  }
                  plVar2 = local_2b8;
                  if (local_2b8 != (longlong *)0x0) {
                    local_2b8 = (longlong *)0x0;
                    (**(code **)(*plVar2 + 0x10))();
                  }
                  _DAT_1400314f6 = _DAT_1400314f6 + 1;
                }
              }
            }
            else if (param_4[4].unused == -0x5f0) {
              FUN_1400205ec(param_4[6].unused,param_4[7].unused);
            }
          }
          goto LAB_14000acb4;
        }
LAB_14000a865:
        UVar15 = param_2;
        if (param_2 != _DAT_14003150c) goto LAB_14000a7df;
        uVar12 = param_4[6].unused;
        DAT_1400325a0 = ~(byte)uVar12 & 1;
        DAT_1400325a2 = (byte)(uVar12 >> 2) & 1;
        uVar13 = DAT_140032660;
        if ((DAT_140032660 & 2) == 0) {
          ppHVar10 = (HWND__ **)FUN_14000cf20(&DAT_140032660,local_298);
          local_2e0 = *ppHVar10;
          uVar13 = (uint)local_2e0;
        }
        uVar8 = (ulonglong)(uVar13 >> 9 & 1);
        local_2c0 = 0;
        local_2bc = 3;
        uVar16 = 0x10d8158;
        FUN_14000dd74((uint *)&DAT_140032668,0x10d8158,uVar13 >> 8 & 1,uVar8,&local_2c0,1,3);
        DAT_1400325a1 = (byte)(uVar12 >> 0x14) & 1;
        if ((uVar12 & 8) == 0) {
          if ((uVar12 & 0x10) == 0) {
            if ((uVar12 & 0x20) == 0) {
              param_3 = (HDROP)0x0;
              if ((uVar12 & 0x40) != 0) {
                FUN_14000b7b0(L"",uVar16,0,uVar8);
                param_3 = (HDROP)0x0;
                DAT_140032580 = (HWND)0x0;
              }
            }
            else {
              iVar5 = FUN_14001ebac();
              param_3 = (HDROP)(ulonglong)(-(uint)(iVar5 != 0) & 0x20);
            }
          }
          else {
            SetCursor(DAT_140031680);
            uVar8 = 1;
            iVar5 = FUN_14001ef38(1);
            uVar16 = FUN_14001cc28(uVar8,DAT_1400325a0);
            SetCursor(DAT_140031688);
            param_3 = (HDROP)(ulonglong)
                             (-(uint)((char)uVar16 != '\0') & 8 | -(uint)(iVar5 != 0) & 0x10);
          }
        }
        else {
          pHVar14 = DAT_140031680;
          SetCursor(DAT_140031680);
          uVar16 = FUN_14001cc28((ulonglong)pHVar14,DAT_1400325a0);
          SetCursor(DAT_140031688);
          param_3 = (HDROP)(ulonglong)(-(uint)((char)uVar16 != '\0') & 8);
        }
        if (DAT_140032580 == (HWND)0x0) goto LAB_14000acb4;
        UVar15 = 0x464;
        pHVar9 = DAT_140032580;
        goto LAB_14000a714;
      }
      if (_DAT_140032360 == 0) {
        cVar3 = FUN_140009f54();
        if (cVar3 != '\0') {
          uVar12 = DAT_1400314c8;
          if ((DAT_1400314c8 & 2) == 0) {
            ppHVar10 = (HWND__ **)FUN_14000cb70(&DAT_1400314c8,local_2a8);
            local_2e0 = *ppHVar10;
            uVar12 = (uint)local_2e0;
          }
          local_2d0 = 0;
          local_2cc = 3;
          FUN_14000dd74((uint *)&DAT_1400314d0,0x1228103,uVar12 >> 8 & 1,
                        (ulonglong)(uVar12 >> 9 & 1),&local_2d0,1,3);
          if (((DAT_1400320e8 == 0) || (((ulonglong)param_4 & 1) == 0)) ||
             (uVar8 = FUN_14001f900(DAT_1400320e8), (char)uVar8 == '\0')) {
            FUN_140009fb4();
          }
        }
        goto LAB_14000acb4;
      }
      MessageBeep(0);
      MessageBeep(0);
      UVar15 = 0x1000;
      lpText = DAT_1400305a8;
      goto LAB_14000aac3;
    }
    if (param_3 == (HDROP)0x0) {
LAB_14000a7c3:
      FUN_140007db8((int)(short)param_4,(int)(short)uVar4);
      goto LAB_14000acb4;
    }
    if (param_3 != (HDROP)0x1) {
      if (param_3 != (HDROP)0x2) goto LAB_14000acb4;
      goto LAB_14000a7c3;
    }
    UVar15 = 5;
    param_3 = (HDROP)0x1;
  }
  else {
    if (param_2 == 0x112) {
      if (((_DAT_140032370 == 0) ||
          (uVar8 = (ulonglong)((uint)param_3 & 0xfff0), (uVar8 - 0xf020 & 0xffffffffffffffcf) != 0))
         || (uVar8 == 0xf030)) {
        DefWindowProcW(param_1,0x112,(WPARAM)param_3,(LPARAM)param_4);
      }
      goto LAB_14000acb4;
    }
    if (param_2 == 0x116) {
      FUN_14000ba28(param_1);
      goto LAB_14000acb4;
    }
    if (param_2 == 0x117) {
      if ((_DAT_140032370 != 0) && (uVar4 != 0)) {
        EnableMenuItem(DAT_140031600,0xf020,3);
      }
      goto LAB_14000acb4;
    }
    if ((param_2 == 0x20a) || (param_2 == 0x20e)) {
      DefWindowProcW(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      FUN_14000b660();
      goto LAB_14000acb4;
    }
    if (param_2 == 0x233) {
      FUN_140009ca4(param_3,param_1);
      goto LAB_14000acb4;
    }
    if (param_2 == 0x2e0) {
      SetWindowPos(DAT_140032598,(HWND)0x0,param_4->unused,param_4[1].unused,
                   param_4[2].unused - param_4->unused,param_4[3].unused - param_4[1].unused,0x14);
      SendMessageW(DAT_140032590,5,(WPARAM)param_3,(LPARAM)param_4);
      iVar5 = GetDpiForWindow();
      _DAT_140031610 = MulDiv(DAT_14003067c,iVar5,0x2d0);
      _DAT_140031610 = -_DAT_140031610;
      wParam = CreateFontIndirectW((LOGFONTW *)&DAT_140031610);
      if (wParam != (HFONT)0x0) {
        DeleteObject(DAT_140031608);
        DAT_140031608 = wParam;
        SendMessageW(DAT_140032588,0x30,(WPARAM)wParam,1);
      }
      RedrawWindow(DAT_140032598,(RECT *)0x0,(HRGN)0x0,5);
      goto LAB_14000acb4;
    }
    if (param_2 != 0x319) {
      if (param_2 != 0x8001) goto LAB_14000a865;
      pHVar11 = GetKeyboardLayout(0);
      UVar15 = 0xd8;
      param_3 = (HDROP)0x1;
      param_4 = (HWND)(ulonglong)(((ushort)pHVar11 & 0x3ff) == 0x11);
      pHVar9 = DAT_140032588;
      goto LAB_14000a714;
    }
    if ((uVar4 & 0xfff) == 5) {
      FUN_140008d34(param_1,0x15,0,param_4);
      goto LAB_14000acb4;
    }
LAB_14000aa61:
    pHVar9 = param_4;
    if (param_4 == DAT_140032588) {
      sVar18 = (short)((ulonglong)param_3 >> 0x10);
      if (sVar18 == 0x300) {
        cVar3 = FUN_140009f54();
        if (cVar3 == DAT_14003235c) goto LAB_14000aae2;
        FUN_14000b83c();
      }
      if (sVar18 == 0x500 || sVar18 == 0x501) {
        if (_DAT_140032374 == 1) {
          _DAT_140032374 = 2;
          goto LAB_14000acb4;
        }
        UVar15 = 0x1010;
        lpText = DAT_140030640;
LAB_14000aac3:
        MessageBoxW(DAT_140032598,lpText,DAT_140030630,UVar15);
        goto LAB_14000acb4;
      }
    }
LAB_14000aae2:
    iVar5 = FUN_140008d34(param_1,uVar17,param_4,pHVar9);
    UVar15 = local_2d8;
    if (iVar5 != 0) goto LAB_14000acb4;
  }
LAB_14000a7df:
  DefWindowProcW(param_1,UVar15,(WPARAM)param_3,(LPARAM)param_4);
LAB_14000acb4:
  FUN_140023f70(local_48 ^ (ulonglong)auStackY808);
  return;
}



undefined4 FUN_14000ace4(void)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  undefined4 uVar2;
  DWORD local_res8 [2];
  undefined4 local_res10 [2];
  HANDLE local_res18 [2];
  
  uVar2 = 0;
  local_res18[0] = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,8,local_res18);
  if (BVar1 != 0) {
    local_res8[0] = 4;
    BVar1 = GetTokenInformation(local_res18[0],TokenElevation,local_res10,4,local_res8);
    if (BVar1 != 0) {
      uVar2 = local_res10[0];
    }
    CloseHandle(local_res18[0]);
  }
  return uVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14000ad6c(HMODULE param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  REGHANDLE RegHandle;
  undefined4 uVar2;
  undefined4 uVar3;
  WCHAR WVar4;
  HRESULT HVar5;
  int iVar6;
  DWORD idProcess;
  BOOL BVar7;
  undefined4 uVar8;
  HMODULE *ppHVar9;
  LPWSTR lpsz;
  HWINEVENTHOOK hWinEventHook;
  undefined *puVar10;
  undefined8 uVar11;
  HMODULE pHVar12;
  HMODULE hLibModule;
  uint uVar13;
  ulonglong uVar15;
  longlong in_GS_OFFSET;
  undefined4 local_68;
  undefined local_64;
  HMODULE local_60;
  uint local_58 [2];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [16];
  ulonglong uVar14;
  
  uVar13 = DAT_140032650;
  if ((DAT_140032650 & 2) == 0) {
    ppHVar9 = (HMODULE *)FUN_14000ca14(&DAT_140032650,local_58);
    local_60 = *ppHVar9;
    uVar13 = (uint)local_60;
  }
  bVar1 = false;
  uVar11 = 0x12766c4;
  local_68 = 0;
  local_64 = 3;
  uVar15 = (ulonglong)(uVar13 >> 9 & 1);
  uVar13 = uVar13 >> 8 & 1;
  uVar14 = (ulonglong)uVar13;
  FUN_14000dd74((uint *)&DAT_140032658,0x12766c4,uVar13,uVar15,&local_68,1,3);
  *(byte *)(*(longlong *)(in_GS_OFFSET + 0x60) + 3) =
       *(byte *)(*(longlong *)(in_GS_OFFSET + 0x60) + 3) | 0x80;
  local_50 = ZEXT816(0);
  local_40 = ZEXT816(0);
  local_30 = ZEXT816(0);
  lpsz = GetCommandLineW();
  CoCreateGuid((GUID *)&DAT_140032118);
  puVar10 = &DAT_1400301f8;
  DAT_140032128 = 0;
  FUN_140001380(&DAT_1400301f8);
  FUN_14001fdd0(puVar10,uVar11,uVar14,uVar15);
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  uVar11 = 0;
  HVar5 = CoInitializeEx((LPVOID)0x0,2);
  if (-1 < HVar5) {
    local_60 = (HMODULE)0x0;
    iVar6 = FUN_140023290(uVar11,&local_60);
    WVar4 = *lpsz;
    hLibModule = local_60;
    if (iVar6 < 0) {
      hLibModule = param_1;
    }
    while ((WVar4 != L'\0' && (((WVar4 != L' ' && (WVar4 != L'\t')) || (bVar1))))) {
      if (WVar4 == L'\"') {
        bVar1 = !bVar1;
      }
      lpsz = CharNextW(lpsz);
      WVar4 = *lpsz;
    }
    for (; (*lpsz == L' ' || (*lpsz == L'\t')); lpsz = lpsz + 1) {
    }
    uVar14 = (ulonglong)param_4;
    pHVar12 = hLibModule;
    iVar6 = FUN_14001224c();
    if (iVar6 != 0) {
      uVar13 = FUN_14000ace4();
      FUN_14001fe50((ulonglong)uVar13,pHVar12,lpsz,uVar14);
      idProcess = GetCurrentProcessId();
      hWinEventHook = SetWinEventHook(0x800b,0x800b,(HMODULE)0x0,FUN_14000b650,idProcess,0,0);
      while (BVar7 = GetMessageW((LPMSG)local_50,(HWND)0x0,0,0), uVar3 = DAT_140032378,
            uVar2 = DAT_14003236c, BVar7 != 0) {
        if (local_50._8_4_ == 0x50) {
          PostMessageW(DAT_140032598,0x8001,0,0);
        }
        iVar6 = TranslateAcceleratorW(DAT_140032598,DAT_1400315f8,(LPMSG)local_50);
        if (((iVar6 == 0) &&
            ((DAT_140032580 == (HWND)0x0 ||
             (BVar7 = IsDialogMessageW(DAT_140032580,(LPMSG)local_50), BVar7 == 0)))) &&
           (iVar6 = TranslateAcceleratorW(DAT_140032598,DAT_1400315f0,(LPMSG)local_50), iVar6 == 0))
        {
          TranslateMessage((MSG *)local_50);
          DispatchMessageW((MSG *)local_50);
        }
      }
      uVar8 = FUN_14000efb4(DAT_1400320e0);
      FUN_14002021c((undefined (*) [16])&DAT_1400314d8,uVar8,uVar2,uVar3);
      if (DAT_1400325a8 != 0) {
        (**(code **)(*(longlong *)DAT_1400325a8 + 0x10))();
        DAT_1400325a8 = 0;
      }
      FUN_140007ca8();
      if (hWinEventHook != (HWINEVENTHOOK)0x0) {
        UnhookWinEvent(hWinEventHook);
      }
    }
    if (DAT_140032138 != 0) {
      FUN_14002203c();
      DAT_140032138 = 0;
    }
    if (DAT_140032340 != 0) {
      FUN_140021cb0();
      DAT_140032340 = 0;
    }
    if (hLibModule != param_1) {
      FreeLibrary(hLibModule);
    }
    CoUninitialize();
  }
  RegHandle = DAT_140030218;
  DAT_140030218 = 0;
  _DAT_1400301f8 = 0;
  EventUnregister(RegHandle);
  return local_40._0_4_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000b130(void)

{
  int extraout_EAX;
  int iVar1;
  undefined8 *puVar2;
  uint uVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  undefined auStackY392 [32];
  undefined4 local_148;
  undefined local_144;
  undefined4 local_140;
  undefined local_13c;
  undefined8 local_138;
  uint local_130 [2];
  uint local_128 [4];
  wchar_t local_118 [64];
  wchar_t local_98 [64];
  ulonglong local_18;
  LRESULT LVar3;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY392;
  FUN_14000b3b8('\x01');
  uVar4 = DAT_140031488;
  if ((DAT_140031488 & 2) == 0) {
    puVar2 = (undefined8 *)FUN_14000cd48(&DAT_140031488,local_130);
    local_138 = *puVar2;
    uVar4 = (uint)local_138;
  }
  local_148 = 0;
  local_144 = 3;
  FUN_14000dd74((uint *)&DAT_140031490,0x71cda0,uVar4 >> 8 & 1,(ulonglong)(uVar4 >> 9 & 1),
                &local_148,1,3);
  uVar6 = 0;
  LVar3 = SendMessageW(DAT_140032588,0x150d,0,0);
  extraout_EAX = (int)LVar3;
  memset(local_98,0,0x80);
  pwVar5 = DAT_140030528;
  if (((extraout_EAX != 1) && (pwVar5 = DAT_140030518, extraout_EAX != 2)) &&
     (pwVar5 = DAT_140030528, extraout_EAX == 3)) {
    pwVar5 = DAT_140030520;
  }
  iVar1 = FUN_140001860(local_98,0x40,pwVar5,uVar6);
  if ((-1 < iVar1) && (DAT_140032590 != (HWND)0x0)) {
    SendMessageW(DAT_140032590,0x40b,3,(LPARAM)local_98);
  }
  uVar4 = DAT_1400314b8;
  _DAT_140032640 = extraout_EAX;
  if ((DAT_1400314b8 & 2) == 0) {
    puVar2 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_128);
    local_138 = *puVar2;
    uVar4 = (uint)local_138;
  }
  local_140 = 0;
  local_13c = 3;
  FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar4 >> 8 & 1,(ulonglong)(uVar4 >> 9 & 1),
                &local_140,1,3);
  memset(local_118,0,0x80);
  if ((DAT_1400315e4 == 1) ||
     (((uVar6 = DAT_140030558, DAT_1400315e4 != 2 && (uVar6 = DAT_140030550, DAT_1400315e4 != 3)) &&
      ((uVar6 = DAT_140030540, DAT_1400315e4 != 4 && (uVar6 = DAT_140030548, DAT_1400315e4 != 5)))))
     ) {
    uVar6 = DAT_140030560;
  }
  iVar1 = FUN_140001860(local_118,0x40,DAT_1400304f8,uVar6);
  if ((-1 < iVar1) && (DAT_140032590 != (HWND)0x0)) {
    SendMessageW(DAT_140032590,0x40b,4,(LPARAM)local_118);
  }
  _DAT_140032644 = DAT_1400315e4;
  FUN_14000b660();
  FUN_140023f70(local_18 ^ (ulonglong)auStackY392);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000b3b8(char param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  LRESULT LVar7;
  uint uVar8;
  int iVar9;
  undefined auStackY296 [32];
  undefined4 local_e0;
  undefined local_dc;
  undefined4 local_d8;
  undefined local_d4;
  undefined4 local_d0;
  undefined local_cc;
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [4];
  undefined2 local_a8;
  wchar_t local_a6 [63];
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStackY296;
  if (DAT_14003236c != 0) {
    uVar8 = DAT_1400314a8;
    if ((DAT_1400314a8 & 2) == 0) {
      puVar4 = (undefined8 *)FUN_14000d1d8(&DAT_1400314a8,local_c8);
      uVar8 = (uint)*puVar4;
    }
    local_e0 = 0;
    local_dc = 3;
    FUN_14000dd74((uint *)&DAT_1400314b0,0x107b944,uVar8 >> 8 & 1,(ulonglong)(uVar8 >> 9 & 1),
                  &local_e0,1,3);
  }
  uVar8 = DAT_140032670;
  if ((DAT_140032670 & 2) == 0) {
    puVar4 = (undefined8 *)FUN_14000c8b8(&DAT_140032670,local_c0);
    uVar8 = (uint)*puVar4;
  }
  local_d8 = 0;
  local_d4 = 3;
  FUN_14000dd74((uint *)&DAT_140032678,0x1072a70,uVar8 >> 8 & 1,(ulonglong)(uVar8 >> 9 & 1),
                &local_d8,1,3);
  uVar5 = SendMessageW(DAT_140032588,0x1512,0,0);
  uVar8 = DAT_1400314a8;
  if ((DAT_1400314a8 & 2) == 0) {
    puVar4 = (undefined8 *)FUN_14000d1d8(&DAT_1400314a8,local_b8);
    uVar8 = (uint)*puVar4;
  }
  local_d0 = 0;
  local_cc = 3;
  FUN_14000dd74((uint *)&DAT_1400314b0,0x107b944,uVar8 >> 8 & 1,(ulonglong)(uVar8 >> 9 & 1),
                &local_d0,1,3);
  uVar6 = SendMessageW(DAT_140032588,0x1513,uVar5 & 0xffffffff,0);
  uVar8 = (int)uVar6 + 1;
  LVar7 = SendMessageW(DAT_140032588,0x1514,uVar6 & 0xffffffff,0);
  iVar9 = ((int)uVar5 - (int)LVar7) + 1;
  if (((param_1 != '\0') || (iVar9 != _DAT_1400320f0)) ||
     (iVar1 = _DAT_1400320f0, uVar2 = _DAT_1400320f4, uVar8 != _DAT_1400320f4)) {
    memset(local_a6,0,0x7e);
    local_a8 = 0x20;
    iVar3 = FUN_140001860(local_a6,0x3f,DAT_140030530,(ulonglong)uVar8);
    iVar1 = iVar9;
    uVar2 = uVar8;
    if ((-1 < iVar3) && (DAT_140032590 != (HWND)0x0)) {
      SendMessageW(DAT_140032590,0x40b,1,(LPARAM)&local_a8);
    }
  }
  _DAT_1400320f4 = uVar2;
  _DAT_1400320f0 = iVar1;
  FUN_140023f70(local_28 ^ (ulonglong)auStackY296);
  return;
}



void FUN_14000b650(void)

{
  FUN_14000b3b8('\0');
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000b660(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined auStackY152 [32];
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined local_4c;
  undefined8 local_48;
  uint local_40 [2];
  undefined local_38 [16];
  undefined local_28 [16];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStackY152;
  uVar4 = DAT_140031498;
  if ((DAT_140031498 & 2) == 0) {
    puVar3 = (undefined8 *)FUN_14000c75c(&DAT_140031498,local_40);
    local_48 = *puVar3;
    uVar4 = (uint)local_48;
  }
  local_50 = 0;
  local_4c = 3;
  FUN_14000dd74((uint *)&DAT_1400314a0,0x10f6105,uVar4 >> 8 & 1,(ulonglong)(uVar4 >> 9 & 1),
                &local_50,1,3);
  SendMessageW(DAT_140032588,0x4e0,(WPARAM)&local_54,(LPARAM)&local_58);
  if ((local_54 == 0) || (local_58 == 0)) {
    local_58 = 1;
    local_54 = 1;
  }
  local_38 = ZEXT816(0);
  local_28 = ZEXT816(0);
  uVar1 = (ulonglong)(uint)(local_54 * 100) / (ulonglong)local_58;
  local_18 = 0;
  iVar2 = FUN_140001860((wchar_t *)local_38,0x14,DAT_140030500,uVar1);
  if ((-1 < iVar2) && (DAT_140032590 != (HWND)0x0)) {
    SendMessageW(DAT_140032590,0x40b,2,(LPARAM)local_38);
  }
  _DAT_140032648 = (int)uVar1;
  FUN_140023f70(local_10 ^ (ulonglong)auStackY152);
  return;
}



void FUN_14000b7b0(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined auStack184 [32];
  wchar_t local_98 [64];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack184;
  memset(local_98,0,0x80);
  iVar1 = FUN_140001860(local_98,0x40,param_1,param_4);
  if ((-1 < iVar1) && (DAT_140032590 != (HWND)0x0)) {
    SendMessageW(DAT_140032590,0x40b,0,(LPARAM)local_98);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStack184);
  return;
}



void FUN_14000b83c(void)

{
  LPCWSTR hMem;
  char cVar1;
  DWORD DVar2;
  HANDLE hFindFile;
  LPCWSTR lpString;
  undefined auStackY856 [32];
  LPCWSTR local_318;
  LPCWSTR local_310;
  WCHAR *local_308;
  HLOCAL local_300;
  va_list local_2f8;
  LPCWSTR local_2f0;
  undefined local_2e8 [8];
  undefined **local_2e0;
  WCHAR **local_2d8;
  undefined ***local_278;
  _WIN32_FIND_DATAW local_268;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY856;
  local_318 = (LPCWSTR)0x0;
  if (DAT_1400320e0 == (WCHAR *)0x0) {
    FUN_14000e004(&local_300,DAT_140030658,0xffffffffffffffff);
    FUN_14000e104(&local_318,&local_300);
    if (local_300 != (HLOCAL)0x0) {
      LocalFree(local_300);
    }
  }
  else {
    hFindFile = FindFirstFileW(DAT_1400320e0,&local_268);
    local_2e0 = &PTR_FUN_1400260b8;
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      local_308 = DAT_1400320e0;
      local_2d8 = &local_308;
      local_278 = &local_2e0;
      FUN_14000d630(&local_318,(longlong)local_2e8);
    }
    else {
      local_308 = local_268.cFileName;
      local_2d8 = &local_308;
      local_278 = &local_2e0;
      FUN_14000d630(&local_318,(longlong)local_2e8);
      FindClose(hFindFile);
    }
  }
  hMem = local_318;
  if (local_318 != (LPCWSTR)0x0) {
    cVar1 = FUN_140009f54();
    local_2f8 = "";
    local_2f0 = hMem;
    if (cVar1 != '\0') {
      local_2f8 = "*";
    }
    local_310 = (LPCWSTR)0x0;
    DVar2 = FormatMessageW(0x2500,DAT_140030650,0,0,(LPWSTR)&local_310,0,&local_2f8);
    lpString = local_310;
    if (DVar2 == 0) {
      lpString = hMem;
    }
    SetWindowTextW(DAT_140032598,lpString);
    DAT_14003235c = cVar1;
    if (local_310 != (LPCWSTR)0x0) {
      LocalFree(local_310);
    }
    LocalFree(hMem);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY856);
  return;
}



void FUN_14000ba28(HWND param_1)

{
  BOOL BVar1;
  BOOL BVar2;
  HMENU pHVar3;
  HMENU pHVar4;
  LRESULT LVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20;
  undefined local_res24;
  uint local_40 [2];
  
  BVar2 = 0;
  local_res10[0] = 0;
  pHVar3 = GetMenu(DAT_140032598);
  SendMessageW(DAT_140032588,0xb0,(WPARAM)local_res10,(LPARAM)local_res18);
  uVar7 = (uint)(local_res10[0] == local_res18[0]);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x300,uVar7);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x301,uVar7);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x303,uVar7);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x1c,uVar7);
  BVar1 = OpenClipboard(param_1);
  if (BVar1 != 0) {
    BVar2 = IsClipboardFormatAvailable(1);
    CloseClipboard();
  }
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x302,(uint)(BVar2 == 0));
  LVar5 = SendMessageW(DAT_140032588,0xe,0,0);
  uVar7 = (uint)(LVar5 == 0);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x15,uVar7);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x16,uVar7);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x1d,uVar7);
  bVar8 = DAT_14003236c != 0;
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x18,(uint)bVar8);
  LVar5 = SendMessageW(DAT_140032588,0xc6,0,0);
  pHVar4 = GetSubMenu(pHVar3,1);
  EnableMenuItem(pHVar4,0x10,(uint)((int)LVar5 == 0));
  bVar8 = DAT_14003236c != 0;
  pHVar4 = GetSubMenu(pHVar3,2);
  CheckMenuItem(pHVar4,0x20,-(uint)bVar8 & 8);
  pHVar3 = GetSubMenu(pHVar3,3);
  CheckMenuItem(pHVar3,0x1b,-(uint)(DAT_140032378 != 0) & 8);
  uVar7 = DAT_140031498;
  if ((DAT_140031498 & 2) == 0) {
    puVar6 = (undefined8 *)FUN_14000c75c(&DAT_140031498,local_40);
    uVar7 = (uint)*puVar6;
  }
  local_res20 = 0;
  local_res24 = 3;
  FUN_14000dd74((uint *)&DAT_1400314a0,0x10f6105,uVar7 >> 8 & 1,(ulonglong)(uVar7 >> 9 & 1),
                &local_res20,1,3);
  return;
}



int FUN_14000bda4(HWND param_1,LPCWSTR param_2,WCHAR *param_3,wchar_t *param_4,UINT param_5)

{
  WCHAR WVar1;
  WCHAR WVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  LPCWSTR lpText;
  LPCWSTR pWVar6;
  uint uVar7;
  WCHAR *pWVar8;
  uint uVar9;
  longlong lVar10;
  
  if (param_4 == (wchar_t *)0x0) {
    iVar4 = 0;
  }
  else {
    sVar5 = wcsnlen(param_4,0x200);
    iVar4 = (int)sVar5;
  }
  if (param_3 == (WCHAR *)0x0) {
    iVar3 = 0;
  }
  else {
    sVar5 = wcsnlen(param_3,0x200);
    iVar3 = (int)sVar5;
  }
  uVar9 = iVar4 + iVar3;
  lpText = (LPCWSTR)LocalAlloc(0x40,(ulonglong)(uVar9 + 1) * 2);
  WVar2 = DAT_1400315ec;
  if (lpText == (LPCWSTR)0x0) {
    iVar4 = MessageBoxW(param_1,param_3,param_2,param_5);
    return iVar4;
  }
  uVar7 = 0;
  pWVar6 = lpText;
  do {
    if ((*param_3 == WVar2) || (uVar9 <= uVar7)) {
      if ((param_4 == (wchar_t *)0x0) || (*param_4 == L'\0')) goto LAB_14000be8c;
      lVar10 = (longlong)param_4 - (longlong)pWVar6;
      goto LAB_14000be74;
    }
    uVar7 = uVar7 + 1;
    *pWVar6 = *param_3;
    pWVar6 = pWVar6 + 1;
    WVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (WVar1 != L'\0');
  goto LAB_14000beaf;
  while( true ) {
    uVar7 = uVar7 + 1;
    *pWVar6 = *(WCHAR *)(lVar10 + (longlong)pWVar6);
    pWVar6 = pWVar6 + 1;
    if (*(short *)(lVar10 + (longlong)pWVar6) == 0) break;
LAB_14000be74:
    if (uVar9 <= uVar7) break;
  }
LAB_14000be8c:
  pWVar8 = param_3 + 2;
  for (; (*pWVar8 != L'\0' && (uVar7 < uVar9)); uVar7 = uVar7 + 1) {
    *pWVar6 = *pWVar8;
    pWVar8 = pWVar8 + 1;
    pWVar6 = pWVar6 + 1;
  }
  *pWVar6 = L'\0';
LAB_14000beaf:
  iVar4 = MessageBoxW(param_1,lpText,param_2,param_5);
  LocalFree(lpText);
  return iVar4;
}



void FUN_14000bf20(void)

{
  DWORD DVar1;
  undefined **ppuVar2;
  LPCWSTR lpText;
  uint uVar3;
  undefined auStack456 [32];
  wchar_t local_1a8 [200];
  ulonglong local_18;
  LPCWSTR pWVar4;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack456;
  DVar1 = CommDlgExtendedError();
  lpText = (LPCWSTR)0x0;
  if (DVar1 != 0) {
    ppuVar2 = &PTR_DAT_140030178;
    pWVar4 = lpText;
    do {
      if (DVar1 == *(DWORD *)((longlong **)ppuVar2 + -1)) {
        lpText = *(LPCWSTR *)*ppuVar2;
      }
      uVar3 = (int)pWVar4 + 1;
      pWVar4 = (LPCWSTR)(ulonglong)uVar3;
      ppuVar2 = (undefined **)((longlong **)ppuVar2 + 2);
    } while (uVar3 < 8);
    if (lpText == (LPCWSTR)0x0) {
      FUN_140001860(local_1a8,200,DAT_140030580,(ulonglong)DVar1);
      lpText = local_1a8;
    }
    if (*lpText != L'\0') {
      MessageBoxW(DAT_140032598,lpText,DAT_140030630,0x1010);
    }
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStack456);
  return;
}



void FUN_14000bfe0(HWND param_1,int param_2,short param_3)

{
  LRESULT LVar1;
  ulonglong uVar2;
  INT_PTR nResult;
  undefined auStackY296 [32];
  uint local_f8;
  undefined local_f4 [12];
  WCHAR local_e8 [104];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY296;
  if (param_2 == 0x110) {
    SendMessageW(DAT_140032588,0xb0,(WPARAM)&local_f8,(LPARAM)local_f4);
    LVar1 = SendMessageW(DAT_140032588,0xc9,(ulonglong)local_f8,0);
    FUN_140001860(local_e8,100,L"%d",(ulonglong)((int)LVar1 + 1));
    SetDlgItemTextW(param_1,0x102,local_e8);
    SetFocus(param_1);
  }
  else if (param_2 == 0x111) {
    if (param_3 == 1) {
      GetDlgItemTextW(param_1,0x102,local_e8,100);
      FoldStringW(0x80,local_e8,-1,local_e8,100);
      DAT_14003166c = _o__wtol(local_e8);
      LVar1 = SendMessageW(DAT_140032588,0xbb,(ulonglong)(DAT_14003166c - 1),0);
      if ((DAT_14003166c == 0) || ((int)LVar1 == -1)) {
        MessageBoxW(param_1,DAT_140030570,DAT_140030578,0);
        uVar2 = SendMessageW(DAT_140032588,0xba,0,0);
        FUN_140001860(local_e8,100,L"%d",uVar2 & 0xffffffff);
        SetDlgItemTextW(param_1,0x102,local_e8);
        SetFocus(param_1);
        goto LAB_14000c1e9;
      }
      nResult = 0;
    }
    else {
      if (param_3 != 2) goto LAB_14000c1e9;
      nResult = 1;
    }
    EndDialog(param_1,nResult);
  }
LAB_14000c1e9:
  FUN_140023f70(local_18 ^ (ulonglong)auStackY296);
  return;
}



void FUN_14000c20c(HWND param_1,char param_2,LPARAM param_3)

{
  undefined8 *puVar1;
  LRESULT LVar2;
  uint uVar3;
  undefined4 local_res20;
  undefined local_res24;
  uint local_20 [2];
  
  if (param_2 != '\0') {
    SendDlgItemMessageW(param_1,0x101,0x143,0,DAT_140030568);
  }
  SendDlgItemMessageW(param_1,0x101,0x143,0,DAT_140030560);
  SendDlgItemMessageW(param_1,0x101,0x143,0,DAT_140030558);
  SendDlgItemMessageW(param_1,0x101,0x143,0,DAT_140030550);
  SendDlgItemMessageW(param_1,0x101,0x143,0,DAT_140030540);
  uVar3 = DAT_1400314b8;
  if ((DAT_1400314b8 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_20);
    uVar3 = (uint)*puVar1;
  }
  local_res20 = 0;
  local_res24 = 3;
  FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar3 >> 8 & 1,(ulonglong)(uVar3 >> 9 & 1),
                &local_res20,1,3);
  SendDlgItemMessageW(param_1,0x101,0x143,0,DAT_140030548);
  LVar2 = SendDlgItemMessageW(param_1,0x101,0x158,0xffffffffffffffff,param_3);
  if ((int)LVar2 != -1) {
    SendDlgItemMessageW(param_1,0x101,0x14e,(longlong)(int)LVar2,0);
  }
  return;
}



undefined8 FUN_14000c3e0(HWND param_1,int param_2,undefined8 param_3,longlong param_4)

{
  LRESULT LVar1;
  LPARAM LVar2;
  
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 0x10) == -0x25e) {
      LVar1 = SendDlgItemMessageW(param_1,0x101,0x147,0,0);
      DAT_1400315e0 = (int)LVar1 + 1;
    }
  }
  else if (param_2 == 0x110) {
    DAT_1400315e0 = DAT_1400315e8;
    if (DAT_1400315e4 != 0) {
      DAT_1400315e0 = DAT_1400315e4;
    }
    LVar2 = DAT_140030560;
    if ((((DAT_1400315e0 != 1) && (LVar2 = DAT_140030558, DAT_1400315e0 != 2)) &&
        (LVar2 = DAT_140030550, DAT_1400315e0 != 3)) &&
       ((LVar2 = DAT_140030540, DAT_1400315e0 != 4 && (LVar2 = 0, DAT_1400315e0 == 5)))) {
      LVar2 = DAT_140030548;
    }
    FUN_14000c20c(param_1,'\0',LVar2);
  }
  return 0;
}



undefined8 FUN_14000c4a0(HWND param_1,int param_2,undefined8 param_3,longlong param_4)

{
  LRESULT LVar1;
  
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 0x10) == -0x25e) {
      LVar1 = SendDlgItemMessageW(param_1,0x101,0x147,0,0);
      DAT_1400315e4 = (int)LVar1;
    }
  }
  else if (param_2 == 0x110) {
    FUN_14000c20c(param_1,'\x01',DAT_140030568);
  }
  return 0;
}



void FUN_14000c500(void)

{
  if ((DAT_140032348 == 2) && (DAT_140032340 != 0)) {
    PostMessageW(DAT_140032598,0x12,0,0);
  }
  return;
}



undefined8 FUN_14000c540(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FID_conflict_StringCchCopyW((short *)&DAT_140032140,0xfd,(longlong)param_1);
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    DAT_140032348 = 2;
    if (DAT_140032340 != 0) {
      FUN_140021cb0();
      DAT_140032340 = 0;
    }
    iVar2 = FUN_140021a94(param_1);
    uVar3 = 1;
    if (iVar2 < 0) {
      DAT_140032340 = 0;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000c5c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_140032140 = 0;
  if ((param_1 == 5) || (iVar1 = FUN_140021db8(), iVar1 == 0)) {
    DAT_140032348 = 5;
    iVar1 = DAT_140032348;
    if (DAT_140032340 != 0) {
      FUN_140021cb0();
      DAT_140032340 = 0;
      iVar1 = DAT_140032348;
    }
  }
  else {
    iVar1 = DAT_140032348;
    if ((param_1 != DAT_140032348) &&
       (((iVar1 = param_1, DAT_140032348 == 2 &&
         (iVar2 = FUN_140021324(), iVar1 = param_1, -1 < iVar2)) &&
        (iVar1 = param_1, DAT_140032340 != 0)))) {
      FUN_140021cb0();
      DAT_140032340 = 0;
      iVar1 = param_1;
    }
  }
  DAT_140032348 = iVar1;
  return;
}



BOOL FUN_14000c650(LPPAGESETUPDLGW param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  
  uVar2 = SetThreadDpiAwarenessContext(0xfffffffffffffffe);
  BVar1 = PageSetupDlgW(param_1);
  SetThreadDpiAwarenessContext(uVar2);
  return BVar1;
}



LPVOID * FUN_14000c6a8(LPVOID *param_1,LPVOID *param_2)

{
  LPVOID pv;
  LPVOID pvVar1;
  DWORD dwErrCode;
  
  pv = *param_1;
  pvVar1 = *param_2;
  if (pv != (LPVOID)0x0) {
    dwErrCode = GetLastError();
    CoTaskMemFree(pv);
    SetLastError(dwErrCode);
  }
  *param_1 = pvVar1;
  *param_2 = (LPVOID)0x0;
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14000c72c(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000c75c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000c8b8(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000ca14(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000cb70(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



undefined8 FUN_14000cccc(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_res8;
  undefined local_resc;
  undefined8 local_res18 [2];
  
  uVar3 = *param_1;
  if ((uVar3 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14000cb70(param_1,(uint *)local_res18);
    local_res18[0] = *puVar1;
    uVar3 = (uint)local_res18[0];
  }
  local_res8 = 0;
  local_resc = 3;
  uVar2 = FUN_14000dd74(param_1 + 2,0x1228103,uVar3 >> 8 & 1,(ulonglong)(uVar3 >> 9 & 1),&local_res8
                        ,1,3);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000cd48(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



undefined8 FUN_14000cea4(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_res8;
  undefined local_resc;
  undefined8 local_res18 [2];
  
  uVar3 = *param_1;
  if ((uVar3 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14000cd48(param_1,(uint *)local_res18);
    local_res18[0] = *puVar1;
    uVar3 = (uint)local_res18[0];
  }
  local_res8 = 0;
  local_resc = 3;
  uVar2 = FUN_14000dd74(param_1 + 2,0x71cda0,uVar3 >> 8 & 1,(ulonglong)(uVar3 >> 9 & 1),&local_res8,
                        1,3);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000cf20(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000d07c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14000d1d8(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



void FUN_14000d334(LPVOID param_1)

{
  DWORD dwErrCode;
  
  dwErrCode = GetLastError();
  CoTaskMemFree(param_1);
                    // WARNING: Could not recover jumptable at 0x00014000d36a. Too many branches
                    // WARNING: Treating indirect jump as call
  SetLastError(dwErrCode);
  return;
}



LPWSTR FUN_14000d37c(undefined8 param_1,LPWSTR *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  LPWSTR *ppWVar5;
  LPWSTR pWVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  undefined8 in_stack_00000000;
  LPWSTR local_res8;
  LPVOID local_res18 [2];
  LPWSTR local_38 [2];
  
  pWVar8 = (LPWSTR)0x0;
  uVar7 = 0x80;
  local_res8 = (LPWSTR)0x0;
  pWVar6 = pWVar8;
  do {
    ppWVar5 = (LPWSTR *)FUN_14000e224(local_res18,(short *)0x0,uVar7 - 1);
    if (&local_res8 != ppWVar5) {
      FUN_14000c6a8(&local_res8,ppWVar5);
      pWVar6 = local_res8;
    }
    if (local_res18[0] != (LPVOID)0x0) {
      CoTaskMemFree(local_res18[0]);
    }
    if (pWVar6 == (LPWSTR)0x0) {
      FUN_1400025bc(in_stack_00000000,0x10a,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
      return (LPWSTR)(ulonglong)(~-(uint)(pWVar6 != (LPWSTR)0x0) & 0x8007000e);
    }
    DVar3 = GetModuleFileNameW((HMODULE)0x0,pWVar6,(DWORD)uVar7);
    if ((DVar3 == 0) || (bVar2 = true, uVar7 <= DVar3)) {
      bVar2 = false;
    }
    if (DVar3 == 0) {
      uVar4 = FUN_1400025f4(in_stack_00000000,0x123,
                            "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
                            param_4);
      pWVar8 = (LPWSTR)(ulonglong)uVar4;
LAB_14000d499:
      CoTaskMemFree(pWVar6);
      return pWVar8;
    }
    if (bVar2) {
      local_38[0] = pWVar6;
      if (param_2 != local_38) {
        FUN_14000c6a8(param_2,local_38);
      }
      pWVar6 = local_38[0];
      if (local_38[0] == (LPWSTR)0x0) {
        return (LPWSTR)0x0;
      }
      goto LAB_14000d499;
    }
    if (uVar7 == 0x7fe8) break;
    uVar7 = uVar7 * 2;
    if (0x7fe8 < uVar7) {
      uVar7 = 0x7fe8;
    }
  } while (uVar7 < 0x7fe9);
  FUN_140002634(in_stack_00000000,0x136,
                "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
  pcVar1 = (code *)swi(3);
  pWVar6 = (LPWSTR)(*pcVar1)();
  return pWVar6;
}



undefined8 * FUN_14000d500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140026090;
  if ((param_2 & 1) != 0) {
    _o_free(param_1,0x10);
  }
  return param_1;
}



void FUN_14000d540(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1400260b8;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



undefined4 FUN_14000d560(longlong param_1,LPWSTR *param_2,longlong *param_3,longlong **param_4)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 in_stack_00000000;
  
  lVar1 = *param_3;
  plVar2 = *param_4;
  sVar3 = GetFileTitleW(**(LPCWSTR **)(param_1 + 8),*param_2,(WORD)lVar1);
  uVar4 = 0;
  if (sVar3 < 0) {
    uVar4 = FUN_1400025f4(in_stack_00000000,0x17,
                          "shell\\osshell\\accesory\\notepad\\filesystemhelpers.h",param_4);
  }
  else {
    lVar5 = (longlong)sVar3;
    if (sVar3 == 0) {
      lVar5 = lVar1;
    }
    *plVar2 = lVar5;
  }
  return uVar4;
}



undefined8 * FUN_14000d5d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14000d5e8(longlong param_1)

{
  code *pcVar1;
  
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))();
    return;
  }
  FUN_14000266c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14000d630(HLOCAL *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  HLOCAL *ppvVar3;
  HLOCAL pvVar4;
  undefined8 in_stack_00000000;
  undefined auStack648 [32];
  HLOCAL local_268;
  HLOCAL local_260;
  HLOCAL local_258;
  HLOCAL local_250;
  HLOCAL local_248 [2];
  short local_238 [256];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStack648;
  local_238[0] = 0;
  local_260 = (HLOCAL)0x0;
  local_268 = (HLOCAL)0x0;
  iVar1 = FUN_14000d5e8(param_2);
  if (iVar1 < 0) {
    if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14000d884;
    pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
LAB_14000d6a9:
    (*pcVar2)();
  }
  else {
    pvVar4 = (HLOCAL)0x0;
    if (local_260 < (HLOCAL)0x101) {
      ppvVar3 = (HLOCAL *)FUN_14000e004(&local_258,local_238,(longlong)local_260 - 1);
      if (&local_268 != ppvVar3) {
        FUN_14000e104(&local_268,ppvVar3);
        pvVar4 = local_268;
      }
      if (local_258 != (HLOCAL)0x0) {
        LocalFree(local_258);
      }
      if (pvVar4 != (HLOCAL)0x0) {
LAB_14000d837:
        local_250 = pvVar4;
        if (param_1 != &local_250) {
          FUN_14000e104(param_1,&local_250);
        }
        if (local_250 != (HLOCAL)0x0) {
          LocalFree(local_250);
        }
        if (*(longlong **)(param_2 + 0x70) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_2 + 0x70) + 0x18))();
        }
        goto LAB_14000d884;
      }
      FUN_1400025bc(in_stack_00000000,0x6f,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
      if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14000d884;
      pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
    }
    else {
      ppvVar3 = (HLOCAL *)FUN_14000e004(local_248,(short *)0x0,(longlong)local_260 - 1);
      if (&local_268 != ppvVar3) {
        FUN_14000e104(&local_268,ppvVar3);
        pvVar4 = local_268;
      }
      if (local_248[0] != (HLOCAL)0x0) {
        LocalFree(local_248[0]);
      }
      if (pvVar4 != (HLOCAL)0x0) {
        local_258 = (HLOCAL)0x0;
        iVar1 = FUN_14000d5e8(param_2);
        if (-1 < iVar1) {
          if (local_260 != local_258) {
            FUN_140002634(in_stack_00000000,0x7b,
                          "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_14000d837;
        }
        FUN_1400025bc(in_stack_00000000,0x78,
                      "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
        LocalFree(pvVar4);
        if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14000d884;
        pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
        goto LAB_14000d6a9;
      }
      FUN_1400025bc(in_stack_00000000,0x75,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
      if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14000d884;
      pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
    }
    (*pcVar2)();
  }
LAB_14000d884:
  FUN_140023f70(local_38 ^ (ulonglong)auStack648);
  return;
}



undefined (*) [16] FUN_14000d8cc(undefined (*param_1) [16],uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  *param_1 = ZEXT816(0);
  *(undefined8 *)param_1[1] = 0;
  uVar4 = 1;
  uVar3 = 0;
  if (param_3 == 0) {
LAB_14000da9a:
    uVar3 = *param_2;
    while( true ) {
      *(undefined4 *)(*param_1 + 4) = 0;
      uVar2 = uVar3 | 1;
      if ((uVar3 >> 0xe & 1) != (uint)(param_3 == 4)) {
        uVar7 = uVar3 >> 5 & 0x1ff;
        if (uVar7 != 0) {
          *(uint *)(*param_1 + 4) = uVar7;
          *(uint *)(*param_1 + 8) = ~-(uint)(param_3 != 0) & 4;
          uVar2 = uVar3 & 0xffffc01f | 1;
        }
        uVar7 = 0;
        if (param_3 == 4) {
          uVar7 = 0x4000;
        }
        uVar2 = uVar7 | uVar2 & 0xffffbfff;
      }
      uVar5 = uVar2 >> 5 & 0x1ff;
      uVar7 = uVar5 + 1;
      if ((0x1ff < uVar7) || (uVar7 < (uVar2 >> 5 & 0x1ff))) {
        *(int *)(*param_1 + 8) = param_3;
        *(uint *)(*param_1 + 4) = uVar5;
        uVar7 = uVar4;
      }
      LOCK();
      if (uVar3 == *param_2) break;
      uVar3 = *param_2;
    }
    *param_2 = uVar2 ^ (uVar7 << 5 ^ uVar2) & 0x3fe0;
  }
  else {
    if (param_3 != 1) {
      if (param_3 < 2) {
LAB_14000d992:
        uVar6 = param_3 - 0x140;
        if (uVar6 < 0x40) {
          uVar3 = param_2[1];
          while( true ) {
            if (((uVar3 & 0x10) == 0) || (uVar2 = uVar4, (uVar3 >> 5 & 0x3f) != uVar6)) {
              uVar2 = 0;
            }
            *(uint *)param_1[1] = uVar2;
            LOCK();
            puVar1 = param_2 + 1;
            if (uVar3 == *puVar1) break;
            uVar3 = *puVar1;
          }
          *puVar1 = uVar3 & 0xfffff81f | (uVar6 & 0x3f) << 5 | 0x10;
        }
        *(int *)(*param_1 + 8) = param_3;
        *(undefined4 *)(*param_1 + 4) = 1;
        *(undefined4 *)(*param_1 + 0xc) = 0;
        return param_1;
      }
      if (3 < param_3) {
        if (param_3 == 4) goto LAB_14000da9a;
        if (param_3 == 5) goto LAB_14000d9ee;
        if (1 < param_3 - 6U) goto LAB_14000d992;
      }
      if (param_3 == 2) {
        uVar3 = 2;
      }
      else if (param_3 == 3) {
        uVar3 = 8;
      }
      else if (param_3 == 6) {
        uVar3 = 4;
      }
      else if (param_3 == 7) {
        uVar3 = 0x10;
      }
      uVar6 = *param_2;
      while( true ) {
        LOCK();
        if (uVar6 == *param_2) break;
        uVar6 = *param_2;
      }
      *param_2 = uVar6 | uVar3 | 1;
      *(uint *)*param_1 = ~uVar6 & 1;
      uVar6 = (uint)((uVar3 & uVar6) == uVar3);
      goto LAB_14000db53;
    }
LAB_14000d9ee:
    uVar3 = *param_2;
    while( true ) {
      *(undefined4 *)(*param_1 + 4) = 0;
      uVar2 = uVar3 | 1;
      if ((uVar3 >> 0x16 & 1) != (uint)(param_3 == 5)) {
        uVar7 = uVar3 >> 0xf & 0x7f;
        if (uVar7 != 0) {
          *(uint *)(*param_1 + 4) = uVar7;
          uVar7 = uVar4;
          if (param_3 == 1) {
            uVar7 = 5;
          }
          uVar2 = uVar3 & 0xffc07fff | 1;
          *(uint *)(*param_1 + 8) = uVar7;
        }
        uVar7 = uVar6;
        if (param_3 == 5) {
          uVar7 = 0x400000;
        }
        uVar2 = uVar7 | uVar2 & 0xffbfffff;
      }
      uVar5 = uVar2 >> 0xf & 0x7f;
      uVar7 = uVar5 + 1;
      if ((0x7f < uVar7) || (uVar7 < (uVar2 >> 0xf & 0x7f))) {
        *(int *)(*param_1 + 8) = param_3;
        *(uint *)(*param_1 + 4) = uVar5;
        uVar7 = uVar4;
      }
      LOCK();
      if (uVar3 == *param_2) break;
      uVar3 = *param_2;
    }
    *param_2 = uVar2 ^ (uVar7 << 0xf ^ uVar2) & 0x3f8000;
  }
  *(uint *)*param_1 = ~uVar3 & 1;
LAB_14000db53:
  *(uint *)param_1[1] = uVar6;
  return param_1;
}



void FUN_14000db80(undefined8 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 8);
    AcquireSRWLockExclusive(SRWLock);
    FUN_14000679c((longlong)param_2);
    param_2[0x18] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14000dbd8(char *param_1,undefined4 param_2,undefined8 param_3)

{
  PSRWLOCK SRWLock;
  PTP_TIMER p_Var1;
  byte bVar2;
  DWORD dwErrCode;
  ulonglong uVar3;
  PTP_TIMER pti;
  _FILETIME local_res8;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  if (*param_1 == '\0') {
    return;
  }
  if (DAT_140031330 != '\0') {
    return;
  }
  uVar3 = DAT_140031310;
  if (DAT_140031310 != 0) {
    bVar2 = (*(code *)DAT_140031310)();
    uVar3 = (ulonglong)bVar2;
  }
  if ((int)uVar3 != 0) {
    return;
  }
  SRWLock = (PSRWLOCK)(param_1 + 8);
  AcquireSRWLockExclusive(SRWLock);
  local_28[0] = param_2;
  local_20 = param_3;
  FUN_14000406c((void **)(param_1 + 0x30),local_28,&DAT_00000010);
  if (param_1[0x18] == '\0') {
    pti = *(PTP_TIMER *)(param_1 + 0x10);
    if (pti == (PTP_TIMER)0x0) {
      pti = CreateThreadpoolTimer(FUN_14000db80,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      p_Var1 = *(PTP_TIMER *)(param_1 + 0x10);
      if (p_Var1 != (PTP_TIMER)0x0) {
        dwErrCode = GetLastError();
        FUN_14000781c(p_Var1);
        SetLastError(dwErrCode);
      }
      *(PTP_TIMER *)(param_1 + 0x10) = pti;
      if (pti == (PTP_TIMER)0x0) goto LAB_14000dcea;
    }
    local_res8 = (_FILETIME)0xffffffff4d2fa200;
    SetThreadpoolTimer(pti,&local_res8,0,75000);
    param_1[0x18] = '\x01';
  }
LAB_14000dcea:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}



void FUN_14000dd20(void)

{
  if (DAT_140030bf8 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
    FUN_14000679c((longlong)&DAT_140030bf8);
    DAT_140030c10 = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14000dd74(uint *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined (*pauVar4) [16];
  code *pcVar5;
  uint uVar6;
  byte bVar7;
  int local_38;
  undefined local_30 [24];
  
  if (param_7 != 0) {
    if (param_7 == 1) {
      uVar6 = ~-(uint)(param_6 != 0) & 4;
      goto LAB_14000de52;
    }
    if (param_7 == 2) {
      uVar6 = (-(uint)(param_6 != 0) & 0xfffffffc) + 5;
      goto LAB_14000de52;
    }
    if (param_7 == 3) {
      uVar6 = (-(uint)(param_6 != 0) & 0xfffffffc) + 6;
      goto LAB_14000de52;
    }
    if (param_7 == 4) {
      uVar6 = (-(uint)(param_6 != 0) & 0xfffffffc) + 7;
      goto LAB_14000de52;
    }
    if (param_7 == 5) {
      uVar6 = (-(uint)(param_6 != 0) & 0xfffffffe) + 10;
      goto LAB_14000de52;
    }
    if (param_7 == 6) {
      uVar6 = (-(uint)(param_6 != 0) & 0xfffffffe) + 0xb;
      goto LAB_14000de52;
    }
    bVar7 = (char)param_7 + 0x9c;
    if (bVar7 < 0x32) {
      uVar6 = (-(uint)(param_6 != 0) & 0xffffffce) + 0x96 + (uint)bVar7;
      goto LAB_14000de52;
    }
  }
  uVar6 = 0xff;
LAB_14000de52:
  pauVar4 = FUN_14000d8cc((undefined (*) [16])local_30,param_1,uVar6);
  iVar2 = *(int *)*pauVar4;
  iVar3 = *(int *)(*pauVar4 + 4);
  uVar1 = *(undefined8 *)pauVar4[1];
  if ((DAT_140031380 != 0) && ((uVar6 == 0 || (uVar6 - 100 < 0x32)))) {
    (*(code *)DAT_140031380)();
  }
  if (iVar2 != 0) {
    FUN_14000dbd8(&DAT_140030bf8,param_2,param_1);
  }
  if ((iVar3 != 0) &&
     ((pcVar5 = (code *)DAT_140031360, DAT_140031360 != 0 ||
      (pcVar5 = (code *)DAT_1400313b0, DAT_1400313b0 != 0)))) {
    (*pcVar5)();
  }
  local_38 = (int)uVar1;
  if ((local_38 == 0) && (DAT_140030bf8 != (char)uVar1)) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
    if ((DAT_140030c20 == 0) &&
       ((DAT_140030c20 = 0, pcVar5 = (code *)DAT_1400313a0, DAT_1400313a0 != 0 ||
        (pcVar5 = (code *)DAT_140031408, DAT_140031408 != 0)))) {
      (*pcVar5)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140030c00);
  }
  if ((param_3 != 0) &&
     ((pcVar5 = (code *)DAT_140031360, DAT_140031360 != 0 ||
      (pcVar5 = (code *)DAT_1400313b0, DAT_1400313b0 != 0)))) {
    (*pcVar5)();
  }
  if ((local_38 == 0) && (DAT_140031480 != 0)) {
    (*(code *)DAT_140031480)();
  }
  return;
}



undefined8 * FUN_14000e004(undefined8 *param_1,short *param_2,ulonglong param_3)

{
  ulonglong uBytes;
  code *pcVar1;
  short *psVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 in_stack_00000000;
  
  if ((param_2 == (short *)0x0) && (param_3 == 0xffffffffffffffff)) {
    FUN_140002634(in_stack_00000000,0xcac,
                  "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar1)();
    return puVar4;
  }
  uVar5 = param_3;
  if (param_2 != (short *)0x0) {
    psVar2 = param_2;
    uVar5 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar5 = param_3;
    }
    for (; (uVar5 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
      uVar5 = uVar5 - 1;
    }
    uVar5 = (longlong)psVar2 - (longlong)param_2 >> 1;
  }
  if (param_3 == 0xffffffffffffffff) {
    param_3 = uVar5;
  }
  uBytes = param_3 * 2 + 2;
  puVar3 = (undefined2 *)LocalAlloc(0,uBytes);
  if (puVar3 != (undefined2 *)0x0) {
    if (param_2 == (short *)0x0) {
      *puVar3 = 0;
    }
    else {
      FUN_14000e188(puVar3,uBytes,param_2,uVar5 * 2);
      puVar3[uVar5] = 0;
    }
    puVar3[param_3] = 0;
  }
  *param_1 = puVar3;
  return param_1;
}



HLOCAL * FUN_14000e104(HLOCAL *param_1,HLOCAL *param_2)

{
  HLOCAL hMem;
  HLOCAL pvVar1;
  DWORD dwErrCode;
  
  hMem = *param_1;
  pvVar1 = *param_2;
  if (hMem != (HLOCAL)0x0) {
    dwErrCode = GetLastError();
    LocalFree(hMem);
    SetLastError(dwErrCode);
  }
  *param_1 = pvVar1;
  *param_2 = (HLOCAL)0x0;
  return param_1;
}



undefined4 FUN_14000e188(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
LAB_14000e1a5:
    uVar2 = 0;
  }
  else {
    if (param_1 == (void *)0x0) {
LAB_14000e1ae:
      puVar1 = (undefined4 *)_o__errno();
      uVar2 = 0x16;
    }
    else {
      if ((param_3 != (void *)0x0) && (param_4 <= param_2)) {
        memcpy(param_1,param_3,param_4);
        goto LAB_14000e1a5;
      }
      memset(param_1,0,param_2);
      if (param_3 == (void *)0x0) goto LAB_14000e1ae;
      if (param_4 <= param_2) {
        return 0x16;
      }
      puVar1 = (undefined4 *)_o__errno();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    _o__invalid_parameter_noinfo();
  }
  return uVar2;
}



undefined8 * FUN_14000e224(undefined8 *param_1,short *param_2,ulonglong param_3)

{
  ulonglong cb;
  code *pcVar1;
  short *psVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 in_stack_00000000;
  
  if ((param_2 == (short *)0x0) && (param_3 == 0xffffffffffffffff)) {
    FUN_140002634(in_stack_00000000,0xcac,
                  "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar1)();
    return puVar4;
  }
  uVar5 = param_3;
  if (param_2 != (short *)0x0) {
    psVar2 = param_2;
    uVar5 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar5 = param_3;
    }
    for (; (uVar5 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
      uVar5 = uVar5 - 1;
    }
    uVar5 = (longlong)psVar2 - (longlong)param_2 >> 1;
  }
  if (param_3 == 0xffffffffffffffff) {
    param_3 = uVar5;
  }
  cb = param_3 * 2 + 2;
  puVar3 = (undefined2 *)CoTaskMemAlloc(cb);
  if (puVar3 != (undefined2 *)0x0) {
    if (param_2 == (short *)0x0) {
      *puVar3 = 0;
    }
    else {
      FUN_14000e188(puVar3,cb,param_2,uVar5 * 2);
      puVar3[uVar5] = 0;
    }
    puVar3[param_3] = 0;
  }
  *param_1 = puVar3;
  return param_1;
}



void FUN_14000e324(LPVOID *param_1)

{
  if (*param_1 != (LPVOID)0x0) {
    CoTaskMemFree(*param_1);
  }
  return;
}



void FUN_14000e348(LCID param_1)

{
  undefined auStack88 [32];
  WCHAR local_38 [16];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack88;
  GetLocaleInfoW(param_1,0x58,local_38,0x10);
  FUN_140023f70(local_18 ^ (ulonglong)auStack88);
  return;
}



void FUN_14000e3a8(uint param_1)

{
  LANGID LVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD dwFlags;
  undefined8 uVar4;
  short *lParam;
  undefined auStackY1096 [32];
  uint local_418 [2];
  _SYSTEMTIME local_410;
  WCHAR local_3f8 [80];
  WCHAR local_358 [80];
  short local_2b8 [336];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY1096;
  memset(local_2b8,0,0x294);
  dwFlags = 1;
  GetLocalTime(&local_410);
  local_418[0] = 1;
  iVar2 = FUN_14000e348(0x400);
  if (iVar2 == 0) goto LAB_14000e46d;
  GetLocaleInfoW(0x400,0x20001009,(LPWSTR)local_418,2);
  if (local_418[0] == 1) {
    LVar1 = GetUserDefaultUILanguage();
    iVar2 = FUN_14000e348((uint)LVar1);
LAB_14000e45f:
    dwFlags = 0x21;
    if (iVar2 != 0) goto LAB_14000e46d;
  }
  else if ((local_418[0] < 0x18) && ((0x800540U >> (local_418[0] & 0x1f) & 1) != 0)) {
    iVar2 = 1;
    goto LAB_14000e45f;
  }
  dwFlags = 0x11;
LAB_14000e46d:
  GetDateFormatW(0x400,dwFlags,&local_410,(LPCWSTR)0x0,local_358,0x50);
  GetTimeFormatW(0x400,2,&local_410,(LPCWSTR)0x0,local_3f8,0x50);
  if (param_1 != 0) {
    FID_conflict_StringCchCatW(local_2b8,0x14a,(longlong)&DAT_140027bb0);
  }
  FID_conflict_StringCchCatW(local_2b8,0x14a,(longlong)local_3f8);
  FID_conflict_StringCchCatW(local_2b8,0x14a,(longlong)&DAT_140027bb8);
  FID_conflict_StringCchCatW(local_2b8,0x14a,(longlong)local_358);
  if (param_1 != 0) {
    FID_conflict_StringCchCatW(local_2b8,0x14a,(longlong)&DAT_140027bb0);
  }
  lParam = local_2b8;
  uVar3 = 0xc2;
  uVar4 = 1;
  SendMessageW(DAT_140032588,0xc2,1,(LPARAM)lParam);
  FUN_140020724((ulonglong)param_1,uVar3,uVar4,lParam);
  FUN_140023f70(local_18 ^ (ulonglong)auStackY1096);
  return;
}



int FUN_14000e594(undefined8 param_1,UINT param_2,DWORD param_3,LPCWSTR param_4,int param_5)

{
  HANDLE hFile;
  DWORD nNumberOfBytesToWrite;
  int iVar1;
  LPSTR lpMultiByteStr;
  int *lpUsedDefaultChar;
  undefined8 local_res8;
  
  iVar1 = param_5;
  hFile = DAT_140031500;
  if (param_5 == 0) {
    iVar1 = 1;
  }
  else {
    lpUsedDefaultChar = &param_5;
    if (param_2 == 0xfde9) {
      lpUsedDefaultChar = (LPBOOL)0x0;
    }
    local_res8 = param_1;
    nNumberOfBytesToWrite =
         WideCharToMultiByte(param_2,param_3,param_4,param_5,(LPSTR)0x0,0,(LPCSTR)0x0,
                             lpUsedDefaultChar);
    if (nNumberOfBytesToWrite != 0) {
      lpMultiByteStr = (LPSTR)LocalAlloc(0x40,(ulonglong)(nNumberOfBytesToWrite + 1));
      if (lpMultiByteStr != (LPSTR)0x0) {
        iVar1 = WideCharToMultiByte(param_2,param_3,param_4,iVar1,lpMultiByteStr,
                                    nNumberOfBytesToWrite,(LPCSTR)0x0,lpUsedDefaultChar);
        if (iVar1 != 0) {
          iVar1 = WriteFile(hFile,lpMultiByteStr,nNumberOfBytesToWrite,(LPDWORD)&local_res8,
                            (LPOVERLAPPED)0x0);
        }
        LocalFree(lpMultiByteStr);
        return iVar1;
      }
      SetLastError(8);
    }
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000e6d8(void)

{
  if (DAT_14003236c != 0) {
    if (_DAT_140032130 != 0) {
      FUN_14001cfe0(0x50200104);
      return;
    }
    SendMessageW(DAT_140032588,0xb1,(ulonglong)DAT_1400320f8,(ulonglong)DAT_1400320fc);
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000e730(undefined8 param_1,LPCWSTR *param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  byte bVar2;
  longlong *lpFileName;
  longlong *plVar3;
  DWORD DVar4;
  BOOL BVar5;
  UINT CodePage;
  int iVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  uint uVar10;
  ulonglong uVar11;
  HLOCAL hMem;
  LPCWSTR lpWideCharStr;
  LPBOOL lpUsedDefaultChar;
  undefined8 uVar12;
  HWND pHVar13;
  LPCWSTR pWVar14;
  DWORD DVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  LPBOOL pBVar21;
  undefined8 in_stack_00000000;
  undefined auStackY1288 [32];
  byte local_4c8;
  undefined8 local_4c0;
  DWORD local_4b8;
  int local_4b4;
  HWND local_4b0;
  undefined8 *local_4a8 [2];
  uint local_498;
  undefined4 local_494;
  LPWSTR local_490;
  short local_488 [260];
  uint local_280;
  undefined local_278 [24];
  undefined8 local_260;
  undefined local_258 [24];
  undefined8 local_240;
  short local_238;
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStackY1288;
  DVar9 = 0;
  local_4b0 = DAT_140032598;
  local_4b4 = 0;
  local_4c8 = (byte)param_3;
  local_4a8[0] = param_4;
  FUN_140020040(param_1,param_2,param_3,param_4);
  DVar15 = 1;
  if ((byte)param_3 != 0) {
    DVar15 = 3;
    DVar4 = GetFileAttributesW(DAT_1400320e0);
    if ((DVar4 != 0xffffffff) && ((DVar4 >> 0xe & 1) != 0)) {
      DuplicateEncryptionInfoFile(DAT_1400320e0,*param_2);
    }
  }
  BVar5 = PathFileExistsW(*param_2);
  local_4c0 = (longlong *)CONCAT44(local_4c0._4_4_,BVar5);
  DAT_140031500 =
       CreateFileW(*param_2,0xc0000000,DVar15,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (DAT_140031500 == (HANDLE)0xffffffffffffffff) goto LAB_14000ef73;
  DVar15 = GetLastError();
  if (DAT_14003236c != 0) {
    if (_DAT_140032130 == 0) {
      SendMessageW(DAT_140032588,0xb0,(WPARAM)&DAT_1400320f8,(LPARAM)&DAT_1400320fc);
      SendMessageW(DAT_140032588,0xb1,0,0);
    }
    else {
      FUN_140007e58(1);
    }
  }
  uVar11 = SendMessageW(DAT_140032588,0xe,0,0);
  hMem = (HLOCAL)SendMessageW(DAT_140032588,0xbd,0,0);
  if ((hMem != (HLOCAL)0x0) &&
     (lpWideCharStr = (LPCWSTR)LocalLock(hMem), lpWideCharStr != (LPCWSTR)0x0)) {
    iVar7 = (int)uVar11;
    if (DAT_1400315e0 == 2) {
      WriteFile(DAT_140031500,&DAT_140030684,2,&local_4b8,(LPOVERLAPPED)0x0);
      BVar5 = WriteFile(DAT_140031500,lpWideCharStr,iVar7 * 2,&local_4b8,(LPOVERLAPPED)0x0);
    }
    else if (DAT_1400315e0 == 3) {
      WriteFile(DAT_140031500,&DAT_140030680,2,&local_4b8,(LPOVERLAPPED)0x0);
      if (iVar7 != 0) {
        uVar16 = uVar11 & 0xffffffff;
        pWVar14 = lpWideCharStr;
        do {
          *pWVar14 = (ushort)*(byte *)((longlong)pWVar14 + 1) ^ *pWVar14 << 8;
          pWVar14 = pWVar14 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      BVar5 = WriteFile(DAT_140031500,lpWideCharStr,iVar7 * 2,&local_4b8,(LPOVERLAPPED)0x0);
      DVar9 = 0;
      if (iVar7 != 0) {
        uVar11 = uVar11 & 0xffffffff;
        do {
          *lpWideCharStr = (ushort)*(byte *)((longlong)lpWideCharStr + 1) ^ *lpWideCharStr << 8;
          lpWideCharStr = lpWideCharStr + 1;
          uVar11 = uVar11 - 1;
          DVar9 = 0;
        } while (uVar11 != 0);
      }
    }
    else {
      if (DAT_1400315e0 == 4) {
        WriteFile(DAT_140031500,&DAT_140030688,3,&local_4b8,(LPOVERLAPPED)0x0);
      }
      lpUsedDefaultChar = (LPBOOL)0x0;
      if (DAT_1400315e0 - 4 < 2) {
        CodePage = 0xfde9;
        pBVar21 = lpUsedDefaultChar;
      }
      else {
        CodePage = GetACP();
        lpUsedDefaultChar = &local_4b4;
        pBVar21 = (LPBOOL)0x400;
      }
      DVar9 = (DWORD)pBVar21;
      iVar6 = WideCharToMultiByte(CodePage,DVar9,lpWideCharStr,iVar7,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  lpUsedDefaultChar);
      pHVar13 = (HWND)0x0;
      if ((local_4b4 != 0) || ((iVar7 != 0 && (iVar6 == 0)))) {
        pHVar13 = local_4b0;
        iVar6 = FUN_14000bda4(local_4b0,DAT_140030630,DAT_140030590,*param_2,0x31);
        if (iVar6 == 2) goto LAB_14000ef0a;
        DVar9 = 0;
      }
      BVar5 = FUN_14000e594(pHVar13,CodePage,DVar9,lpWideCharStr,iVar7);
      param_4 = local_4a8[0];
    }
    if (BVar5 != 0) {
      SetEndOfFile(DAT_140031500);
      LocalUnlock(hMem);
      puVar18 = (undefined8 *)0x0;
      DAT_1400315e4 = DAT_1400315e0;
      SendMessageW(DAT_140032588,0xb9,0,0);
      DAT_140030678 = 0;
      if ((DAT_1400315e0 == 1) && (DVar9 == 0)) {
        FUN_14000f0d4(param_2,1,0,puVar18);
      }
      CloseHandle(DAT_140031500);
      DAT_140031500 = (HANDLE)0xffffffffffffffff;
      pcVar17 = (char *)0x220;
      memset(&local_498,0,0x220);
      uVar20 = (uint)local_4c8;
      if (local_4c8 != 0) {
        local_494 = Ordinal_170(*param_2);
        local_490 = PathFindExtensionW(*param_2);
        local_498 = FUN_14000efb4(*param_2);
        FUN_14000effc(*param_2,local_488);
        local_280 = DAT_1400315e0;
      }
      if (DAT_14003236c != 0) {
        FUN_14000e6d8();
      }
      uVar19 = 0;
      uVar8 = uVar19;
      if (_DAT_140032140 != 0) {
        local_4b0 = (HWND)0x0;
        uVar8 = 1;
        if ((int)local_4c0 != 0) {
          iVar7 = FUN_1400100f0(*param_2,&local_4b0);
          pHVar13 = local_4b0;
          uVar8 = 0;
          if (-1 < iVar7) {
            local_4c0 = (longlong *)((ulonglong)local_4c0 & 0xffffffff00000000);
            pcVar17 = (char *)0x1fa;
            memset(&local_238,0,0x1fa);
            puVar18 = &local_4c0;
            uVar10 = FUN_140021160((longlong)pHVar13,&local_238,pcVar17,(undefined4 *)puVar18);
            uVar8 = 0;
            if ((-1 < (int)uVar10) && ((int)local_4c0 != 2)) {
              uVar8 = 1;
            }
          }
          if (pHVar13 != (HWND)0x0) {
            CoTaskMemFree(pHVar13);
          }
        }
      }
      if ((param_4 != (undefined8 *)0x0) || (uVar8 != 0)) {
        local_4c0 = (longlong *)0x0;
        iVar7 = FUN_1400100f0(*param_2,(LPVOID *)&local_4c0);
        lpFileName = local_4c0;
        if (-1 < iVar7) {
          memset(&local_238,0,0x1fa);
          pcVar17 = &DAT_140032140;
          if (param_4 != (undefined8 *)0x0) {
            pcVar17 = (char *)param_4;
          }
          uVar8 = FID_conflict_StringCchCopyW(&local_238,0xfd,(longlong)pcVar17);
          if ((int)uVar8 < 0) {
            if (lpFileName != (longlong *)0x0) {
              CoTaskMemFree(lpFileName);
            }
            goto LAB_14000ef73;
          }
          DVar9 = GetFileAttributesW((LPCWSTR)lpFileName);
          uVar8 = uVar19;
          if (DVar9 != 0xffffffff) {
            if (((DVar9 >> 0xe & 1) == 0) ||
               (BVar5 = DecryptFileW((LPCWSTR)lpFileName,0), BVar5 != 0)) {
              if ((local_238 != 0) &&
                 (uVar10 = FUN_140021400((longlong)lpFileName,(longlong)&local_238), (int)uVar10 < 0
                 )) {
                pcVar17 = "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp";
                puVar18 = (undefined8 *)(ulonglong)uVar10;
                FUN_1400025bc(in_stack_00000000,0xdc,
                              "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
                uVar8 = uVar10;
              }
            }
            else {
              pcVar17 = "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp";
              uVar8 = FUN_1400025f4(in_stack_00000000,0xd6,
                                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp"
                                    ,puVar18);
            }
          }
          if (-1 < (int)uVar8) {
            if (local_238 == 0) {
              FUN_14000c5c0(1);
            }
            else {
              local_4a8[0] = (undefined8 *)&local_238;
              local_4c8 = 0;
              puVar18 = &local_260;
              local_4c0 = (longlong *)0x0;
              local_260 = 0;
              DVar9 = WindowsCreateStringReference
                                (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,
                                 local_278);
              if ((int)DVar9 < 0) {
                FUN_140020bc8(DVar9);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar17 = (char *)&local_4c0;
              iVar7 = RoGetActivationFactory(local_260);
              plVar3 = local_4c0;
              local_260 = 0;
              if (-1 < iVar7) {
                FUN_140022274((longlong)local_258,(longlong *)local_4a8);
                pcVar17 = (char *)&local_4c8;
                (**(code **)(*plVar3 + 0x38))();
                local_240 = 0;
              }
              plVar3 = local_4c0;
              bVar2 = local_4c8;
              if (local_4c0 != (longlong *)0x0) {
                local_4c0 = (longlong *)0x0;
                (**(code **)(*plVar3 + 0x10))();
              }
              if (bVar2 != 0) {
                uVar12 = FUN_14000c540((undefined *)&local_238);
                uVar19 = (uint)uVar12;
              }
              if (uVar19 == 0) {
                pcVar17 = (char *)0x0;
                FUN_14000f0d4(param_2,(ulonglong)DAT_1400315e4,0,puVar18);
              }
              _DAT_1400314f4 = _DAT_1400314f4 + 1;
            }
          }
        }
        if (lpFileName != (longlong *)0x0) {
          CoTaskMemFree(lpFileName);
        }
      }
      SetCursor(DAT_140031688);
      FUN_14000b130();
      FUN_1400200c0(&local_498,uVar20,pcVar17,puVar18);
      goto LAB_14000ef73;
    }
  }
LAB_14000ef0a:
  SetCursor(DAT_140031688);
  CloseHandle(DAT_140031500);
  DAT_140031500 = (HANDLE)0xffffffffffffffff;
  if (hMem != (HLOCAL)0x0) {
    LocalUnlock(hMem);
  }
  if (DVar15 != 0xb7) {
    DeleteFileW(*param_2);
  }
  if (DAT_14003236c != 0) {
    FUN_14000e6d8();
  }
LAB_14000ef73:
  FUN_140023f70(local_38 ^ (ulonglong)auStackY1288);
  return;
}



void FUN_14000efb4(LPCWSTR param_1)

{
  undefined auStack88 [32];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStack88;
  GetFileAttributesExW(param_1,GetFileExInfoStandard,local_38);
  FUN_140023f70(local_10 ^ (ulonglong)auStack88);
  return;
}



void FUN_14000effc(LPCWSTR param_1,short *param_2)

{
  int iVar1;
  HRESULT HVar2;
  LPWSTR pWVar3;
  wchar_t *pwVar4;
  LPWSTR local_res18 [2];
  
  local_res18[0] = (LPWSTR)0x0;
  pWVar3 = PathFindExtensionW(param_1);
  if (pWVar3 == (LPWSTR)0x0) {
    pwVar4 = L"Unknown";
  }
  else {
    iVar1 = _o__wcsicmp(pWVar3,L".log");
    if (iVar1 == 0) {
      pwVar4 = L"test/log";
    }
    else {
      HVar2 = FindMimeFromData((LPBC)0x0,param_1,(LPVOID)0x0,0,(LPCWSTR)0x0,0,local_res18,0);
      if (-1 < HVar2) {
        FID_conflict_StringCchCopyW(param_2,0x104,(longlong)local_res18[0]);
        CoTaskMemFree(local_res18[0]);
        return;
      }
      pwVar4 = L"FAIL/Error";
    }
  }
  FID_conflict_StringCchCopyW(param_2,0x104,(longlong)pwVar4);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000f0d4(LPCWSTR *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t **ppwVar1;
  HLOCAL pvVar2;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  ushort *lpMultiByteStr;
  ulonglong *puVar7;
  undefined8 *puVar8;
  LPWSTR lpWideCharStr;
  LPWSTR pWVar9;
  LRESULT LVar10;
  ushort uVar11;
  ushort *puVar12;
  ushort *_Src;
  LPCVOID pvVar13;
  undefined4 uVar14;
  UINT UVar15;
  ushort *wParam;
  undefined8 uVar16;
  undefined8 uVar17;
  UINT UVar18;
  undefined4 uVar19;
  undefined auStackY888 [32];
  UINT local_330;
  UINT local_328;
  int local_320;
  ushort local_31c [2];
  UINT local_318;
  ushort *local_310;
  uint local_308;
  undefined4 local_304;
  undefined local_300;
  undefined4 local_2fc;
  undefined local_2f8;
  wchar_t *local_2f0;
  UINT local_2e8;
  uint local_2e4;
  ushort *local_2e0;
  ulonglong local_2d8;
  wchar_t **local_2d0;
  LPWSTR local_2c8;
  HLOCAL local_2c0;
  LPWSTR local_2b8;
  ushort *local_2b0;
  LPCWSTR *local_2a8;
  uint local_2a0 [2];
  uint local_298 [4];
  uint local_288;
  undefined4 local_284;
  LPWSTR local_280;
  short local_278 [260];
  undefined4 local_70;
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  DWORD local_38;
  ulonglong local_30;
  
  local_30 = DAT_140030470 ^ (ulonglong)auStackY888;
  local_320 = (int)param_2;
  puVar12 = (ushort *)0x0;
  UVar15 = 0;
  wParam = (ushort *)0x0;
  local_2c8 = (LPWSTR)0x0;
  local_318 = 0;
  UVar18 = 0;
  local_328 = 0;
  local_68 = ZEXT816(0);
  local_58 = ZEXT816(0);
  local_48 = ZEXT816(0);
  local_38 = 0;
  local_2c0 = (HLOCAL)0x0;
  local_2d0 = param_1;
  local_2a8 = param_1;
  FUN_14001fedc(param_1,param_2,param_3,param_4);
  memset(local_278,0,0x210);
  local_284 = Ordinal_170(*param_1);
  local_280 = PathFindExtensionW(*param_1);
  if (DAT_140031500 == (HANDLE)0xffffffffffffffff) goto LAB_14000fbb7;
  BVar3 = GetFileInformationByHandle(DAT_140031500,(LPBY_HANDLE_FILE_INFORMATION)local_68);
  local_308 = local_48._4_4_;
  local_288 = local_48._4_4_;
  FUN_14000effc(*param_1,local_278);
  if (BVar3 != 0) {
    if ((local_48._4_4_ < 0x40000000) && (local_48._0_4_ == 0)) {
      SetCursor(DAT_140031680);
      iVar4 = FUN_14000fe88(*param_1);
      if (iVar4 == 0) goto LAB_14000fbb7;
      uVar19 = 2;
      if (local_48._4_4_ == 0) {
        lpMultiByteStr = local_31c;
        local_31c[0] = 0;
        local_2e0 = lpMultiByteStr;
      }
      else {
        local_2e0 = (ushort *)0x0;
        local_2f0 = (wchar_t *)
                    CreateFileMappingW(DAT_140031500,(LPSECURITY_ATTRIBUTES)0x0,2,0,local_48._4_4_,
                                       (LPCWSTR)0x0);
        lpMultiByteStr = puVar12;
        if (local_2f0 != (wchar_t *)0x0) {
          lpMultiByteStr = (ushort *)MapViewOfFile(local_2f0,4,0,0,(ulonglong)local_48._4_4_);
          local_2e0 = lpMultiByteStr;
          CloseHandle(local_2f0);
        }
      }
      uVar14 = 4;
      CloseHandle(DAT_140031500);
      DAT_140031500 = (HANDLE)0xffffffffffffffff;
      if (lpMultiByteStr == (ushort *)0x0) {
        SetCursor(DAT_140031688);
        goto LAB_14000fbb7;
      }
      local_310 = lpMultiByteStr;
      if (local_320 == 0) {
        if (*lpMultiByteStr != 0xbbef) {
          if (*lpMultiByteStr != 0xfeff) {
            if (*lpMultiByteStr != 0xfffe) goto LAB_14000f386;
            uVar19 = 3;
          }
LAB_14000f61b:
          wParam = (ushort *)(ulonglong)((local_48._4_4_ >> 1) - 1);
          uVar14 = uVar19;
          UVar18 = 1;
          goto LAB_14000f621;
        }
        if ((2 < local_48._4_4_) && (*(char *)(lpMultiByteStr + 1) == -0x41)) {
LAB_14000f5da:
          local_310 = (ushort *)((longlong)lpMultiByteStr + 3);
          local_48._4_4_ = local_48._4_4_ - 3;
          wParam = puVar12;
          local_330 = 0xfde9;
          goto LAB_14000f625;
        }
LAB_14000f386:
        local_320 = -1;
        local_2e8 = IsTextUnicode(lpMultiByteStr,local_48._4_4_,&local_320);
        if (((local_2e8 != 0) && (local_320 == 2)) && ((int)local_48._4_4_ < 100)) {
          local_2e8 = 0;
        }
        local_328 = local_2e8;
        if (local_2e8 != 0) {
          wParam = (ushort *)(ulonglong)(local_48._4_4_ >> 1);
          uVar14 = uVar19;
          UVar18 = local_2e8;
          goto LAB_14000f621;
        }
        iVar4 = MultiByteToWideChar(0xfde9,8,(LPCSTR)lpMultiByteStr,local_48._4_4_,(LPWSTR)0x0,0);
        if ((iVar4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x459)) {
          uVar14 = 1;
          UVar18 = local_328;
          local_330 = UVar15;
        }
        else {
          local_2d8 = local_2d8 & 0xffffffff00000000 | (ulonglong)DAT_1400314b8;
          uVar6 = DAT_1400314b8;
          if ((DAT_1400314b8 & 2) == 0) {
            puVar7 = (ulonglong *)FUN_14000d07c(&DAT_1400314b8,local_2a0);
            local_2d8 = *puVar7;
            uVar6 = (uint)local_2d8;
          }
          local_304 = 0;
          local_300 = 3;
          FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar6 >> 8 & 1,(ulonglong)(uVar6 >> 9 & 1),
                        &local_304,1,3);
LAB_14000f599:
          local_330 = 0xfde9;
          uVar14 = 5;
          UVar18 = local_328;
          local_48._4_4_ = local_308;
        }
        wParam = (ushort *)0x0;
      }
      else {
        if (local_320 == 2) {
          uVar11 = 0xfeff;
          uVar14 = uVar19;
        }
        else {
          if (local_320 != 3) {
            if (local_320 == 4) {
              local_330 = 0xfde9;
              if (((2 < local_48._4_4_) && (*lpMultiByteStr == 0xbbef)) &&
                 (*(char *)(lpMultiByteStr + 1) == -0x41)) goto LAB_14000f5da;
            }
            else {
              if (local_320 == 5) {
                uVar6 = DAT_1400314b8;
                if ((DAT_1400314b8 & 2) == 0) {
                  puVar8 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_298);
                  uVar6 = (uint)*puVar8;
                }
                local_2fc = 0;
                local_2f8 = 3;
                FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar6 >> 8 & 1,
                              (ulonglong)(uVar6 >> 9 & 1),&local_2fc,1,3);
                goto LAB_14000f599;
              }
              uVar14 = 1;
              local_330 = UVar18;
            }
            goto LAB_14000f625;
          }
          uVar11 = 0xfffe;
          uVar14 = 3;
        }
        UVar18 = 1;
        wParam = (ushort *)(ulonglong)(local_48._4_4_ >> 1);
        uVar19 = uVar14;
        if (*lpMultiByteStr == uVar11) goto LAB_14000f61b;
LAB_14000f621:
        local_330 = 0;
      }
LAB_14000f625:
      if (UVar18 == 0) {
        uVar6 = MultiByteToWideChar(local_330,0,(LPCSTR)local_310,local_48._4_4_,(LPWSTR)0x0,0);
        wParam = (ushort *)(ulonglong)uVar6;
      }
      SendMessageW(DAT_140032588,0xb,0,0);
      SendMessageW(DAT_140032588,0xb1,0,0);
      SendMessageW(DAT_140032588,0xb7,0,0);
      uVar6 = (uint)wParam;
      local_2c0 = LocalReAlloc(DAT_140031690,(ulonglong)(uVar6 + 1) * 2,2);
      if (local_2c0 == (HLOCAL)0x0) {
        FUN_14000d5d0(&local_2f0,local_2d0);
        FUN_14000fbec(0);
        SetCursor(DAT_140031688);
        FUN_14000bda4(DAT_140032598,DAT_140030630,DAT_140030638,local_2f0,0x30);
        if (lpMultiByteStr != local_31c) {
          UnmapViewOfFile(lpMultiByteStr);
        }
        SendMessageW(DAT_140032588,0xb,0,0);
        FUN_14000e324(&local_2f0);
        goto LAB_14000fbb7;
      }
      lpWideCharStr = (LPWSTR)LocalLock(local_2c0);
      local_2c8 = lpWideCharStr;
      if (UVar18 == 0) {
        uVar6 = MultiByteToWideChar(local_330,0,(LPCSTR)local_310,local_48._4_4_,lpWideCharStr,uVar6
                                   );
        wParam = (ushort *)(ulonglong)uVar6;
      }
      else {
        if (*lpMultiByteStr == 0xfeff) {
          _Src = lpMultiByteStr + 1;
        }
        else {
          _Src = lpMultiByteStr;
          if (*lpMultiByteStr == 0xfffe) {
            local_2b8 = lpWideCharStr;
            local_2e4 = 0;
            local_2b0 = lpMultiByteStr;
            while( true ) {
              local_2b0 = local_2b0 + 1;
              if (uVar6 <= (uint)puVar12) break;
              *local_2b8 = *local_2b0 * 0x100 + (*local_2b0 >> 8);
              local_2e4 = (uint)puVar12 + 1;
              puVar12 = (ushort *)(ulonglong)local_2e4;
              local_2b8 = local_2b8 + 1;
            }
            goto LAB_14000f862;
          }
        }
        memcpy(lpWideCharStr,_Src,(longlong)wParam * 2);
      }
LAB_14000f862:
      ppwVar1 = local_2d0;
      DAT_1400315e4 = uVar14;
      local_70 = uVar14;
      if (lpMultiByteStr != local_31c) {
        UnmapViewOfFile(lpMultiByteStr);
      }
      pvVar2 = local_2c0;
      UVar18 = local_318;
      if ((lpWideCharStr != (LPWSTR)0x0) &&
         (lpWideCharStr[(longlong)wParam] = L'\0', (char)param_3 == '\0')) {
        pWVar9 = lpWideCharStr;
        puVar12 = wParam;
        if ((int)wParam != 0) {
          do {
            if (*pWVar9 == L'\0') {
              *pWVar9 = L' ';
            }
            pWVar9 = pWVar9 + 1;
            puVar12 = (ushort *)((longlong)puVar12 + -1);
          } while (puVar12 != (ushort *)0x0);
        }
        UVar18 = UVar15;
        if ((((*lpWideCharStr == L'.') && (lpWideCharStr[1] == L'L')) && (lpWideCharStr[2] == L'O'))
           && (lpWideCharStr[3] == L'G')) {
          UVar18 = 1;
        }
      }
      LocalUnlock(local_2c0);
      DAT_140031690 = pvVar2;
      SendMessageW(DAT_140032588,0xb9,0,0);
      if (ppwVar1 != (wchar_t **)&DAT_1400320e0) {
        FUN_14000c6a8(&DAT_1400320e0,ppwVar1);
      }
      FUN_14000b83c();
      DAT_140030678 = 0;
      _DAT_140032374 = 1;
      SendMessageW(DAT_140032588,0xbc,(WPARAM)DAT_140031690,0);
      if (_DAT_140032374 == 2) {
        SetCursor(DAT_140031688);
        _DAT_140032374 = 0;
        FUN_14000bda4(DAT_140032598,DAT_140030630,DAT_140030638,*ppwVar1,0x30);
        FUN_14000fbec(0);
        SendMessageW(DAT_140032588,0xb,1,0);
      }
      else {
        _DAT_140032374 = 0;
        PostMessageW(DAT_140032588,0xc5,0,0);
        if (UVar18 != 0) {
          SendMessageW(DAT_140032588,0xb1,(WPARAM)wParam,(LPARAM)wParam);
          SendMessageW(DAT_140032588,0xb7,0,0);
          FUN_14000e3a8(1);
        }
        LVar10 = SendMessageW(DAT_140032588,0x115,0xbe,0);
        SetScrollPos(DAT_140032598,1,(int)LVar10,1);
        uVar17 = 0;
        SendMessageW(DAT_140032588,0xb,1,0);
        pvVar13 = (LPCVOID)0x0;
        uVar16 = 1;
        InvalidateRect(DAT_140032588,(RECT *)0x0,1);
        UpdateWindow(DAT_140032588);
        FUN_14000b130();
        SetCursor(DAT_140031688);
        if ((char)param_3 == '\0') {
          pvVar13 = DAT_1400320e0;
          SHAddToRecentDocs(3,DAT_1400320e0);
        }
        FUN_14001ff5c(&local_288,pvVar13,uVar16,uVar17);
      }
      goto LAB_14000fbb7;
    }
    FUN_14000bda4(DAT_140032598,DAT_140030630,DAT_140030638,*param_1,0x30);
  }
  CloseHandle(DAT_140031500);
  DAT_140031500 = (HANDLE)0xffffffffffffffff;
LAB_14000fbb7:
  FUN_140023f70(local_30 ^ (ulonglong)auStackY888);
  return;
}



void FUN_14000fbec(int param_1)

{
  LPCWSTR pv;
  uint uVar1;
  uint uVar2;
  int iVar3;
  DWORD dwErrCode;
  uint uVar4;
  undefined4 uVar5;
  HLOCAL pvVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar3 = FUN_140009fb4();
  if ((param_1 == 0) || (iVar3 != 0)) {
    SendMessageW(DAT_140032588,0xc,0,(LPARAM)&DAT_140027b40);
    pv = DAT_1400320e0;
    DAT_140030678 = 1;
    if (DAT_1400320e0 != (LPCWSTR)0x0) {
      dwErrCode = GetLastError();
      CoTaskMemFree(pv);
      SetLastError(dwErrCode);
    }
    DAT_1400320e0 = (LPCWSTR)0x0;
    FUN_14000b83c();
    SendMessageW(DAT_140032588,0xb1,0,0);
    SendMessageW(DAT_140032588,0xb7,0,0);
    pvVar6 = LocalReAlloc(DAT_140031690,2,2);
    if (pvVar6 != (HLOCAL)0x0) {
      DAT_140031690 = pvVar6;
    }
    puVar7 = (undefined2 *)LocalLock(DAT_140031690);
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = 0;
    }
    LocalUnlock(DAT_140031690);
    SendMessageW(DAT_140032588,0xbc,(WPARAM)DAT_140031690,0);
    DAT_1400315e4 = DAT_1400315e8;
    FUN_14000b130();
    FUN_14000c5c0(0);
    uVar2 = DAT_140032378;
    uVar1 = DAT_14003236c;
    if (iVar3 != 0) {
      uVar4 = FUN_14000efb4(DAT_1400320e0);
      uVar10 = (ulonglong)uVar2;
      uVar9 = (ulonglong)uVar1;
      uVar8 = (ulonglong)uVar4;
      FUN_14002021c((undefined (*) [16])&DAT_1400314d8,uVar4,uVar1,uVar2);
      uVar5 = FUN_14000ace4();
      FUN_14002053c(uVar5,uVar8,uVar9,uVar10);
    }
  }
  return;
}



void FUN_14000fdac(wchar_t *param_1)

{
  DWORD DVar1;
  WCHAR *pWVar2;
  undefined auStackY600 [32];
  WCHAR local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY600;
  DVar1 = GetLastError();
  pWVar2 = DAT_140030598;
  if ((DVar1 == 5) ||
     (DVar1 = FormatMessageW(0x1200,(LPCVOID)0x0,DVar1,0,local_218,0x100,(va_list *)0x0),
     pWVar2 = DAT_140030670, DVar1 == 0)) {
    FUN_14000bda4(DAT_140032598,DAT_140030630,pWVar2,param_1,0x30);
  }
  else {
    MessageBoxW(DAT_140032598,local_218,DAT_140030630,0x30);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY600);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x000140010032)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000fe88(wchar_t *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined auStackY680 [32];
  undefined8 local_270;
  LPVOID local_268;
  short *local_260;
  undefined local_258 [24];
  undefined8 local_240;
  undefined local_238 [24];
  undefined8 local_220;
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY680;
  bVar7 = DAT_140032348 != 2;
  FUN_14000c5c0(0);
  local_268 = (LPVOID)0x0;
  local_270 = (longlong *)((ulonglong)local_270._4_4_ << 0x20);
  uVar6 = 0x1fa;
  memset(local_218,0,0x1fa);
  iVar3 = FUN_1400100f0(param_1,&local_268);
  if ((iVar3 < 0) ||
     (uVar4 = FUN_140021160((longlong)local_268,local_218,uVar6,(undefined4 *)&local_270),
     (int)uVar4 < 0)) {
    _DAT_1400314f8 = _DAT_1400314f8 + 1;
LAB_140010095:
    iVar3 = 1;
LAB_140010097:
    FUN_14000c5c0(iVar3);
  }
  else {
    DAT_140032348 = (int)local_270;
    if ((int)local_270 == 1) goto LAB_14001009c;
    if ((int)local_270 == 2) {
      _DAT_1400314f2 = _DAT_1400314f2 + 1;
      if (((_DAT_140032134 != 0) && (bVar7)) &&
         (iVar3 = FUN_140022144((longlong)local_218), iVar3 == 2)) goto LAB_140010095;
      local_270 = (longlong *)0x0;
      local_260 = local_218;
      local_240 = 0;
      DVar5 = WindowsCreateStringReference
                        (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_258,
                         &local_240);
      if ((int)DVar5 < 0) {
        FUN_140020bc8(DVar5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = RoGetActivationFactory(local_240,&DAT_14002a900,&local_270);
      plVar2 = local_270;
      local_240 = 0;
      if (-1 < iVar3) {
        FUN_140022274((longlong)local_238,(longlong *)&local_260);
        (**(code **)(*plVar2 + 0x38))();
        local_220 = 0;
      }
      plVar2 = local_270;
      if (local_270 != (longlong *)0x0) {
        local_270 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    else if ((int)local_270 == 5) {
      iVar3 = 5;
      goto LAB_140010097;
    }
    FUN_14000bda4(DAT_140032598,DAT_1400304a0,DAT_140030498,param_1,0x30);
    CloseHandle(DAT_140031500);
    DAT_140031500 = (HANDLE)0xffffffffffffffff;
    DAT_140032348 = 0;
  }
LAB_14001009c:
  if (local_268 != (LPVOID)0x0) {
    CoTaskMemFree(local_268);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY680);
  return;
}



void FUN_1400100f0(undefined8 param_1,LPVOID *param_2)

{
  undefined8 local_res8 [4];
  undefined local_88 [8];
  undefined **local_80;
  undefined8 *local_78;
  undefined ***local_18;
  
  local_80 = &PTR_FUN_1400260e0;
  local_78 = local_res8;
  local_18 = &local_80;
  local_res8[0] = param_1;
  FUN_140010138(param_2,(longlong)local_88);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140010138(LPVOID *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  LPVOID *ppvVar3;
  LPVOID pvVar4;
  undefined8 in_stack_00000000;
  undefined auStack648 [32];
  LPVOID local_268;
  LPVOID local_260;
  LPVOID local_258;
  LPVOID local_250;
  LPVOID local_248 [2];
  short local_238 [256];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStack648;
  local_238[0] = 0;
  local_260 = (LPVOID)0x0;
  local_268 = (LPVOID)0x0;
  iVar1 = FUN_14000d5e8(param_2);
  if (iVar1 < 0) {
    if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14001038c;
    pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
LAB_1400101b1:
    (*pcVar2)();
  }
  else {
    pvVar4 = (LPVOID)0x0;
    if (local_260 < (LPVOID)0x101) {
      ppvVar3 = (LPVOID *)FUN_14000e224(&local_258,local_238,(longlong)local_260 - 1);
      if (&local_268 != ppvVar3) {
        FUN_14000c6a8(&local_268,ppvVar3);
        pvVar4 = local_268;
      }
      if (local_258 != (LPVOID)0x0) {
        CoTaskMemFree(local_258);
      }
      if (pvVar4 != (LPVOID)0x0) {
LAB_14001033f:
        local_250 = pvVar4;
        if (param_1 != &local_250) {
          FUN_14000c6a8(param_1,&local_250);
        }
        if (local_250 != (LPVOID)0x0) {
          CoTaskMemFree(local_250);
        }
        if (*(longlong **)(param_2 + 0x70) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_2 + 0x70) + 0x18))();
        }
        goto LAB_14001038c;
      }
      FUN_1400025bc(in_stack_00000000,0x6f,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
      if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14001038c;
      pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
    }
    else {
      ppvVar3 = (LPVOID *)FUN_14000e224(local_248,(short *)0x0,(longlong)local_260 - 1);
      if (&local_268 != ppvVar3) {
        FUN_14000c6a8(&local_268,ppvVar3);
        pvVar4 = local_268;
      }
      if (local_248[0] != (LPVOID)0x0) {
        CoTaskMemFree(local_248[0]);
      }
      if (pvVar4 != (LPVOID)0x0) {
        local_258 = (LPVOID)0x0;
        iVar1 = FUN_14000d5e8(param_2);
        if (-1 < iVar1) {
          if (local_260 != local_258) {
            FUN_140002634(in_stack_00000000,0x7b,
                          "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_14001033f;
        }
        FUN_1400025bc(in_stack_00000000,0x78,
                      "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
        CoTaskMemFree(pvVar4);
        if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14001038c;
        pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
        goto LAB_1400101b1;
      }
      FUN_1400025bc(in_stack_00000000,0x75,
                    "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h");
      if (*(longlong **)(param_2 + 0x70) == (longlong *)0x0) goto LAB_14001038c;
      pcVar2 = *(code **)(**(longlong **)(param_2 + 0x70) + 0x18);
    }
    (*pcVar2)();
  }
LAB_14001038c:
  FUN_140023f70(local_38 ^ (ulonglong)auStack648);
  return;
}



void FUN_1400103e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1400260e0;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



undefined4 FUN_140010400(longlong param_1,LPWSTR *param_2,ulonglong *param_3,ulonglong **param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  
  uVar1 = *param_3;
  puVar2 = *param_4;
  uVar6 = 0;
  DVar3 = GetFullPathNameW(**(LPCWSTR **)(param_1 + 8),(DWORD)uVar1,*param_2,(LPWSTR *)0x0);
  uVar5 = (ulonglong)DVar3;
  uVar4 = 0;
  *puVar2 = uVar5;
  if (uVar5 == 0) {
    uVar4 = FUN_1400025f4(in_stack_00000000,0x9b,
                          "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/filesystem.h",uVar6);
  }
  else if (uVar5 < uVar1) {
    *puVar2 = uVar5 + 1;
  }
  return uVar4;
}



void FUN_140010470(HKEY param_1,LPCWSTR param_2,undefined4 param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  RegSetValueExW(param_1,param_2,0,4,(BYTE *)local_res18,4);
  return;
}



void FUN_1400104a8(HKEY param_1,LPCWSTR param_2,wchar_t *param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = 0;
  if (param_3 != (wchar_t *)0x0) {
    sVar2 = wcsnlen(param_3,(longlong)param_4);
    iVar1 = (int)sVar2;
  }
  RegSetValueExW(param_1,param_2,0,1,(BYTE *)param_3,iVar1 * 2 + 2);
  return;
}



undefined4 FUN_14001051c(HKEY param_1,LPCWSTR param_2,undefined4 param_3)

{
  LSTATUS LVar1;
  DWORD local_res8 [6];
  undefined4 local_res20 [2];
  DWORD local_18 [4];
  
  local_res8[0] = 0;
  local_res20[0] = 1;
  local_18[0] = 4;
  if (param_1 != (HKEY)0x0) {
    LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,local_res8,(LPBYTE)local_res20,local_18);
    if ((LVar1 == 0) && (local_res8[0] == 4)) {
      param_3 = local_res20[0];
    }
  }
  return param_3;
}



undefined4 FUN_140010584(HKEY param_1,LPCWSTR param_2)

{
  LSTATUS LVar1;
  DWORD local_res8 [2];
  undefined4 local_res18 [2];
  DWORD local_res20 [2];
  undefined4 local_18 [2];
  HKEY local_10;
  
  local_res18[0] = 1;
  local_res8[0] = 0;
  local_10 = (HKEY)0x0;
  local_18[0] = 0;
  local_res20[0] = 4;
  if ((((param_1 == (HKEY)0x0) ||
       (LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,local_res8,(LPBYTE)local_res18,
                                 local_res20), LVar1 != 0)) || (local_res8[0] != 4)) &&
     (local_res18[0] = local_18[0],
     LVar1 = RegCreateKeyW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Notepad",&local_10),
     LVar1 == 0)) {
    RegSetValueExW(local_10,param_2,0,4,(BYTE *)local_18,4);
    RegCloseKey(local_10);
  }
  return local_res18[0];
}



void FUN_140010660(HKEY param_1,LPCWSTR param_2,void *param_3,undefined2 *param_4,DWORD param_5)

{
  LSTATUS LVar1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  lVar2 = (longlong)(int)param_5;
  local_res8[0] = 0;
  *param_4 = 0;
  param_5 = param_5 * 2;
  if (((param_1 != (HKEY)0x0) &&
      (LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,local_res8,(LPBYTE)param_4,&param_5),
      LVar1 == 0)) && (local_res8[0] == 1)) {
    return;
  }
  memcpy(param_4,param_3,lVar2 * 2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400106ec(void)

{
  bool bVar1;
  bool bVar2;
  HWND hWnd;
  BOOL BVar3;
  LSTATUS LVar4;
  undefined8 uVar5;
  undefined auStack104 [32];
  HKEY local_48;
  WINDOWPLACEMENT local_40;
  ulonglong local_10;
  
  hWnd = DAT_140032598;
  local_10 = DAT_140030470 ^ (ulonglong)auStack104;
  bVar2 = false;
  local_40.length = 0x2c;
  uVar5 = SetThreadDpiAwarenessContext(0xffffffffffffffff);
  BVar3 = GetWindowPlacement(hWnd,&local_40);
  SetThreadDpiAwarenessContext(uVar5);
  if ((BVar3 == 0) ||
     ((DAT_1400317fc == CONCAT44(local_40.rcNormalPosition.top,local_40.rcNormalPosition.left) &&
      (DAT_140031804 == CONCAT44(local_40.rcNormalPosition.bottom,local_40.rcNormalPosition.right)))
     )) {
    bVar1 = false;
    if ((_DAT_140032354 == 0) &&
       (((bVar1 = bVar2, _DAT_140032358 == 0 && (_DAT_140032350 == 0)) && (_DAT_14003234c == 0))))
    goto LAB_140010adf;
  }
  else {
    bVar1 = true;
  }
  LVar4 = RegCreateKeyW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Notepad",&local_48);
  if (LVar4 == 0) {
    if (_DAT_140032350 != 0) {
      FUN_140010470(local_48,L"lfEscapement",DAT_140031618);
      FUN_140010470(local_48,L"lfOrientation",DAT_14003161c);
      FUN_140010470(local_48,L"lfWeight",DAT_140031620);
      FUN_140010470(local_48,L"lfItalic",(uint)DAT_140031624);
      FUN_140010470(local_48,L"lfUnderline",(uint)DAT_140031625);
      FUN_140010470(local_48,L"lfStrikeOut",(uint)DAT_140031626);
      FUN_140010470(local_48,L"lfCharSet",(uint)DAT_140031627);
      FUN_140010470(local_48,L"lfOutPrecision",(uint)DAT_140031628);
      FUN_140010470(local_48,L"lfClipPrecision",(uint)DAT_140031629);
      FUN_140010470(local_48,L"lfQuality",(uint)DAT_14003162a);
      FUN_140010470(local_48,L"lfPitchAndFamily",(uint)DAT_14003162b);
      FUN_1400104a8(local_48,L"lfFaceName",(wchar_t *)&DAT_14003162c,0x20);
      FUN_140010470(local_48,L"iPointSize",DAT_14003067c);
    }
    if (_DAT_140032358 != 0) {
      FUN_140010470(local_48,L"fWrap",DAT_14003236c);
      FUN_140010470(local_48,L"StatusBar",DAT_140032378);
    }
    if (_DAT_140032354 != 0) {
      FUN_1400104a8(local_48,L"szHeader",(wchar_t *)&DAT_1400316a0,0x28);
      FUN_1400104a8(local_48,L"szTrailer",(wchar_t *)&DAT_1400316f0,0x28);
      FUN_140010470(local_48,L"iMarginTop",DAT_140031550);
      FUN_140010470(local_48,L"iMarginBottom",DAT_140031558);
      FUN_140010470(local_48,L"iMarginLeft",DAT_14003154c);
      FUN_140010470(local_48,L"iMarginRight",DAT_140031554);
    }
    if (bVar1) {
      FUN_140010470(local_48,L"iWindowPosX",local_40.rcNormalPosition.left);
      FUN_140010470(local_48,L"iWindowPosY",local_40.rcNormalPosition.top);
      FUN_140010470(local_48,L"iWindowPosDX",
                    local_40.rcNormalPosition.right - local_40.rcNormalPosition.left);
      FUN_140010470(local_48,L"iWindowPosDY",
                    local_40.rcNormalPosition.bottom - local_40.rcNormalPosition.top);
    }
    if (_DAT_14003234c != 0) {
      FUN_140010470(local_48,L"fReverse",(uint)DAT_1400325a0);
      FUN_140010470(local_48,L"fWrapAround",(uint)DAT_1400325a1);
      FUN_140010470(local_48,L"fMatchCase",(uint)DAT_1400325a2);
      FUN_1400104a8(local_48,L"searchString",(wchar_t *)&DAT_140032480,0x80);
      FUN_1400104a8(local_48,L"replaceString",(wchar_t *)&DAT_140032380,0x80);
    }
    RegCloseKey(local_48);
  }
LAB_140010adf:
  FUN_140023f70(local_10 ^ (ulonglong)auStack104);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140010b08(void)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined auStackY328 [32];
  HKEY local_108;
  undefined4 local_100;
  undefined local_fc;
  undefined4 local_f8;
  undefined local_f4;
  HKEY local_f0;
  undefined8 local_e8;
  uint local_e0 [2];
  uint local_d8 [4];
  undefined local_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_68;
  undefined4 uStack100;
  undefined4 uStack96;
  undefined4 uStack92;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined local_4a [16];
  undefined local_3a [16];
  undefined4 local_2a;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY328;
  memset(local_c8,0,0x5c);
  local_50 = 0x65006c;
  local_4c = 0;
  local_68 = 0x75004c;
  uStack100 = 0x690063;
  uStack96 = 0x610064;
  uStack92 = 0x430020;
  local_2a = 0;
  local_58 = 0x6f0073006e006f;
  uVar6 = 100;
  local_4a = ZEXT816(0);
  local_3a = ZEXT816(0);
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Notepad",0,0x20019,
                        &local_108);
  _DAT_140031614 = 0;
  if (LVar1 != 0) {
    local_108 = (HKEY)0x0;
  }
  DAT_140031618 = FUN_14001051c(local_108,L"lfEscapement",local_c0);
  DAT_14003161c = FUN_14001051c(local_108,L"lfOrientation",local_bc);
  DAT_140031620 = FUN_14001051c(local_108,L"lfWeight",local_b8);
  uVar2 = FUN_14001051c(local_108,L"lfItalic",0);
  DAT_140031624 = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfUnderline",0);
  DAT_140031625 = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfStrikeOut",0);
  DAT_140031626 = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfCharSet",0);
  DAT_140031627 = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfOutPrecision",0);
  DAT_140031628 = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfClipPrecision",0);
  DAT_140031629 = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfQuality",0);
  DAT_14003162a = (undefined)uVar2;
  uVar2 = FUN_14001051c(local_108,L"lfPitchAndFamily",0);
  DAT_14003162b = (undefined)uVar2;
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,L"Software\\Microsoft\\Notepad\\DefaultFonts",0,
                        0x20019,&local_f0);
  if (LVar1 == 0) {
    FUN_140010660(local_f0,L"lfFaceName",L"Lucida Console",(undefined2 *)&local_68,0x20);
    uVar6 = FUN_14001051c(local_f0,L"iPointSize",100);
    RegCloseKey(local_f0);
  }
  FUN_140010660(local_108,L"lfFaceName",&local_68,(undefined2 *)&DAT_14003162c,0x20);
  DAT_14003067c = FUN_14001051c(local_108,L"iPointSize",uVar6);
  DAT_14003236c = FUN_14001051c(local_108,L"fWrap",0);
  uVar5 = DAT_1400314b8;
  if ((DAT_1400314b8 & 2) == 0) {
    puVar4 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_e0);
    local_e8 = *puVar4;
    uVar5 = (uint)local_e8;
  }
  local_100 = 0;
  local_fc = 3;
  FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar5 >> 8 & 1,(ulonglong)(uVar5 >> 9 & 1),
                &local_100,1,3);
  DAT_1400315e8 = FUN_14001051c(local_108,L"iDefaultEncoding",5);
  uVar5 = DAT_1400314a8;
  if ((DAT_1400314a8 & 2) == 0) {
    puVar4 = (undefined8 *)FUN_14000d1d8(&DAT_1400314a8,local_d8);
    local_e8 = *puVar4;
    uVar5 = (uint)local_e8;
  }
  local_f8 = 0;
  local_f4 = 3;
  FUN_14000dd74((uint *)&DAT_1400314b0,0x107b944,uVar5 >> 8 & 1,(ulonglong)(uVar5 >> 9 & 1),
                &local_f8,1,3);
  DAT_140032378 = FUN_14001051c(local_108,L"StatusBar",1);
  FUN_14001051c(local_108,L"fSaveWindowPositions",0);
  DAT_140032368 = FUN_140010584(local_108,L"fWindowsOnlyEOL");
  DAT_140032364 = FUN_140010584(local_108,L"fPasteOriginalEOL");
  iVar3 = FUN_140010584(local_108,L"fReverse");
  DAT_1400325a0 = iVar3 != 0;
  iVar3 = FUN_140010584(local_108,L"fWrapAround");
  DAT_1400325a1 = iVar3 != 0;
  iVar3 = FUN_140010584(local_108,L"fMatchCase");
  DAT_1400325a2 = iVar3 != 0;
  FUN_140010660(local_108,L"searchString",&DAT_140032480,(undefined2 *)&DAT_140032480,0x80);
  FUN_140010660(local_108,L"replaceString",&DAT_140032380,(undefined2 *)&DAT_140032380,0x80);
  FUN_140010660(local_108,L"szHeader",&DAT_1400316a0,(undefined2 *)&DAT_1400316a0,0x28);
  FUN_140010660(local_108,L"szTrailer",&DAT_1400316f0,(undefined2 *)&DAT_1400316f0,0x28);
  DAT_140031550 = FUN_14001051c(local_108,L"iMarginTop",DAT_140031550);
  DAT_140031558 = FUN_14001051c(local_108,L"iMarginBottom",DAT_140031558);
  DAT_14003154c = FUN_14001051c(local_108,L"iMarginLeft",DAT_14003154c);
  DAT_140031554 = FUN_14001051c(local_108,L"iMarginRight",DAT_140031554);
  DAT_140032104 = FUN_14001051c(local_108,L"iWindowPosY",0x80000000);
  DAT_140032108 = FUN_14001051c(local_108,L"iWindowPosX",0x80000000);
  DAT_14003210c = FUN_14001051c(local_108,L"iWindowPosDX",0x80000000);
  DAT_140032110 = FUN_14001051c(local_108,L"iWindowPosDY",0x80000000);
  _DAT_140032130 = FUN_14001051c(local_108,L"fMLE_is_broken",0);
  if (local_108 != (HKEY)0x0) {
    RegCloseKey(local_108);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY328);
  return;
}



undefined8 FUN_140011114(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  LPWSTR pWVar2;
  LPWSTR pWVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar4 = (longlong)param_1 - (longlong)param_2;
    do {
      pWVar2 = CharUpperW((LPWSTR)(ulonglong)uVar1);
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      pWVar3 = CharUpperW((LPWSTR)(ulonglong)uVar1);
      if ((short)pWVar2 != (short)pWVar3) {
        return 1;
      }
      uVar1 = *(ushort *)(lVar4 + (longlong)param_2);
    } while (uVar1 != 0);
  }
  return 0;
}



void FUN_140011188(WCHAR *param_1,LPCWSTR *param_2)

{
  WCHAR WVar1;
  LPCWSTR lpFileName;
  uint uVar2;
  BOOL BVar3;
  longlong lVar4;
  short **ppsVar5;
  HANDLE pvVar6;
  LPWSTR pWVar7;
  longlong lVar8;
  short *psVar9;
  ulonglong uVar10;
  LPCWSTR pszPath;
  short *pv;
  WCHAR *pszPath_00;
  undefined auStack728 [32];
  LPCWSTR local_2b8;
  short *local_2b0;
  LPCWSTR local_2a8;
  LPVOID local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_140030470 ^ (ulonglong)auStack728;
  pv = (short *)0x0;
  WVar1 = *param_1;
  local_2b0 = (short *)0x0;
  if ((WVar1 == L'\"') || (WVar1 == L'\'')) {
    param_1 = param_1 + 1;
    psVar9 = pv;
    pszPath_00 = param_1;
    while( true ) {
      if ((*pszPath_00 == L'\0') || (*pszPath_00 == WVar1)) break;
      psVar9 = (short *)(ulonglong)((int)psVar9 + 1);
      pszPath_00 = pszPath_00 + 1;
    }
    uVar2 = (int)psVar9 + 1;
    uVar10 = (ulonglong)uVar2;
    ppsVar5 = (short **)FUN_14000e224(&local_2a0,(short *)0x0,(ulonglong)uVar2);
    if (&local_2b0 != ppsVar5) {
      FUN_14000c6a8(&local_2b0,ppsVar5);
      pv = local_2b0;
    }
    if (local_2a0 != (LPVOID)0x0) {
      CoTaskMemFree(local_2a0);
    }
  }
  else {
    lVar4 = -1;
    do {
      lVar8 = lVar4;
      lVar4 = lVar8 + 1;
    } while (param_1[lVar4] != L'\0');
    uVar10 = lVar8 + 2;
    ppsVar5 = (short **)FUN_14000e224(&local_2a0,(short *)0x0,uVar10);
    if (&local_2b0 != ppsVar5) {
      FUN_14000c6a8(&local_2b0,ppsVar5);
      pv = local_2b0;
    }
    pszPath_00 = param_1;
    if (local_2a0 != (LPVOID)0x0) {
      CoTaskMemFree(local_2a0);
    }
  }
  FID_conflict_StringCchCopyW(pv,uVar10,(longlong)param_1);
  local_2b8 = (LPCWSTR)0x0;
  BVar3 = PathIsFileSpecW(pszPath_00);
  if (BVar3 == 0) {
    FUN_1400100f0(pv,&local_2b8);
  }
  else {
    FUN_14000c6a8(&local_2b8,&local_2b0);
    pv = local_2b0;
  }
  pszPath = local_2b8;
  pvVar6 = FindFirstFileW(local_2b8,&local_298);
  if (pvVar6 == (HANDLE)0xffffffffffffffff) {
    pWVar7 = PathFindExtensionW(pszPath);
    if (*pWVar7 == L'\0') {
      lVar4 = -1;
      do {
        lVar8 = lVar4;
        lVar4 = lVar8 + 1;
      } while (pszPath[lVar4] != L'\0');
      uVar10 = lVar8 + 6;
      FUN_14000e224(&local_2a8,(short *)0x0,uVar10);
      lpFileName = local_2a8;
      if (local_2a8 != (LPCWSTR)0x0) {
        FID_conflict_StringCchCatW(local_2a8,uVar10,(longlong)pszPath);
        FID_conflict_StringCchCatW(lpFileName,uVar10,(longlong)L".txt");
      }
      pvVar6 = FindFirstFileW(lpFileName,&local_298);
      if (pvVar6 != (HANDLE)0xffffffffffffffff) {
        FindClose(pvVar6);
      }
      FUN_14000c6a8(&local_2b8,&local_2a8);
      pszPath = local_2b8;
      if (local_2a8 != (LPCWSTR)0x0) {
        CoTaskMemFree(local_2a8);
        pszPath = local_2b8;
      }
    }
  }
  else {
    FindClose(pvVar6);
  }
  if (param_2 != &local_2b8) {
    FUN_14000c6a8(param_2,&local_2b8);
    pszPath = local_2b8;
  }
  if (pszPath != (LPCWSTR)0x0) {
    CoTaskMemFree(pszPath);
  }
  if (pv != (short *)0x0) {
    CoTaskMemFree(pv);
  }
  FUN_140023f70(local_48 ^ (ulonglong)auStack728);
  return;
}



undefined8 FUN_140011444(HINSTANCE param_1)

{
  int iVar1;
  int iVar2;
  LPWSTR pWVar3;
  SIZE_T SVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  
  iVar2 = 0x118;
  pWVar3 = (LPWSTR)LocalAlloc(0x40,0x230);
  do {
    if (pWVar3 == (LPWSTR)0x0) {
      return 0;
    }
    iVar6 = 0;
    ppuVar8 = &PTR_DAT_1400264f0;
    iVar7 = 0;
    do {
      iVar1 = LoadStringW(param_1,*(UINT *)*ppuVar8,pWVar3,iVar2);
      if (iVar2 + -1 <= iVar1) break;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 1 + iVar1;
      ppuVar8 = (undefined **)((UINT **)ppuVar8 + 1);
    } while ((longlong)ppuVar8 < 0x1400266d0);
    LocalFree(pWVar3);
    ppuVar8 = &PTR_DAT_1400264f0;
    if (0x3b < iVar6) {
      if (iVar7 == 0) {
        return 0;
      }
      pWVar3 = (LPWSTR)LocalAlloc(0x40,(longlong)iVar7 * 2);
      if (pWVar3 == (LPWSTR)0x0) {
        return 0;
      }
      SVar4 = LocalSize(pWVar3);
      uVar5 = (ulonglong)(longlong)(int)SVar4 >> 1;
      if ((int)uVar5 == 0) {
        return 0;
      }
      do {
        iVar6 = (int)uVar5;
        iVar2 = LoadStringW(param_1,*(UINT *)*ppuVar8,pWVar3,iVar6);
        iVar2 = iVar2 + 1;
        *(LPWSTR *)*ppuVar8 = pWVar3;
        pWVar3 = pWVar3 + iVar2;
        if (iVar6 < iVar2) {
          return 0;
        }
        uVar5 = (ulonglong)(uint)(iVar6 - iVar2);
        ppuVar8 = (undefined **)((UINT **)ppuVar8 + 1);
      } while ((longlong)ppuVar8 < 0x1400266d0);
      FID_conflict_StringCchCopyW((short *)&DAT_1400316a0,0x28,DAT_1400305e0);
      FID_conflict_StringCchCopyW((short *)&DAT_1400316f0,0x28,DAT_1400305d8);
      DAT_1400315ec = *DAT_1400305f0;
      return 1;
    }
    iVar2 = iVar2 * 2;
    pWVar3 = (LPWSTR)LocalAlloc(0x40,(longlong)iVar2 * 2);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400115fc(ushort *param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  WCHAR *pWVar5;
  wchar_t *pwVar6;
  LPCWSTR local_res10;
  
  iVar3 = 0;
  uVar4 = FUN_140011114((ushort *)L"/.SETUP",param_1);
  if ((int)uVar4 == 0) {
    _DAT_140032370 = 1;
    DAT_140031600 = GetSystemMenu(DAT_140032598,0);
    DAT_1400315f0 = LoadAcceleratorsW(DAT_140031670,L"SlipUpAcc");
    SetWindowLongW(DAT_140032598,-0x10,0xfd0000);
    for (pWVar5 = (WCHAR *)(param_1 + 7); (*pWVar5 == L' ' || (*pWVar5 == L'\t'));
        pWVar5 = pWVar5 + 1) {
    }
    if (*pWVar5 != L'\0') {
      local_res10 = (LPCWSTR)0x0;
      FUN_140011188(pWVar5,&local_res10);
      pwVar6 = (wchar_t *)0x0;
      DAT_140031500 =
           CreateFileW(local_res10,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (DAT_140031500 == (HANDLE)0xffffffffffffffff) {
        DVar2 = GetLastError();
        pwVar6 = local_res10;
        if (DVar2 == 2) {
          iVar3 = FUN_14000bda4(DAT_140032598,DAT_140030630,DAT_140030668,local_res10,0x33);
          if (iVar3 == 6) {
            pwVar6 = (wchar_t *)0x0;
            DAT_140031500 =
                 CreateFileW(local_res10,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0)
            ;
          }
        }
        else {
          pWVar5 = DAT_140030598;
          if ((DVar2 != 5) && (pWVar5 = DAT_140030610, DVar2 != 0x7b)) {
            pWVar5 = DAT_140030670;
          }
          iVar3 = FUN_14000bda4(DAT_140032598,DAT_140030630,pWVar5,local_res10,0x31);
        }
        if (DAT_140031500 == (HANDLE)0xffffffffffffffff) {
          if (local_res10 != (LPCWSTR)0x0) {
            CoTaskMemFree(local_res10);
          }
          goto LAB_1400117ca;
        }
      }
      cVar1 = FUN_14000f0d4(&local_res10,(ulonglong)DAT_140032100,0,pwVar6);
      if (cVar1 == '\0') {
        FUN_14000fdac(local_res10);
      }
      if (local_res10 != (wchar_t *)0x0) {
        CoTaskMemFree(local_res10);
      }
      if (iVar3 == 2) {
        return 2;
      }
    }
    uVar4 = 6;
  }
  else {
LAB_1400117ca:
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_14001182c(ushort *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  WCHAR WVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  short *psVar8;
  ulonglong uVar9;
  short sVar10;
  WCHAR *pWVar11;
  int iVar12;
  uint uVar13;
  LPCWSTR local_res18 [2];
  
  bVar2 = true;
  uVar6 = FUN_140011114((ushort *)&DAT_140028118,param_1);
  uVar9 = 0;
  if ((int)uVar6 == 0) {
    for (pWVar11 = (WCHAR *)(param_1 + 3); (WVar4 = *pWVar11, WVar4 == L' ' || (WVar4 == L'\t'));
        pWVar11 = pWVar11 + 1) {
    }
    iVar12 = 2;
    bVar2 = false;
  }
  else {
    uVar6 = FUN_140011114((ushort *)&DAT_140028120,param_1);
    if ((int)uVar6 != 0) {
      return 0;
    }
    for (pWVar11 = (WCHAR *)(param_1 + 2); (WVar4 = *pWVar11, WVar4 == L' ' || (WVar4 == L'\t'));
        pWVar11 = pWVar11 + 1) {
    }
    iVar12 = 1;
  }
  if (WVar4 != L'\0') {
    ShowWindow(DAT_140032598,param_2);
    local_res18[0] = (LPCWSTR)0x0;
    lVar7 = FUN_140011188(pWVar11,local_res18);
    psVar8 = (short *)(lVar7 + 2);
    if (bVar2) {
LAB_140011985:
      uVar6 = 0;
      DAT_140031500 =
           CreateFileW(local_res18[0],0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (DAT_140031500 == (HANDLE)0xffffffffffffffff) {
        DVar5 = GetLastError();
        pWVar11 = DAT_140030668;
        if (((DVar5 != 2) && (pWVar11 = DAT_140030598, DVar5 != 5)) &&
           ((DVar5 != 0x41 && (pWVar11 = DAT_140030610, DVar5 != 0x7b)))) {
          pWVar11 = DAT_140030670;
        }
        FUN_14000bda4(DAT_140032598,DAT_140030630,pWVar11,local_res18[0],0x30);
      }
      else {
        cVar3 = FUN_14000f0d4(local_res18,(ulonglong)DAT_140032100,0,uVar6);
        if (cVar3 == '\0') {
          FUN_14000fdac(local_res18[0]);
        }
        FUN_14001ea3c(iVar12);
      }
      if (local_res18[0] != (wchar_t *)0x0) {
        CoTaskMemFree(local_res18[0]);
      }
      return 1;
    }
    sVar10 = *psVar8;
    if (sVar10 != 0) {
      while ((sVar10 == 0x20 || (sVar10 == 9))) {
        psVar8 = psVar8 + 1;
        sVar10 = *psVar8;
      }
      if (sVar10 == 0x22) {
        while( true ) {
          psVar8 = psVar8 + 1;
          sVar10 = *psVar8;
          if (((sVar10 == 0) || (sVar10 == 0x22)) || (uVar13 = (int)uVar9 + 1, 0xff < uVar13))
          break;
          (&DAT_140031810)[uVar9] = sVar10;
          uVar9 = (ulonglong)uVar13;
        }
        if (0x1ff < uVar9 * 2) {
          FUN_1400240d8();
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        (&DAT_140031810)[uVar9] = 0;
        goto LAB_140011985;
      }
    }
    if (local_res18[0] != (LPCWSTR)0x0) {
      CoTaskMemFree(local_res18[0]);
    }
  }
  return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_140011a78(ushort *param_1)

{
  code **ppcVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 extraout_var;
  undefined8 *puVar6;
  undefined4 extraout_var_00;
  undefined8 *extraout_RAX;
  short *pv;
  short *local_res10 [3];
  undefined8 *puVar5;
  
  uVar3 = FUN_140011114((ushort *)L"RestartByRestartManager:",param_1);
  puVar6 = (undefined8 *)0x0;
  if ((int)uVar3 != 0) {
    return uVar3 & 0xffffffffffffff00;
  }
  puVar4 = (undefined8 *)0xffffffffffffffff;
  do {
    puVar5 = puVar4;
    puVar4 = (undefined8 *)((longlong)puVar5 + 1);
  } while (param_1[(longlong)(puVar4 + 3)] != 0);
  if (puVar4 == (undefined8 *)0x24) {
    FUN_14000e224(local_res10,(short *)0x0,(ulonglong)((int)puVar5 + 2));
    pv = local_res10[0];
    uVar2 = FID_conflict_StringCchCopyW(local_res10[0],0x25,(longlong)(param_1 + 0x18));
    puVar4 = (undefined8 *)CONCAT44(extraout_var,uVar2);
    if (-1 < (int)uVar2) {
      if (local_res10[0] == (short *)0x0) goto LAB_140011b84;
      puVar4 = (undefined8 *)FUN_14002454c(0x20);
      if (puVar4 != (undefined8 *)0x0) {
        puVar6 = FUN_14001f0b8(puVar4,local_res10);
        pv = local_res10[0];
      }
      if (DAT_1400320e8 != (undefined8 *)0x0) {
        ppcVar1 = (code **)*DAT_1400320e8;
        DAT_1400320e8 = puVar6;
        (**ppcVar1)();
        puVar6 = DAT_1400320e8;
      }
      DAT_1400320e8 = puVar6;
      puVar4 = DAT_1400320e8;
      if (DAT_1400320e8 != (undefined8 *)0x0) {
        uVar2 = FUN_14001fb7c(DAT_1400320e8[2]);
        puVar4 = (undefined8 *)CONCAT44(extraout_var_00,uVar2);
        if ((-1 < (int)uVar2) && (DAT_1400320e8 != (undefined8 *)0x0)) {
          puVar4 = (undefined8 *)FUN_14001f548((longlong)DAT_1400320e8);
        }
      }
    }
    if (pv != (short *)0x0) {
      CoTaskMemFree(pv);
      puVar4 = extraout_RAX;
    }
  }
LAB_140011b84:
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



undefined8 FUN_140011ba0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  *(undefined *)(param_4 + 0x17) = *(undefined *)(param_1 + 0x17);
  return 0;
}



uint FUN_140011bb4(void)

{
  _STARTUPINFOW local_78;
  
  memset(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  return ~(local_78.dwFlags >> 0xf) & 1;
}



void FUN_140011c00(void)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = PathFileExistsW(DAT_1400320e0);
  if (BVar1 != 0) {
    FUN_14000fe88(DAT_1400320e0);
    return;
  }
  iVar2 = FUN_140021db8();
  if (iVar2 == 0) {
    FUN_14000c5c0(5);
  }
  return;
}



void FUN_140011c48(int param_1,int param_2,DWORD param_3,HINSTANCE param_4)

{
  CreateWindowExW(0,L"Edit",L"",param_3,0,0,param_1,param_2,DAT_140032598,(HMENU)0xf,param_4,
                  (LPVOID)0x0);
  return;
}



void FUN_140011ca8(HWND param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 local_res8;
  undefined local_resc;
  undefined4 local_res10;
  undefined local_res14;
  undefined4 local_res18;
  undefined local_res1c;
  undefined8 local_res20;
  uint local_38 [2];
  uint local_30 [2];
  uint local_28 [4];
  
  if (DAT_140032588 != (HWND)0x0) {
    FUN_1400209ec();
    DestroyWindow(DAT_140032588);
  }
  DAT_140032588 = param_1;
  SendMessageW(param_1,0xc5,0,0);
  uVar2 = DAT_140031488;
  if ((DAT_140031488 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14000cd48(&DAT_140031488,local_38);
    local_res20 = *puVar1;
    uVar2 = (uint)local_res20;
  }
  local_res8 = 0;
  local_resc = 3;
  FUN_14000dd74((uint *)&DAT_140031490,0x71cda0,uVar2 >> 8 & 1,(ulonglong)(uVar2 >> 9 & 1),
                &local_res8,1,3);
  SendMessageW(DAT_140032588,0x150a,3,(ulonglong)(~-(uint)(DAT_140032368 != 0) & 3));
  SendMessageW(DAT_140032588,0x150a,4,~-(ulonglong)(DAT_140032364 != 0) & 4);
  uVar2 = DAT_140031498;
  if ((DAT_140031498 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14000c75c(&DAT_140031498,local_30);
    local_res20 = *puVar1;
    uVar2 = (uint)local_res20;
  }
  local_res10 = 0;
  local_res14 = 3;
  FUN_14000dd74((uint *)&DAT_1400314a0,0x10f6105,uVar2 >> 8 & 1,(ulonglong)(uVar2 >> 9 & 1),
                &local_res10,1,3);
  SendMessageW(DAT_140032588,0x150a,0x10,0x10);
  uVar2 = DAT_140032680;
  if ((DAT_140032680 & 2) == 0) {
    puVar1 = (undefined8 *)FUN_14001c988(&DAT_140032680,local_28);
    local_res20 = *puVar1;
    uVar2 = (uint)local_res20;
  }
  local_res18 = 0;
  local_res1c = 3;
  FUN_14000dd74((uint *)&DAT_140032688,0x10dbb9e,uVar2 >> 8 & 1,(ulonglong)(uVar2 >> 9 & 1),
                &local_res18,1,3);
  SendMessageW(DAT_140032588,0x150a,8,8);
  FUN_140020950();
  return;
}



void FUN_140011ef0(undefined8 param_1)

{
  if (DAT_140032590 != (HWND)0x0) {
    FUN_1400209ec();
    DestroyWindow(DAT_140032590);
  }
  DAT_140032590 = (HWND)param_1;
  FUN_140020950();
  return;
}



void FUN_140011f40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HMONITOR pHVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined auStackY216 [32];
  int local_98;
  undefined4 local_88;
  undefined local_84;
  undefined4 local_80;
  undefined local_7c;
  undefined4 local_78;
  undefined local_74;
  undefined4 local_70;
  undefined local_6c;
  uint local_60 [2];
  uint local_58 [2];
  uint local_50 [2];
  uint local_48 [2];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStackY216;
  pHVar5 = MonitorFromWindow(DAT_140032598,2);
  GetDpiForMonitor(pHVar5,0);
  uVar7 = DAT_1400314b8;
  if ((DAT_1400314b8 & 2) == 0) {
    puVar6 = (undefined8 *)FUN_14000d07c(&DAT_1400314b8,local_60);
    uVar7 = (uint)*puVar6;
  }
  local_88 = 0;
  local_84 = 3;
  FUN_14000dd74((uint *)&DAT_1400314c0,0x127655e,uVar7 >> 8 & 1,(ulonglong)(uVar7 >> 9 & 1),
                &local_88,1,3);
  iVar1 = MulDiv(0x78,local_98,0x60);
  iVar1 = param_1 - iVar1;
  uVar7 = DAT_140031488;
  if ((DAT_140031488 & 2) == 0) {
    puVar6 = (undefined8 *)FUN_14000cd48(&DAT_140031488,local_58);
    uVar7 = (uint)*puVar6;
  }
  local_80 = 0;
  local_7c = 3;
  FUN_14000dd74((uint *)&DAT_140031490,0x71cda0,uVar7 >> 8 & 1,(ulonglong)(uVar7 >> 9 & 1),&local_80
                ,1,3);
  iVar2 = MulDiv(0x78,local_98,0x60);
  iVar2 = iVar1 - iVar2;
  uVar7 = DAT_140031498;
  if ((DAT_140031498 & 2) == 0) {
    puVar6 = (undefined8 *)FUN_14000c75c(&DAT_140031498,local_50);
    uVar7 = (uint)*puVar6;
  }
  local_78 = 0;
  local_74 = 3;
  FUN_14000dd74((uint *)&DAT_1400314a0,0x10f6105,uVar7 >> 8 & 1,(ulonglong)(uVar7 >> 9 & 1),
                &local_78,1,3);
  iVar3 = MulDiv(0x32,local_98,0x60);
  iVar3 = iVar2 - iVar3;
  uVar7 = DAT_1400314a8;
  if ((DAT_1400314a8 & 2) == 0) {
    puVar6 = (undefined8 *)FUN_14000d1d8(&DAT_1400314a8,local_48);
    uVar7 = (uint)*puVar6;
  }
  local_70 = 0;
  local_6c = 3;
  FUN_14000dd74((uint *)&DAT_1400314b0,0x107b944,uVar7 >> 8 & 1,(ulonglong)(uVar7 >> 9 & 1),
                &local_70,1,3);
  iVar4 = MulDiv(0x8c,local_98,0x60);
  local_40 = 0;
  if (0 < iVar3 - iVar4) {
    local_40 = iVar3 - iVar4;
  }
  local_3c = 0;
  if (0 < iVar3) {
    local_3c = iVar3;
  }
  local_38 = 0;
  if (0 < iVar2) {
    local_38 = iVar2;
  }
  local_34 = 0;
  if (0 < iVar1) {
    local_34 = iVar1;
  }
  local_30 = 0xffffffff;
  SendMessageW(DAT_140032590,0x404,5,(LPARAM)&local_40);
  SendMessageW(DAT_140032590,5,0,0);
  FUN_140023f70(local_28 ^ (ulonglong)auStackY216);
  return;
}


/*
Unable to decompile 'FUN_14001224c'
Cause: Exception while decompiling 14001224c: process: timeout

*/


ATOM FUN_14001c860(undefined8 param_1,HINSTANCE param_2)

{
  ATOM AVar1;
  HICON pHVar2;
  HINSTANCE *ppHVar3;
  uint uVar4;
  HINSTANCE local_68 [2];
  undefined local_58 [24];
  HINSTANCE local_40;
  HICON local_38;
  HCURSOR local_30;
  HBRUSH local_28;
  LPCWSTR local_20;
  wchar_t *local_18;
  HICON local_10;
  HICON pHVar5;
  
  pHVar2 = (HICON)0x0;
  local_58._16_8_ = 0;
  local_58._0_8_ = 0x50;
  local_68[0] = param_2;
  local_68[1] = (HINSTANCE)param_1;
  local_30 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f01);
  ppHVar3 = local_68;
  pHVar5 = pHVar2;
  do {
    local_38 = LoadIconW(*ppHVar3,(LPCWSTR)0x2);
    if (local_38 != (HICON)0x0) break;
    uVar4 = (int)pHVar5 + 1;
    pHVar5 = (HICON)(ulonglong)uVar4;
    ppHVar3 = ppHVar3 + 1;
    local_38 = pHVar2;
  } while (uVar4 < 2);
  ppHVar3 = local_68;
  pHVar5 = pHVar2;
  do {
    local_10 = (HICON)LoadImageW(*ppHVar3,(LPCWSTR)0x2,1,0x10,0x10,0);
    if (local_10 != (HICON)0x0) break;
    uVar4 = (int)pHVar5 + 1;
    pHVar5 = (HICON)(ulonglong)uVar4;
    ppHVar3 = ppHVar3 + 1;
    local_10 = pHVar2;
  } while (uVar4 < 2);
  local_18 = L"Notepad";
  local_20 = (LPCWSTR)0x1;
  local_58._8_8_ = FUN_14000a290;
  local_28 = (HBRUSH)&DAT_00000006;
  local_40 = param_2;
  AVar1 = RegisterClassExW((WNDCLASSEXW *)local_58);
  return AVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint * FUN_14001c988(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int local_res8;
  
  uVar2 = *param_1;
  *param_2 = uVar2;
  if (((byte)uVar2 & 3) != 3) {
    iVar1 = FUN_140006978();
    pcVar3 = (code *)DAT_140031448;
    if ((DAT_140031448 == 0) && (pcVar3 = (code *)DAT_140031450, DAT_140031450 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar3)();
    }
    uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) * 2;
    if ((uVar2 & 0xffffff3f) == 0) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar5 = 0;
      if ((uVar2 & 0xffffff3f) == 2) {
        uVar5 = 0x10;
      }
      uVar4 = uVar5 | uVar4;
    }
    uVar4 = uVar4 ^ uVar4 >> 1 & 8;
    uVar2 = *param_2;
    while( true ) {
      *param_2 = uVar2;
      uVar5 = uVar2;
      if ((local_res8 != 0) && ((uVar2 & 1) == 0)) {
        uVar5 = (uVar2 ^ uVar4) & 0x278 ^ uVar2 | 1;
        *param_2 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        uVar5 = uVar5 ^ (uVar5 ^ uVar4) & 0x100 | 2;
        *param_2 = uVar5;
      }
      LOCK();
      if (uVar2 == *param_1) break;
      uVar2 = *param_1;
    }
    *param_1 = uVar5;
    if ((uVar2 & 2) == 0) {
      FUN_140006a48(param_1,1,iVar1);
    }
    if ((*(byte *)param_2 & 1) == 0) {
      *param_2 = *param_2 ^ (*param_2 ^ uVar4) & 0x278;
    }
  }
  return param_2;
}



undefined8 * FUN_14001cae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14002454c(0x20);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = FUN_14001f0b8(puVar1,param_2);
  }
  *param_1 = puVar2;
  return param_1;
}



LPCWSTR FUN_14001cb30(LPCWSTR param_1,int param_2,undefined8 param_3,undefined8 param_4,
                     LPINT param_5)

{
  int iVar1;
  LPCWSTR pWVar2;
  
  pWVar2 = (LPCWSTR)0x0;
  iVar1 = FindNLSString(0x400,DAT_1400325a2 == '\0' | 0x800000,param_1,param_2,
                        (LPCWSTR)&DAT_140032480,-1,param_5);
  if ((iVar1 != -1) && (0 < *param_5)) {
    pWVar2 = param_1 + iVar1;
  }
  return pWVar2;
}



LPCWSTR FUN_14001cbb0(LPCWSTR param_1,int param_2,LPCWSTR param_3,undefined8 param_4,LPINT param_5)

{
  int iVar1;
  LPCWSTR pWVar2;
  
  pWVar2 = (LPCWSTR)0x0;
  iVar1 = FindNLSString(0x400,DAT_1400325a2 == '\0' | 0x400000,param_1,param_2,param_3,-1,param_5);
  if ((iVar1 != -1) && (0 < *param_5)) {
    pWVar2 = param_1 + iVar1;
  }
  return pWVar2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14001cc28(ulonglong param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  HCURSOR in_RAX;
  LRESULT LVar5;
  HCURSOR pHVar6;
  LPCWSTR pWVar7;
  undefined4 extraout_var;
  HWND pHVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong wParam;
  undefined8 uVar12;
  uint uVar13;
  ulonglong local_res8;
  uint local_res18 [2];
  uint local_res20 [2];
  
  if (_DAT_140032480 == 0) goto LAB_14001ce5b;
  local_res8 = param_1;
  SendMessageW(DAT_140032588,0xb0,(WPARAM)local_res20,(LPARAM)local_res18);
  LVar5 = SendMessageW(DAT_140032588,0xe,0,0);
  if ((local_res20[0] == 0) && (local_res18[0] == (uint)LVar5)) {
    local_res18[0] = 0;
  }
  uVar12 = 0;
  uVar10 = 0;
  pHVar6 = (HCURSOR)SendMessageW(DAT_140032588,0xbd,0,0);
  in_RAX = pHVar6;
  if ((pHVar6 == (HCURSOR)0x0) ||
     (in_RAX = (HCURSOR)LocalLock(pHVar6), uVar1 = local_res18[0], in_RAX == (HCURSOR)0x0))
  goto LAB_14001ce5b;
  uVar11 = (ulonglong)local_res18[0];
  bVar2 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar13 = -(uint)(local_res20[0] < local_res18[0]) & local_res18[0] - local_res20[0];
  if (param_2 == '\0') {
    iVar3 = GetWindowTextLengthW(DAT_140032588);
    pWVar7 = FUN_14001cbb0((LPCWSTR)((longlong)&in_RAX->unused + uVar11 * 2),iVar3 - uVar1,
                           (LPCWSTR)&DAT_140032480,uVar12,(LPINT)&local_res8);
    if ((DAT_1400325a1 != '\0') && (pWVar7 == (LPCWSTR)0x0)) {
      pWVar7 = FUN_14001cbb0((LPCWSTR)in_RAX,uVar1 + uVar13,(LPCWSTR)&DAT_140032480,uVar12,
                             (LPINT)&local_res8);
      goto LAB_14001cdd5;
    }
  }
  else {
    uVar1 = local_res18[0] - 1;
    if (local_res20[0] == local_res18[0]) {
      uVar1 = local_res18[0];
    }
    pWVar7 = FUN_14001cb30((LPCWSTR)in_RAX,uVar1,uVar10,uVar12,(LPINT)&local_res8);
    bVar2 = false;
    if ((DAT_1400325a1 != '\0') && (bVar2 = false, pWVar7 == (LPCWSTR)0x0)) {
      iVar3 = GetWindowTextLengthW(DAT_140032588);
      pWVar7 = FUN_14001cb30((LPCWSTR)((longlong)in_RAX +
                                      ((longlong)(int)uVar1 - (ulonglong)uVar13) * 2),
                             iVar3 + (uVar13 - uVar1),uVar10,uVar12,(LPINT)&local_res8);
LAB_14001cdd5:
      bVar2 = true;
    }
  }
  BVar4 = LocalUnlock(pHVar6);
  if (pWVar7 != (LPCWSTR)0x0) {
    uVar10 = 0xb1;
    uVar11 = (longlong)pWVar7 - (longlong)in_RAX >> 1;
    wParam = uVar11 & 0xffffffff;
    uVar11 = (ulonglong)(uint)((int)local_res8 + (int)uVar11);
    local_res20[0] = (uint)wParam;
    SendMessageW(DAT_140032588,0xb1,wParam,uVar11);
    if ((DAT_1400315a8 & 0x20) == 0) {
      uVar11 = 0;
      wParam = 0;
      uVar10 = 0xb7;
      SendMessageW(DAT_140032588,0xb7,0,0);
    }
    if (bVar2) {
      pwVar9 = DAT_140030508;
      if (param_2 != '\0') {
        pwVar9 = DAT_140030510;
      }
    }
    else {
      pwVar9 = L"";
    }
    uVar10 = FUN_14000b7b0(pwVar9,uVar10,wParam,uVar11);
    return CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  }
  in_RAX = (HCURSOR)CONCAT44(extraout_var,BVar4);
  if ((DAT_1400315a8 & 0x20) == 0) {
    pHVar6 = SetCursor(DAT_140031688);
    pHVar8 = DAT_140032598;
    if (DAT_140032580 != (HWND)0x0) {
      pHVar8 = DAT_140032580;
    }
    FUN_14000bda4(pHVar8,DAT_140030630,DAT_140030648,(wchar_t *)&DAT_140032480,0x40);
    in_RAX = SetCursor(pHVar6);
  }
LAB_14001ce5b:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14001cf00(ulonglong param_1)

{
  uint uVar1;
  BOOL BVar2;
  HLOCAL hMem;
  HLOCAL pvVar3;
  undefined4 extraout_var;
  ulonglong local_res8;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  local_res8 = param_1 & 0xffffffff00000000;
  SendMessageW(DAT_140032588,0xb0,(WPARAM)local_res10,(LPARAM)&local_res8);
  hMem = (HLOCAL)SendMessageW(DAT_140032588,0xbd,0,0);
  pvVar3 = hMem;
  if (((hMem != (HLOCAL)0x0) && (local_res10[0] < (uint)local_res8)) &&
     (pvVar3 = LocalLock(hMem), pvVar3 != (LPVOID)0x0)) {
    uVar1 = 0x7f;
    if ((uint)local_res8 - local_res10[0] < 0x7f) {
      uVar1 = (uint)local_res8 - local_res10[0];
    }
    memcpy(&DAT_140032480,(void *)((longlong)pvVar3 + (ulonglong)local_res10[0] * 2),
           (ulonglong)uVar1 * 2);
    *(undefined2 *)(&DAT_140032480 + (ulonglong)uVar1 * 2) = 0;
    BVar2 = LocalUnlock(hMem);
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),1);
  }
  return (ulonglong)pvVar3 & 0xffffffffffffff00;
}



void FUN_14001cfe0(uint param_1)

{
  LONG dwNewLong;
  HCURSOR hCursor;
  LRESULT LVar1;
  LRESULT LVar2;
  HLOCAL hMem;
  LPVOID lParam;
  HWND hWnd;
  WPARAM wParam;
  undefined auStack120 [32];
  uint local_58;
  uint local_54;
  tagRECT local_50;
  tagRECT local_40;
  ulonglong local_30;
  
  local_30 = DAT_140030470 ^ (ulonglong)auStack120;
  hCursor = SetCursor(DAT_140031680);
  if ((param_1 >> 0x14 & 1) != 0) {
    FUN_140007e58(1);
  }
  SendMessageW(DAT_140032588,0x4e0,(WPARAM)&local_54,(LPARAM)&local_58);
  LVar1 = SendMessageW(DAT_140032588,0xb8,0,0);
  LVar2 = SendMessageW(DAT_140032588,0xe,0,0);
  wParam = (WPARAM)((int)LVar2 + 1);
  hMem = LocalAlloc(2,wParam * 2);
  if (hMem == (HLOCAL)0x0) {
    SetCursor(hCursor);
  }
  else {
    GetClientRect(DAT_140032598,&local_50);
    lParam = LocalLock(hMem);
    SendMessageW(DAT_140032588,0xd,wParam,(LPARAM)lParam);
    hWnd = (HWND)FUN_140011c48(local_50.right,local_50.bottom,param_1,DAT_140031670);
    if (hWnd == (HWND)0x0) {
      SetCursor(hCursor);
    }
    else {
      dwNewLong = GetWindowLongW(DAT_140032588,-0x14);
      SetWindowLongW(hWnd,-0x14,dwNewLong);
      SendMessageW(hWnd,0x30,DAT_140031608,1);
      LVar2 = SendMessageW(hWnd,0xc,0,(LPARAM)lParam);
      if (LVar2 != 0) {
        LocalUnlock(hMem);
        LocalFree(hMem);
        FUN_140011ca8(hWnd);
        DAT_140031690 = SendMessageW(DAT_140032588,0xbd,0,0);
        ShowWindow(DAT_140032598,5);
        SendMessageW(DAT_140032588,0xb9,(ulonglong)(LVar1 != 0),0);
        SendMessageW(DAT_140032588,0x4e1,(ulonglong)local_54,(ulonglong)local_58);
        SetFocus(DAT_140032588);
        SetCursor(hCursor);
        if (DAT_140032378 != 0) {
          GetClientRect(DAT_140032598,&local_40);
          FUN_140007db8(local_40.right - local_40.left,local_40.bottom - local_40.top);
          FUN_14000b130();
          ShowWindow(DAT_140032590,5);
        }
        goto LAB_14001d307;
      }
      SetCursor(hCursor);
      DestroyWindow(hWnd);
    }
    LocalUnlock(hMem);
    LocalFree(hMem);
  }
LAB_14001d307:
  FUN_140023f70(local_30 ^ (ulonglong)auStack120);
  return;
}



bool FUN_14001d340(void)

{
  BOOL BVar1;
  tagMSG local_38;
  
  while ((DAT_140032060 == 0 && (BVar1 = PeekMessageW(&local_38,(HWND)0x0,0,0,1), BVar1 != 0))) {
    if ((DAT_140032068 == (HWND)0x0) ||
       (BVar1 = IsDialogMessageW(DAT_140032068,&local_38), BVar1 == 0)) {
      TranslateMessage(&local_38);
      DispatchMessageW(&local_38);
    }
  }
  return DAT_140032060 == 0;
}



undefined8 FUN_14001d3e0(HWND param_1,int param_2)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  
  if (param_2 == 0x110) {
    DAT_140032690 = GetSystemMenu(param_1,0);
    pWVar2 = DAT_1400320e0;
    pWVar3 = DAT_140030658;
    if (DAT_140030678 == 0) {
      WVar1 = *DAT_1400320e0;
      pWVar3 = DAT_1400320e0;
      pWVar4 = DAT_1400320e0;
      while (WVar1 != L'\0') {
        if ((WVar1 == L':') || (WVar1 == L'\\')) {
          pWVar4 = pWVar3;
        }
        pWVar3 = CharNextW(pWVar3);
        WVar1 = *pWVar3;
      }
      pWVar3 = pWVar4 + 1;
      if (pWVar4 == pWVar2) {
        pWVar3 = pWVar4;
      }
    }
    SetDlgItemTextW(param_1,0x14,pWVar3);
    SetFocus(param_1);
  }
  else if (param_2 == 0x111) {
    DAT_140032060 = 1;
    EnableWindow(DAT_140032598,1);
    DestroyWindow(DAT_140032068);
    DAT_140032068 = (HWND)0x0;
  }
  else {
    if (param_2 != 0x116) {
      return 0;
    }
    EnableMenuItem(DAT_140032690,0xf060,1);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14001d528(HDC param_1,int param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  int y;
  tagSIZE local_res18;
  
  if (*(ushort *)(&DAT_1400316a0 + (longlong)param_2 * 0x50) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_14001e2cc((ushort *)(&DAT_1400316a0 + (longlong)param_2 * 0x50));
    y = DAT_140031a1c;
    if (param_2 != 0) {
      y = (DAT_140031a34 - DAT_140031a3c) - _DAT_140031a18;
    }
    if (_DAT_140031a50 != 0) {
      sVar3 = wcsnlen((wchar_t *)&DAT_140031a50,0x100);
      TextOutW(param_1,DAT_140031a14,y,(LPCWSTR)&DAT_140031a50,(int)sVar3);
    }
    if (_DAT_140031c50 != 0) {
      sVar3 = wcsnlen((wchar_t *)&DAT_140031c50,0x100);
      GetTextExtentPoint32W(param_1,(LPCWSTR)&DAT_140031c50,(int)sVar3,&local_res18);
      iVar1 = (DAT_140031a38 - _DAT_140031a10) + DAT_140031a14;
      iVar2 = local_res18.cx / 2;
      sVar3 = wcsnlen((wchar_t *)&DAT_140031c50,0x100);
      TextOutW(param_1,iVar1 / 2 - iVar2,y,(LPCWSTR)&DAT_140031c50,(int)sVar3);
    }
    if (_DAT_140031e50 != 0) {
      sVar3 = wcsnlen((wchar_t *)&DAT_140031e50,0x100);
      GetTextExtentPoint32W(param_1,(LPCWSTR)&DAT_140031e50,(int)sVar3,&local_res18);
      iVar1 = DAT_140031a38 - _DAT_140031a10;
      sVar3 = wcsnlen((wchar_t *)&DAT_140031e50,0x100);
      TextOutW(param_1,iVar1 - local_res18.cx,y,(LPCWSTR)&DAT_140031e50,(int)sVar3);
    }
    uVar4 = 1;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HDC FUN_14001d708(void)

{
  HGLOBAL pvVar1;
  HRESULT HVar2;
  HDC pHVar3;
  HDC pHVar4;
  tagPDEXW local_98;
  
  if (DAT_140031528 == (HGLOBAL)0x0) {
    _DAT_140031530 = _DAT_140031530 | 0x480;
    FUN_14000c650((LPPAGESETUPDLGW)&DAT_140031510);
    _DAT_140031530 = _DAT_140031530 & 0xfffffb7f;
  }
  pvVar1 = DAT_140031528;
  memset(&local_98,0,0x88);
  local_98.nStartPage = 0xffffffff;
  local_98.hwndOwner = DAT_140032598;
  local_98.lStructSize = 0x88;
  local_98.Flags = 0x84010c;
  if (DAT_140031520 != (HGLOBAL)0x0) {
    local_98.hDevMode = DAT_140031520;
  }
  if (pvVar1 != (HGLOBAL)0x0) {
    local_98.hDevNames = pvVar1;
  }
  pHVar3 = (HDC)0x0;
  HVar2 = PrintDlgExW(&local_98);
  pHVar4 = pHVar3;
  if ((HVar2 == 0) &&
     ((pHVar4 = local_98.hDC, local_98.dwResultAction == 1 ||
      (pHVar4 = pHVar3, local_98.dwResultAction == 2)))) {
    if (DAT_140031520 == (HGLOBAL)0x0) {
      _DAT_140031530 = _DAT_140031530 | 0x480;
      FUN_14000c650((LPPAGESETUPDLGW)&DAT_140031510);
      _DAT_140031530 = _DAT_140031530 & 0xfffffb7f;
    }
    DAT_140031520 = local_98.hDevMode;
    DAT_140031528 = local_98.hDevNames;
  }
  return pHVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001d824(HDC param_1)

{
  bool bVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  HFONT h;
  LPWSTR h_00;
  HGDIOBJ ho;
  LPWSTR hMem;
  LPWSTR _Src;
  size_t sVar5;
  int iVar6;
  LPWSTR pWVar7;
  DWORD DVar8;
  LPWSTR pWVar9;
  LPWSTR pWVar10;
  undefined auStackY584 [32];
  uint local_208;
  undefined4 uStack516;
  undefined local_200 [32];
  DWORD local_1e0;
  undefined local_1d8 [16];
  uint local_1c8;
  tagRECT local_1c0;
  undefined local_1a8 [24];
  undefined4 uStack400;
  undefined4 uStack396;
  undefined4 local_188;
  undefined4 uStack388;
  undefined4 uStack384;
  undefined4 uStack380;
  undefined4 local_178;
  undefined4 uStack372;
  undefined4 uStack368;
  undefined4 uStack364;
  undefined4 local_168;
  undefined4 uStack356;
  undefined4 uStack352;
  undefined4 uStack348;
  undefined8 local_158;
  undefined4 local_150;
  tagTEXTMETRICW local_148;
  wchar_t local_108 [104];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStackY584;
  pWVar9 = (LPWSTR)0x0;
  pWVar7 = (LPWSTR)0x0;
  bVar1 = false;
  DAT_140032060 = 0;
  pWVar10 = (LPWSTR)0x0;
  DAT_140032068 = (HWND)0x0;
  SetCursor(DAT_140031680);
  DAT_140031a38 = GetDeviceCaps(param_1,8);
  DAT_140031a34 = GetDeviceCaps(param_1,10);
  DAT_140031a30 = GetDeviceCaps(param_1,0x5a);
  DAT_140031a2c = GetDeviceCaps(param_1,0x6e);
  DAT_140031a28 = GetDeviceCaps(param_1,0x6f);
  _DAT_140031a24 = GetDeviceCaps(param_1,0x70);
  DAT_140031a20 = GetDeviceCaps(param_1,0x71);
  GetLocalTime((LPSYSTEMTIME)&DAT_140031a40);
  GetDateFormatW(0x400,2,(SYSTEMTIME *)&DAT_140031a40,(LPCWSTR)0x0,(LPWSTR)&DAT_140030890,0x100);
  GetTimeFormatW(0x400,0,(SYSTEMTIME *)&DAT_140031a40,(LPCWSTR)0x0,(LPWSTR)&DAT_140030690,0x100);
  local_150 = DAT_140031668;
  local_1a8._8_4_ = DAT_140031618;
  local_1a8._12_4_ = DAT_14003161c;
  local_1a8._16_4_ = DAT_140031620;
  local_1a8._20_4_ = _DAT_140031624;
  uStack400 = _DAT_140031628;
  uStack396 = _DAT_14003162c;
  local_188 = _DAT_140031630;
  uStack388 = uRam0000000140031634;
  uStack384 = uRam0000000140031638;
  uStack380 = uRam000000014003163c;
  local_178 = _DAT_140031640;
  uStack372 = uRam0000000140031644;
  uStack368 = uRam0000000140031648;
  uStack364 = uRam000000014003164c;
  local_168 = _DAT_140031650;
  uStack356 = uRam0000000140031654;
  uStack352 = uRam0000000140031658;
  uStack348 = uRam000000014003165c;
  iVar6 = (int)((ulonglong)((longlong)(DAT_140031a30 * DAT_14003067c) * 0x49f49f49) >> 0x20) -
          DAT_140031a30 * DAT_14003067c;
  local_158 = DAT_140031660;
  local_1a8._0_4_ = (iVar6 >> 9) - (iVar6 >> 0x1f);
  local_1a8._4_4_ = 0;
  SetMapMode(param_1,8);
  SetViewportExtEx(param_1,DAT_140031a2c,DAT_140031a28,(LPSIZE)0x0);
  SetWindowExtEx(param_1,DAT_140031534,DAT_140031538,(LPSIZE)0x0);
  DAT_140032050 = DAT_14003154c;
  DAT_140032054 = DAT_140031550;
  _DAT_140032058 = DAT_140031554;
  _DAT_14003205c = DAT_140031558;
  LPtoDP(param_1,(LPPOINT)&DAT_140032050,2);
  SetMapMode(param_1,1);
  h = CreateFontIndirectW((LOGFONTW *)local_1a8);
  hMem = pWVar9;
  h_00 = pWVar9;
  _Src = pWVar9;
  if ((h != (HFONT)0x0) &&
     (h_00 = (LPWSTR)SelectObject(param_1,h), hMem = pWVar7, _Src = pWVar10, h_00 != (LPWSTR)0x0)) {
    SetBkMode(param_1,1);
    BVar2 = GetTextMetricsW(param_1,&local_148);
    if (BVar2 != 0) {
      if ((local_148.tmPitchAndFamily & 6) == 0) {
        ho = SelectObject(param_1,h_00);
        DeleteObject(ho);
        memset(&uStack396,0,0x40);
        h = CreateFontIndirectW((LOGFONTW *)local_1a8);
        if (((h == (HFONT)0x0) || (h_00 = (LPWSTR)SelectObject(param_1,h), h_00 == (LPWSTR)0x0)) ||
           (BVar2 = GetTextMetricsW(param_1,&local_148), BVar2 == 0)) goto LAB_14001e0b0;
      }
      DAT_140031a3c = local_148.tmExternalLeading + local_148.tmHeight;
      DAT_140032064 = local_148.tmAveCharWidth << 3;
      DAT_140031a14 = 0;
      if (0 < DAT_140032050 - _DAT_140031a24) {
        DAT_140031a14 = DAT_140032050 - _DAT_140031a24;
      }
      iVar6 = (DAT_140031a38 - DAT_140031a2c) + _DAT_140032058 + _DAT_140031a24;
      _DAT_140031a10 = 0;
      if (0 < iVar6) {
        _DAT_140031a10 = iVar6;
      }
      DAT_140031a1c = 0;
      if (0 < DAT_140032054 - DAT_140031a20) {
        DAT_140031a1c = DAT_140032054 - DAT_140031a20;
      }
      iVar6 = DAT_140031a20 + (DAT_140031a34 - DAT_140031a28) + _DAT_14003205c;
      _DAT_140031a18 = 0;
      if (0 < iVar6) {
        _DAT_140031a18 = iVar6;
      }
      iVar6 = ((DAT_140031a34 - DAT_140031a1c) - _DAT_140031a18) / DAT_140031a3c;
      if (_DAT_1400316a0 != 0) {
        iVar6 = iVar6 + -1;
      }
      if (_DAT_1400316f0 != 0) {
        iVar6 = iVar6 + -1;
      }
      hMem = pWVar9;
      _Src = pWVar9;
      if (iVar6 < 1) {
LAB_14001e076:
        MessageBoxW(DAT_140032598,DAT_140030588,DAT_140030630,0x30);
        SetLastError(0);
      }
      else {
        DVar3 = SetAbortProc(param_1,FUN_14001d340);
        DVar8 = 0;
        if ((int)DVar3 < 0) goto LAB_14001ddf5;
        hMem = (LPWSTR)SendMessageW(DAT_140032588,0xbd,0,0);
        _Src = pWVar10;
        if ((hMem != (LPWSTR)0x0) && (_Src = (LPWSTR)LocalLock(hMem), _Src != (wchar_t *)0x0)) {
          iVar6 = GetWindowTextLengthW(DAT_140032598);
          FUN_14000e224((undefined8 *)&local_208,(short *)0x0,(longlong)(iVar6 + 1));
          pWVar7 = (LPWSTR)CONCAT44(uStack516,local_208);
          iVar6 = GetWindowTextW(DAT_140032598,pWVar7,iVar6 + 1);
          if (iVar6 == 0) {
            *pWVar7 = L'\0';
          }
          EnableWindow(DAT_140032598,0);
          DAT_140032068 =
               CreateDialogParamW(DAT_140031670,(LPCWSTR)0xb,DAT_140032598,FUN_14001d3e0,0);
          if (DAT_140032068 != (HWND)0x0) {
            local_200._0_4_ = 0x28;
            local_200._16_16_ = ZEXT816(0);
            local_1e0 = 0;
            SetLastError(0);
            iVar6 = StartDocW(param_1,(DOCINFOW *)local_200);
            if (iVar6 < 1) {
LAB_14001ddce:
              DVar3 = GetLastError();
              DVar8 = (DWORD)pWVar9;
              if (pWVar7 != (LPWSTR)0x0) {
                CoTaskMemFree(pWVar7);
              }
            }
            else {
              bVar1 = true;
              DAT_140031698 = 1;
              local_1c0.left = DAT_140031a14;
              local_1c0.right = DAT_140031a38 - _DAT_140031a10;
              local_1c0.bottom = DAT_140031a34 - _DAT_140031a18;
              local_1c0.top = DAT_140031a1c;
              if (_DAT_1400316a0 != 0) {
                local_1c0.top = DAT_140031a1c + DAT_140031a3c;
              }
              if (_DAT_1400316f0 != 0) {
                local_1c0.bottom = local_1c0.bottom - DAT_140031a3c;
              }
              sVar5 = wcsnlen(_Src,0x7fffffff);
              local_208 = GetWindowLongW(DAT_140032588,-0x14);
              local_208 = local_208 & 0x2000;
              while (DAT_140032060 == 0) {
                pWVar9 = (LPWSTR)0x0;
                iVar6 = (int)sVar5;
                if (iVar6 < 1) break;
                FUN_140001860(local_108,0x65,DAT_140030538,(ulonglong)DAT_140031698);
                SetDlgItemTextW(DAT_140032068,0x15,local_108);
                FUN_14001d528(param_1,0);
                local_1d8._4_4_ = DAT_140032064;
                local_1d8._8_8_ = 0;
                local_1c8 = 0;
                local_1d8._0_4_ = 0x14;
                iVar4 = StartPage(param_1);
                if (iVar4 < 1) goto LAB_14001ddce;
                pWVar9 = (LPWSTR)0x1;
                DrawTextExW(param_1,_Src,iVar6,&local_1c0,
                            (-(uint)(local_208 != 0) & 0x20002) + 0x2850,(LPDRAWTEXTPARAMS)local_1d8
                           );
                FUN_14001d528(param_1,1);
                iVar4 = EndPage(param_1);
                if (iVar4 < 1) goto LAB_14001ddce;
                DAT_140031698 = DAT_140031698 + 1;
                if (local_1c8 == 0) {
                  if (pWVar7 != (LPWSTR)0x0) {
                    CoTaskMemFree(pWVar7);
                  }
                  goto LAB_14001e076;
                }
                sVar5 = (size_t)(iVar6 - local_1c8);
                _Src = _Src + local_1c8;
              }
              DVar3 = 0;
              DVar8 = DVar3;
              if (pWVar7 != (LPWSTR)0x0) {
                CoTaskMemFree(pWVar7);
                DVar8 = 0;
              }
            }
            goto LAB_14001ddf5;
          }
          if (pWVar7 != (LPWSTR)0x0) {
            CoTaskMemFree(pWVar7);
          }
        }
      }
    }
  }
LAB_14001e0b0:
  DVar3 = GetLastError();
  DVar8 = 0;
LAB_14001ddf5:
  if (h_00 != (LPWSTR)0x0) {
    SelectObject(param_1,h_00);
    DeleteObject(h);
  }
  if (_Src != (LPWSTR)0x0) {
    LocalUnlock(hMem);
  }
  if (((DVar8 != 0) && (iVar6 = EndPage(param_1), iVar6 < 1)) && (DVar3 == 0)) {
    DVar3 = GetLastError();
  }
  if (bVar1) {
    if (DAT_140032060 == 0) {
      iVar6 = EndDoc(param_1);
      if ((iVar6 < 1) && (DVar3 == 0)) {
        GetLastError();
      }
    }
    else {
      AbortDoc(param_1);
    }
  }
  DeleteDC(param_1);
  EnableWindow(DAT_140032598,1);
  DestroyWindow(DAT_140032068);
  DAT_140032068 = (HWND)0x0;
  SetCursor(DAT_140031688);
  FUN_140023f70(local_38 ^ (ulonglong)auStackY584);
  return;
}



undefined8 FUN_14001e190(HWND param_1,int param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  LPCWSTR lpString;
  int iVar2;
  LPWSTR lpString_00;
  
  if (param_2 == 2) {
    iVar2 = 0x1e;
    lpString_00 = (LPWSTR)&DAT_140031740;
    do {
      GetDlgItemTextW(param_1,iVar2,lpString_00,0x28);
      iVar2 = iVar2 + 1;
      lpString_00 = lpString_00 + 0x28;
    } while (iVar2 < 0x20);
LAB_14001e2ae:
    uVar1 = 0;
  }
  else {
    if (param_2 == 0x4e) {
      if ((param_3 != 0x22) || ((*(int *)(param_4 + 0x10) + 4U & 0xfffffffd) != 0))
      goto LAB_14001e2ae;
      ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,L"https://go.microsoft.com/fwlink/p/?linkid=838060",
                    (LPCWSTR)0x0,(LPCWSTR)0x0,1);
    }
    else {
      if (param_2 != 0x110) goto LAB_14001e2ae;
      lpString = (LPCWSTR)&DAT_1400316a0;
      iVar2 = 0x1e;
      do {
        SendDlgItemMessageW(param_1,iVar2,0xc5,0x27,0);
        SetDlgItemTextW(param_1,iVar2,lpString);
        iVar2 = iVar2 + 1;
        lpString = lpString + 0x28;
      } while (iVar2 < 0x20);
      SendDlgItemMessageW(param_1,0x1e,0xb1,0,0x270000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_14001e2cc(ushort *param_1)

{
  ushort uVar1;
  short sVar2;
  LPVOID pv;
  int extraout_EAX;
  int extraout_EAX_00;
  int iVar3;
  short *psVar5;
  longlong lVar6;
  short *psVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  LPVOID pvVar19;
  ulonglong uVar20;
  undefined auStack264 [32];
  uint local_e8;
  LPVOID local_e0;
  undefined8 local_d8;
  undefined local_d0 [8];
  undefined **local_c8;
  undefined8 *local_c0;
  undefined ***local_60;
  undefined8 local_58;
  undefined4 local_50;
  wchar_t local_48 [12];
  ulonglong local_30;
  size_t sVar4;
  
  local_30 = DAT_140030470 ^ (ulonglong)auStack264;
  uVar1 = *param_1;
  uVar17 = 1;
  local_e8 = 1;
  local_58 = 0;
  local_50 = 0;
  if (uVar1 != 0) {
    uVar20 = 1;
    puVar13 = DAT_1400305d0;
    do {
      uVar10 = 0;
      uVar15 = (uint)uVar17;
      do {
        if (uVar1 == 0x26) break;
        iVar16 = *(int *)((longlong)&local_58 + uVar20 * 4);
        param_1 = param_1 + 1;
        *(int *)((longlong)&local_58 + uVar20 * 4) = iVar16 + 1;
        *(ushort *)(&DAT_140031a50 + (uVar20 * 0x100 + (longlong)iVar16) * 2) = uVar1;
        uVar1 = *param_1;
      } while (uVar1 != 0);
      iVar16 = *(int *)((longlong)&local_58 + uVar20 * 4);
      uVar11 = (ulonglong)iVar16;
      if ((0xff < uVar11) || (iVar16 < 0)) goto LAB_14001e78a;
      uVar1 = *param_1;
      if (uVar1 == 0x26) {
        puVar12 = param_1 + 1;
        uVar1 = *puVar12;
        iVar18 = 0;
        if ((uVar1 == *puVar13) || (uVar1 == puVar13[1])) {
          local_e0 = (LPVOID)0x0;
          pvVar19 = DAT_140030658;
          if (DAT_140030678 == 0) {
            local_d8 = DAT_1400320e0;
            local_c8 = &PTR_FUN_140026108;
            local_c0 = &local_d8;
            local_60 = &local_c8;
            FUN_140010138(&local_e0,(longlong)local_d0);
            puVar13 = DAT_1400305d0;
            pvVar19 = local_e0;
            uVar15 = local_e8;
          }
          pv = local_e0;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(short *)((longlong)pvVar19 + lVar8 * 2) != 0);
          if ((int)lVar8 + iVar16 < 0x100) {
            FID_conflict_StringCchCopyW
                      ((short *)(&DAT_140031a50 + ((longlong)(int)uVar15 * 0x100 + uVar11) * 2),
                       0x100 - uVar11,(longlong)pvVar19);
            lVar8 = -1;
            do {
              lVar8 = lVar8 + 1;
            } while (*(short *)((longlong)pvVar19 + lVar8 * 2) != 0);
            *(int *)((longlong)&local_58 + uVar20 * 4) = (int)lVar8 + iVar16;
            puVar13 = DAT_1400305d0;
          }
          if (pv != (LPVOID)0x0) {
            CoTaskMemFree(pv);
            puVar13 = DAT_1400305d0;
          }
LAB_14001e74c:
          uVar17 = (ulonglong)local_e8;
        }
        else {
          if ((uVar1 == puVar13[2]) || (uVar1 == puVar13[3])) {
            puVar12 = param_1 + 2;
            if (*puVar12 == 0x2b) {
              while( true ) {
                iVar18 = (int)uVar10;
                puVar12 = puVar12 + 1;
                iVar3 = _o_iswdigit(*puVar12);
                if (iVar3 == 0) break;
                uVar10 = (ulonglong)((uint)*puVar12 + (iVar18 * 5 + -0x18) * 2);
              }
            }
            FUN_140001860(local_48,0xb,L"%d",(ulonglong)(uint)(DAT_140031698 + iVar18));
            sVar4 = wcsnlen(local_48,0xb);
            if ((int)sVar4 + iVar16 < 0x100) {
              FID_conflict_StringCchCopyW
                        ((short *)(&DAT_140031a50 + ((longlong)(int)local_e8 * 0x100 + uVar11) * 2),
                         0x100 - uVar11,(longlong)local_48);
              sVar4 = wcsnlen(local_48,0xb);
              *(int *)((longlong)&local_58 + uVar20 * 4) = iVar16 + (int)sVar4;
            }
            puVar12 = puVar12 + -1;
            puVar13 = DAT_1400305d0;
            goto LAB_14001e74c;
          }
          if ((uVar1 == puVar13[4]) || (uVar1 == puVar13[5])) {
            sVar4 = wcsnlen((wchar_t *)&DAT_140030690,0x100);
            extraout_EAX_00 = (int)sVar4;
            iVar16 = iVar16 + extraout_EAX_00;
            puVar13 = DAT_1400305d0;
            if (iVar16 < 0x100) {
              lVar8 = -uVar11 + 0x100;
              psVar7 = (short *)(&DAT_140031a50 + (uVar20 * 0x100 + uVar11) * 2);
              if (-uVar11 + 0xff < 0x7fffffff) {
                if ((ulonglong)(longlong)extraout_EAX_00 < 0x7fffffff) {
                  lVar6 = extraout_EAX_00 - lVar8;
                  lVar14 = (longlong)&DAT_140030690 - (longlong)psVar7;
                  do {
                    if ((lVar8 + lVar6 == 0) ||
                       (sVar2 = *(short *)(lVar14 + (longlong)psVar7), sVar2 == 0)) break;
                    *psVar7 = sVar2;
                    psVar7 = psVar7 + 1;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                  goto LAB_14001e4fb;
                }
              }
              else {
LAB_14001e50c:
                if (lVar8 == 0) goto LAB_14001e515;
              }
LAB_14001e511:
              *psVar7 = 0;
LAB_14001e515:
              *(int *)((longlong)&local_58 + uVar20 * 4) = iVar16;
              puVar13 = DAT_1400305d0;
            }
            goto LAB_14001e74c;
          }
          if ((uVar1 == puVar13[6]) || (uVar1 == puVar13[7])) {
            sVar4 = wcsnlen((wchar_t *)&DAT_140030890,0x100);
            extraout_EAX = (int)sVar4;
            iVar16 = iVar16 + extraout_EAX;
            puVar13 = DAT_1400305d0;
            if (iVar16 < 0x100) {
              lVar8 = -uVar11 + 0x100;
              psVar7 = (short *)(&DAT_140031a50 + (uVar20 * 0x100 + uVar11) * 2);
              if (0x7ffffffe < -uVar11 + 0xff) goto LAB_14001e50c;
              if (0x7ffffffe < (ulonglong)(longlong)extraout_EAX) goto LAB_14001e511;
              lVar6 = extraout_EAX - lVar8;
              lVar14 = (longlong)&DAT_140030890 - (longlong)psVar7;
              do {
                if ((lVar8 + lVar6 == 0) ||
                   (sVar2 = *(short *)(lVar14 + (longlong)psVar7), sVar2 == 0)) break;
                *psVar7 = sVar2;
                psVar7 = psVar7 + 1;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
LAB_14001e4fb:
              psVar5 = psVar7 + -1;
              if (lVar8 != 0) {
                psVar5 = psVar7;
              }
              *psVar5 = 0;
              goto LAB_14001e515;
            }
            goto LAB_14001e74c;
          }
          if (uVar1 == 0x26) {
            if (iVar16 + 1 < 0x100) {
              *(int *)((longlong)&local_58 + uVar20 * 4) = iVar16 + 1;
              *(undefined2 *)(&DAT_140031a50 + (uVar20 * 0x100 + uVar11) * 2) = 0x26;
            }
          }
          else {
            if ((uVar1 == puVar13[8]) || (uVar1 == puVar13[9])) {
              uVar17 = 1;
            }
            else {
              if ((uVar1 != puVar13[10]) && (uVar1 != puVar13[0xb])) {
                if ((uVar1 == puVar13[0xc]) || (uVar1 == puVar13[0xd])) {
                  local_e8 = 0;
                  uVar17 = uVar10;
                  uVar20 = uVar10;
                }
                goto LAB_14001e756;
              }
              uVar17 = 2;
            }
            local_e8 = (uint)uVar17;
            uVar20 = uVar17;
          }
        }
LAB_14001e756:
        param_1 = puVar12 + 1;
        uVar1 = *param_1;
      }
    } while (uVar1 != 0);
  }
  lVar8 = 0;
  puVar9 = &local_58;
  do {
    iVar16 = *(int *)puVar9;
    puVar9 = (undefined8 *)((longlong)puVar9 + 4);
    lVar6 = iVar16 + lVar8;
    lVar8 = lVar8 + 0x100;
    *(undefined2 *)(&DAT_140031a50 + lVar6 * 2) = 0;
  } while (lVar8 < 0x201);
LAB_14001e78a:
  FUN_140023f70(local_30 ^ (ulonglong)auStack264);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HDC FUN_14001e7c0(void)

{
  ushort *puVar1;
  DEVMODEW *pdm;
  HDC pHVar2;
  
  if (DAT_140031528 == (HGLOBAL)0x0) {
    _DAT_140031530 = _DAT_140031530 | 0x400;
    FUN_14000c650((LPPAGESETUPDLGW)&DAT_140031510);
    _DAT_140031530 = _DAT_140031530 & 0xfffffbff;
    if (DAT_140031528 == (HGLOBAL)0x0) goto LAB_14001e7fe;
  }
  puVar1 = (ushort *)GlobalLock(DAT_140031528);
  pdm = (DEVMODEW *)0x0;
  if (DAT_140031520 != (HGLOBAL)0x0) {
    pdm = (DEVMODEW *)GlobalLock(DAT_140031520);
  }
  pHVar2 = (HDC)0x0;
  if (puVar1 != (ushort *)0x0) {
    pHVar2 = CreateDCW((LPCWSTR)(puVar1 + *puVar1),(LPCWSTR)(puVar1 + puVar1[1]),(LPCWSTR)0x0,pdm);
  }
  GlobalUnlock(DAT_140031528);
  if (DAT_140031520 != (HGLOBAL)0x0) {
    GlobalUnlock(DAT_140031520);
  }
  if (pHVar2 != (HDC)0x0) {
    return pHVar2;
  }
LAB_14001e7fe:
  MessageBoxW(DAT_140032598,DAT_1400305a0,DAT_140030630,0x30);
  return (HDC)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HDC FUN_14001e8cc(void)

{
  BOOL BVar1;
  LPCWSTR *pDriverInfo;
  HDC pHVar2;
  uint local_res8 [2];
  HANDLE local_res10;
  
  local_res8[0] = 0;
  BVar1 = OpenPrinterW(&DAT_140031810,&local_res10,(LPPRINTER_DEFAULTSW)0x0);
  if (BVar1 != 0) {
    GetPrinterDriverW(local_res10,(LPWSTR)0x0,1,(LPBYTE)0x0,0,local_res8);
    pDriverInfo = (LPCWSTR *)LocalAlloc(0x40,(ulonglong)local_res8[0]);
    if (pDriverInfo != (LPCWSTR *)0x0) {
      BVar1 = GetPrinterDriverW(local_res10,(LPWSTR)0x0,1,(LPBYTE)pDriverInfo,local_res8[0],
                                local_res8);
      if (BVar1 != 0) {
        _DAT_140031530 = _DAT_140031530 | 0x400;
        FUN_14000c650((LPPAGESETUPDLGW)&DAT_140031510);
        _DAT_140031530 = _DAT_140031530 & 0xfffffbff;
        pHVar2 = CreateDCW(*pDriverInfo,&DAT_140031810,(LPCWSTR)0x0,(DEVMODEW *)0x0);
        LocalFree(pDriverInfo);
        ClosePrinter(local_res10);
        if (pHVar2 == (HDC)0x0) {
          MessageBoxW(DAT_140032598,DAT_1400305a0,DAT_140030630,0x30);
          return (HDC)0x0;
        }
        return pHVar2;
      }
      LocalFree(pDriverInfo);
    }
    ClosePrinter(local_res10);
  }
  return (HDC)0x0;
}



void FUN_14001ea3c(int param_1)

{
  DWORD DVar1;
  HDC pHVar2;
  WCHAR *pWVar3;
  wchar_t *pwVar4;
  undefined auStackY888 [32];
  WCHAR local_338 [400];
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY888;
  SetCursor(DAT_140031680);
  if (param_1 == 0) {
    pHVar2 = FUN_14001d708();
  }
  else if (param_1 == 2) {
    pHVar2 = FUN_14001e8cc();
  }
  else {
    pHVar2 = FUN_14001e7c0();
  }
  if (pHVar2 == (HDC)0x0) {
    SetCursor(DAT_140031688);
  }
  else {
    DVar1 = FUN_14001d824(pHVar2);
    if ((DVar1 != 0) && (1 < DVar1 + 3)) {
      if (DVar1 == 0xfffffffc) {
        DVar1 = 0x70;
      }
      if (DVar1 == 0xfffffffb) {
        DVar1 = 0xe;
      }
      if (DVar1 == 0xffffffff) {
        DVar1 = GetLastError();
      }
      if (DVar1 != 0) {
        DVar1 = FormatMessageW(0x1200,(LPCVOID)0x0,DVar1,0,local_338,400,(va_list *)0x0);
        pWVar3 = local_338;
        if (DVar1 == 0) {
          pWVar3 = DAT_140030618;
        }
        pwVar4 = DAT_1400320e0;
        if (DAT_140030678 != 0) {
          pwVar4 = DAT_140030658;
        }
        FUN_14000bda4(DAT_140032598,DAT_140030630,pWVar3,pwVar4,0x30);
      }
    }
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY888);
  return;
}



void FUN_14001eb90(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_140026108;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



int FUN_14001ebac(void)

{
  int iVar1;
  int iVar2;
  HLOCAL hMem;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int local_res8 [2];
  
  DAT_1400325a0 = '\0';
  uVar7 = 0xffffffff;
  SetCursor(DAT_140031680);
  SendMessageW(DAT_140032588,0xb1,0,0);
  uVar5 = 0;
  hMem = (HLOCAL)SendMessageW(DAT_140032588,0xbd,0,0);
  if (hMem != (HLOCAL)0x0) {
    pWVar3 = (LPCWSTR)LocalLock(hMem);
    iVar2 = 0;
    if (pWVar3 != (LPCWSTR)0x0) {
      iVar1 = GetWindowTextLengthW(DAT_140032588);
      local_res8[0] = 0;
      uVar7 = 0;
      iVar8 = 0;
      pWVar4 = pWVar3;
      while( true ) {
        pWVar4 = FUN_14001cbb0(pWVar4,iVar1 - (int)((longlong)pWVar4 - (longlong)pWVar3 >> 1),
                               (LPCWSTR)&DAT_140032480,uVar5,local_res8);
        if (pWVar4 == (LPCWSTR)0x0) break;
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + local_res8[0];
        pWVar4 = pWVar4 + local_res8[0];
      }
      iVar2 = 0;
      if (1 < (int)uVar7) {
        iVar2 = FUN_14001ed68(pWVar3,iVar1,iVar8,(ulonglong)uVar7);
      }
    }
    LocalUnlock(hMem);
    if ((uVar7 == 0) || (iVar2 != 0)) goto LAB_14001ecf1;
  }
  iVar2 = 0;
  do {
    uVar6 = 0;
    iVar1 = FUN_14001ef38(0);
    if (iVar1 != 0) {
      iVar2 = 1;
    }
    uVar5 = FUN_14001cc28(uVar6,DAT_1400325a0);
  } while ((char)uVar5 != '\0');
LAB_14001ecf1:
  SetCursor(DAT_140031688);
  SendMessageW(DAT_140032588,0xb1,0,0);
  SendMessageW(DAT_140032588,0xb7,0,0);
  FUN_14000b3b8('\x01');
  return iVar2;
}



undefined4 FUN_14001ed68(LPCWSTR param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  size_t sVar2;
  HGLOBAL hMem;
  LPCWSTR pWVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  void *_Dst;
  HGLOBAL _Dst_00;
  int local_res18 [2];
  
  uVar7 = param_4 & 0xffffffff;
  if (DAT_1400315b8 == (wchar_t *)0x0) {
    iVar6 = 0;
  }
  else {
    sVar2 = wcsnlen(DAT_1400315b8,0x80);
    iVar6 = (int)sVar2;
  }
  iVar1 = ((iVar6 * (int)uVar7 - param_3) + param_2) * 2 + 2;
  uVar4 = 0;
  if (0 < iVar1) {
    local_res18[0] = param_2;
    hMem = GlobalAlloc(0,(longlong)iVar1);
    uVar4 = 0;
    if (hMem != (HGLOBAL)0x0) {
      _Dst_00 = hMem;
      if (0 < (int)uVar7) {
        iVar8 = local_res18[0];
        do {
          pWVar3 = FUN_14001cbb0(param_1,iVar8,(LPCWSTR)&DAT_140032480,param_4,local_res18);
          lVar5 = (longlong)pWVar3 - (longlong)param_1 >> 1;
          sVar2 = lVar5 * 2;
          iVar8 = iVar8 - (local_res18[0] + (int)lVar5);
          memcpy(_Dst_00,param_1,sVar2);
          _Dst = (void *)((longlong)_Dst_00 + sVar2);
          memcpy(_Dst,DAT_1400315b8,(longlong)iVar6 * 2);
          _Dst_00 = (HGLOBAL)((longlong)_Dst + (longlong)iVar6 * 2);
          param_1 = pWVar3 + local_res18[0];
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      memcpy(_Dst_00,param_1,(longlong)iVar1 + ((longlong)_Dst_00 - (longlong)hMem >> 1) * -2);
      SendMessageW(DAT_140032588,0xb1,0,(longlong)param_2);
      SendMessageW(DAT_140032588,0xc2,1,(LPARAM)hMem);
      GlobalFree(hMem);
      uVar4 = 1;
    }
  }
  return uVar4;
}



undefined4 FUN_14001ef38(int param_1)

{
  size_t sVar1;
  HLOCAL hMem;
  LPVOID pvVar2;
  LPCWSTR pWVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res10[0] = 0;
  local_res18[0] = 0;
  if (DAT_1400315b8 == (wchar_t *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar1 = wcsnlen(DAT_1400315b8,0x80);
    iVar5 = (int)sVar1;
  }
  SendMessageW(DAT_140032588,0xb0,(WPARAM)local_res10,(LPARAM)local_res18);
  uVar6 = 0;
  hMem = (HLOCAL)SendMessageW(DAT_140032588,0xbd,0,0);
  if ((hMem != (HLOCAL)0x0) && (pvVar2 = LocalLock(hMem), pvVar2 != (LPVOID)0x0)) {
    pWVar3 = FUN_14001cbb0((LPCWSTR)((longlong)pvVar2 + (ulonglong)local_res10[0] * 2),
                           local_res18[0] - local_res10[0],DAT_1400315b0,uVar6,local_res20);
    uVar4 = 0;
    if ((pWVar3 == (LPCWSTR)((longlong)pvVar2 + (ulonglong)local_res10[0] * 2)) &&
       (uVar4 = 0, local_res20[0] == local_res18[0] - local_res10[0])) {
      SendMessageW(DAT_140032588,0xc2,1,(LPARAM)DAT_1400315b8);
      SendMessageW(DAT_140032588,0xb1,(ulonglong)local_res10[0],(ulonglong)(local_res10[0] + iVar5))
      ;
      if (param_1 != 0) {
        SendMessageW(DAT_140032588,0xb7,0,0);
      }
      uVar4 = 1;
    }
    LocalUnlock(hMem);
    return uVar4;
  }
  return 0;
}



undefined8 * FUN_14001f0b8(undefined8 *param_1,undefined8 *param_2)

{
  LPVOID *ppvVar1;
  int iVar2;
  uint uVar3;
  LPVOID pv;
  longlong lVar4;
  short *local_res8;
  LPVOID local_28 [2];
  longlong lVar5;
  
  ppvVar1 = (LPVOID *)(param_1 + 1);
  *ppvVar1 = (LPVOID)0x0;
  *param_1 = &PTR_FUN_140026130;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined *)(param_1 + 3) = 0;
  local_res8 = (short *)0x0;
  iVar2 = SHGetKnownFolderPath(&DAT_14002abf0,0,0,&local_res8);
  if (-1 < iVar2) {
    if (local_res8 == (short *)0x0) {
      return param_1;
    }
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (local_res8[lVar4] != 0);
    FUN_14000e224(local_28,local_res8,lVar5 + 10);
    pv = local_28[0];
    uVar3 = FID_conflict_StringCchCopyW
                      ((short *)((longlong)local_28[0] + lVar4 * 2),9,(longlong)L"\\Notepad");
    if ((-1 < (int)uVar3) && (ppvVar1 != local_28)) {
      FUN_14000c6a8(ppvVar1,local_28);
      pv = local_28[0];
    }
    if (pv != (LPVOID)0x0) {
      CoTaskMemFree(pv);
    }
  }
  if (local_res8 != (short *)0x0) {
    CoTaskMemFree(local_res8);
  }
  return param_1;
}



undefined8 * FUN_14001f1c0(undefined8 *param_1,uint param_2)

{
  FUN_14001f1fc(param_1);
  if ((param_2 & 1) != 0) {
    _o_free(param_1,0x20);
  }
  return param_1;
}



void FUN_14001f1fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_140026130;
  if ((LPVOID)param_1[2] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_1[2]);
  }
  if ((LPVOID)param_1[1] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_1[1]);
  }
  return;
}



ulonglong FUN_14001f248(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  wchar_t *lpData;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  LSTATUS LVar7;
  int iVar8;
  BOOL BVar9;
  DWORD DVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  wchar_t *pwVar11;
  wchar_t **ppwVar12;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  wchar_t *extraout_RAX;
  wchar_t *extraout_RAX_00;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  LPCWSTR pWVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  ulonglong uVar17;
  wchar_t *local_res10;
  HKEY local_res18;
  wchar_t *local_res20;
  wchar_t *local_58;
  HKEY local_50;
  LPVOID local_48 [2];
  
  local_res10 = (wchar_t *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = (HKEY)0x0;
  LVar7 = RegCreateKeyExW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Notepad\\Autosave",0,
                          (LPWSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_res18,(LPDWORD)0x0
                         );
  if (LVar7 != 0) {
    bVar16 = false;
    pwVar11 = (wchar_t *)CONCAT44(extraout_var,LVar7);
    goto LAB_14001f508;
  }
  local_50 = (HKEY)0x0;
  LVar7 = RegCreateKeyExW(local_res18,*(LPCWSTR *)(param_1 + 0x10),0,(LPWSTR)0x0,0,0xf003f,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_50,(LPDWORD)0x0);
  pwVar11 = (wchar_t *)CONCAT44(extraout_var_00,LVar7);
  if (LVar7 == 0) {
    cVar6 = FUN_140009f54();
    lVar15 = -1;
    bVar2 = false;
    bVar16 = true;
    if (cVar6 == '\0') {
      ppwVar12 = (wchar_t **)FUN_14000e224(local_48,(short *)&DAT_140027b40,0xffffffffffffffff);
      bVar2 = true;
      bVar1 = false;
    }
    else {
      local_res20 = (wchar_t *)0x0;
      pwVar11 = FUN_14001fc20(&local_res20,L"%s\\%s.autosave",*(undefined8 *)(param_1 + 8),
                              *(undefined8 *)(param_1 + 0x10));
      if ((int)pwVar11 < 0) {
        local_58 = (wchar_t *)0x0;
        if (local_res20 != (wchar_t *)0x0) {
          CoTaskMemFree(local_res20);
        }
      }
      else {
        local_58 = local_res20;
      }
      ppwVar12 = &local_58;
      bVar1 = bVar16;
    }
    local_res10 = *ppwVar12;
    *ppwVar12 = (wchar_t *)0x0;
    if ((bVar2) && (local_48[0] != (LPVOID)0x0)) {
      CoTaskMemFree(local_48[0]);
    }
    if ((bVar1) && (local_58 != (wchar_t *)0x0)) {
      CoTaskMemFree(local_58);
    }
    pwVar11 = local_res10;
    if (local_res10 == (wchar_t *)0x0) goto LAB_14001f2f3;
    lVar3 = -1;
    do {
      lVar14 = lVar3;
      lVar3 = lVar14 + 1;
    } while (local_res10[lVar14 + 1] != L'\0');
    FUN_14000e224(&local_res20,(short *)0x0,lVar14 + 4);
    lpData = local_res20;
    iVar8 = FUN_140001860(local_res20,lVar14 + 4,L"%i,%s",(ulonglong)DAT_1400315e4);
    pwVar11 = (wchar_t *)CONCAT44(extraout_var_01,iVar8);
    if (iVar8 < 0) {
LAB_14001f4c7:
      bVar16 = false;
      uVar4 = DAT_140031500;
      uVar5 = DAT_1400315e0;
    }
    else {
      do {
        lVar15 = lVar15 + 1;
      } while (lpData[lVar15] != L'\0');
      pWVar13 = DAT_1400320e0;
      if (DAT_1400320e0 == (LPCWSTR)0x0) {
        pWVar13 = DAT_140030658;
      }
      uVar17 = 0;
      LVar7 = RegSetValueExW(local_50,pWVar13,0,1,(BYTE *)lpData,(int)lVar15 * 2 + 1);
      pwVar11 = (wchar_t *)CONCAT44(extraout_var_02,LVar7);
      if (LVar7 != 0) goto LAB_14001f4c7;
      uVar4 = DAT_140031500;
      uVar5 = DAT_1400315e0;
      if (cVar6 != '\0') {
        pWVar13 = *(LPCWSTR *)(param_1 + 8);
        BVar9 = CreateDirectoryW(pWVar13,(LPSECURITY_ATTRIBUTES)0x0);
        if (BVar9 == 0) {
          DVar10 = GetLastError();
          pwVar11 = (wchar_t *)CONCAT44(extraout_var_03,DVar10);
          if (DVar10 != 0xb7) goto LAB_14001f4c7;
        }
        uVar5 = DAT_1400315e0;
        uVar4 = DAT_140031500;
        DAT_1400315e0 = 2;
        pwVar11 = (wchar_t *)
                  FUN_14000e730(pWVar13,&local_res10,uVar17 & 0xffffffffffffff00 | 1,
                                (undefined8 *)0x0);
        if ((char)pwVar11 == '\0') {
          LVar7 = RegDeleteKeyExW(local_res18,*(LPCWSTR *)(param_1 + 0x10),0,0);
          pwVar11 = (wchar_t *)CONCAT44(extraout_var_04,LVar7);
          goto LAB_14001f4c7;
        }
      }
    }
    DAT_1400315e0 = uVar5;
    DAT_140031500 = uVar4;
    if (lpData != (wchar_t *)0x0) {
      CoTaskMemFree(lpData);
      pwVar11 = extraout_RAX;
    }
    if (local_res10 != (wchar_t *)0x0) {
      CoTaskMemFree(local_res10);
      pwVar11 = extraout_RAX_00;
    }
  }
  else {
LAB_14001f2f3:
    bVar16 = false;
  }
  if (local_50 != (HKEY)0x0) {
    LVar7 = RegCloseKey(local_50);
    pwVar11 = (wchar_t *)CONCAT44(extraout_var_05,LVar7);
  }
LAB_14001f508:
  if (local_res18 != (HKEY)0x0) {
    LVar7 = RegCloseKey(local_res18);
    pwVar11 = (wchar_t *)CONCAT44(extraout_var_06,LVar7);
  }
  return (ulonglong)pwVar11 & 0xffffffffffffff00 | (ulonglong)bVar16;
}



ulonglong FUN_14001f548(longlong param_1)

{
  WCHAR WVar1;
  short sVar2;
  short sVar3;
  wchar_t wVar4;
  LPWSTR pv;
  char cVar5;
  LSTATUS LVar6;
  uint uVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  short *psVar8;
  undefined4 extraout_var_03;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  HKEY pHVar9;
  undefined8 uVar10;
  LPWSTR *ppWVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined8 uVar14;
  wchar_t **ppwVar15;
  bool bVar16;
  uint local_res10 [2];
  uint local_res18 [2];
  DWORD local_res20 [2];
  wchar_t *local_78;
  LPWSTR local_70;
  HKEY local_68;
  HKEY local_60;
  LPWSTR local_58;
  LPWSTR local_50 [2];
  
  local_res10[0] = 0;
  local_60 = (HKEY)0x0;
  LVar6 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Notepad\\Autosave",0,0xf003f
                        ,&local_60);
  if (LVar6 != 0) {
    bVar13 = 0;
    uVar12 = CONCAT44(extraout_var,LVar6);
    goto LAB_14001f8cd;
  }
  local_68 = (HKEY)0x0;
  LVar6 = RegOpenKeyExW(local_60,*(LPCWSTR *)(param_1 + 0x10),0,0xf003f,&local_68);
  uVar12 = CONCAT44(extraout_var_00,LVar6);
  if (LVar6 == 0) {
    uVar14 = 0;
    uVar10 = 0;
    pHVar9 = local_68;
    LVar6 = RegQueryInfoKeyW(local_68,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)0x0,(LPDWORD)0x0,local_res20,local_res10,local_res18,
                             (LPDWORD)0x0,(PFILETIME)0x0);
    uVar12 = CONCAT44(extraout_var_01,LVar6);
    if (LVar6 != 0) goto LAB_14001f8b5;
    bVar13 = 1;
    if (local_res20[0] != 1) {
      FUN_140023a04(pHVar9,uVar10,uVar14);
    }
    local_res10[0] = local_res10[0] + 1;
    uVar12 = (ulonglong)(local_res18[0] >> 1);
    FUN_14000e224(&local_70,(short *)0x0,(ulonglong)local_res10[0]);
    FUN_14000e224(local_50,(short *)0x0,uVar12 + 1);
    pv = local_50[0];
    LVar6 = RegEnumValueW(local_68,0,local_70,local_res10,(LPDWORD)0x0,(LPDWORD)0x0,
                          (LPBYTE)local_50[0],local_res18);
    if (LVar6 == 0) {
      pv[uVar12] = L'\0';
      FUN_14000e224(&local_78,pv + 2,uVar12 - 1);
      WVar1 = *pv;
      psVar8 = DAT_140030658;
      do {
        sVar2 = *psVar8;
        sVar3 = *(short *)((longlong)psVar8 + ((longlong)local_70 - (longlong)DAT_140030658));
        if (sVar2 != sVar3) break;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      wVar4 = *local_78;
      if ((wVar4 != L'\0') || (sVar2 != sVar3)) {
        uVar12 = 0;
        ppwVar15 = &local_78;
        if (wVar4 == L'\0') {
          ppwVar15 = &local_70;
        }
        uVar10 = 0;
        DAT_140031500 =
             CreateFileW(*ppwVar15,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
        if (DAT_140031500 != (HANDLE)0xffffffffffffffff) {
          uVar7 = (ushort)WVar1 - 0x30;
          if (wVar4 != L'\0') {
            uVar7 = 2;
          }
          cVar5 = FUN_14000f0d4(ppwVar15,(ulonglong)uVar7,
                                uVar12 & 0xffffffffffffff00 | (ulonglong)(wVar4 != L'\0'),uVar10);
          if (cVar5 != '\0') goto LAB_14001f783;
        }
        FUN_14000fdac(local_78);
      }
LAB_14001f783:
      if (wVar4 != L'\0') {
        FUN_14000c6a8(&local_78,(LPVOID *)&DAT_1400320e0);
        DAT_140030678 = (uint)(sVar2 == sVar3);
        bVar16 = sVar2 != sVar3;
        if (bVar16) {
          ppWVar11 = &local_58;
          local_58 = local_70;
          local_70 = (LPWSTR)0x0;
        }
        else {
          local_50[0] = (LPWSTR)0x0;
          ppWVar11 = local_50;
        }
        FUN_14000c6a8((LPVOID *)&DAT_1400320e0,ppWVar11);
        if ((bVar16) && (local_58 != (LPWSTR)0x0)) {
          CoTaskMemFree(local_58);
        }
        if ((!bVar16) && (local_50[0] != (LPWSTR)0x0)) {
          CoTaskMemFree(local_50[0]);
        }
        DAT_1400315e4 = (ushort)WVar1 - 0x30;
        SendMessageW(DAT_140032588,0xb9,1,0);
        FUN_14000b83c();
        FUN_14000b130();
        DeleteFileW(local_78);
      }
      LVar6 = RegDeleteKeyExW(local_60,*(LPCWSTR *)(param_1 + 0x10),0,0);
      uVar12 = CONCAT44(extraout_var_03,LVar6);
      if (local_78 != (wchar_t *)0x0) {
        CoTaskMemFree(local_78);
        uVar12 = extraout_RAX;
      }
    }
    else {
      bVar13 = 0;
      uVar12 = CONCAT44(extraout_var_02,LVar6);
    }
    if (pv != (LPWSTR)0x0) {
      CoTaskMemFree(pv);
      uVar12 = extraout_RAX_00;
    }
    if (local_70 != (LPWSTR)0x0) {
      CoTaskMemFree(local_70);
      uVar12 = extraout_RAX_01;
    }
  }
  else {
LAB_14001f8b5:
    bVar13 = 0;
  }
  if (local_68 != (HKEY)0x0) {
    LVar6 = RegCloseKey(local_68);
    uVar12 = CONCAT44(extraout_var_04,LVar6);
  }
LAB_14001f8cd:
  if (local_60 != (HKEY)0x0) {
    LVar6 = RegCloseKey(local_60);
    uVar12 = CONCAT44(extraout_var_05,LVar6);
  }
  return uVar12 & 0xffffffffffffff00 | (ulonglong)bVar13;
}



ulonglong FUN_14001f900(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  HANDLE hObject;
  undefined4 extraout_var_01;
  HANDLE extraout_RAX;
  longlong lVar6;
  ulonglong uVar7;
  wchar_t *local_res8;
  ulonglong local_res10;
  
  BVar3 = CreateDirectoryW(*(LPCWSTR *)(param_1 + 8),(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0xb7) {
      return CONCAT44(extraout_var,DVar4) & 0xffffffffffffff00;
    }
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = -1;
  do {
    lVar6 = lVar2;
    lVar2 = lVar6 + 1;
  } while (*(short *)(lVar1 + (lVar6 + 1) * 2) != 0);
  FUN_14000e224(&local_res8,(short *)0x0,lVar6 + 0x11);
  iVar5 = FUN_140001860(local_res8,lVar6 + 0x11,L"%s\\%s",lVar1);
  hObject = (HANDLE)CONCAT44(extraout_var_00,iVar5);
  if ((-1 < iVar5) &&
     (hObject = CreateFileW(local_res8,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x82,(HANDLE)0x0),
     hObject != (HANDLE)0xffffffffffffffff)) {
    CloseHandle(hObject);
    BVar3 = GetDiskFreeSpaceExW(*(LPCWSTR *)(param_1 + 8),&local_res10,(PULARGE_INTEGER)0x0,
                                (PULARGE_INTEGER)0x0);
    hObject = (HANDLE)CONCAT44(extraout_var_01,BVar3);
    if (BVar3 != 0) {
      hObject = (HANDLE)SendMessageW(DAT_140032588,0xe,0,0);
      uVar7 = 1;
      if ((ulonglong)((int)hObject + 1) * 2 <= local_res10) goto LAB_14001fa26;
    }
  }
  uVar7 = 0;
LAB_14001fa26:
  if (local_res8 != (wchar_t *)0x0) {
    CoTaskMemFree(local_res8);
    hObject = extraout_RAX;
  }
  return (ulonglong)hObject & 0xffffffffffffff00 | uVar7;
}



void FUN_14001fa54(wchar_t **param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined auStack168 [32];
  uint local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  uint local_68;
  uint local_60;
  uint local_58;
  uint local_50;
  uint local_48;
  uint local_40;
  wchar_t *local_38;
  GUID local_30;
  ulonglong local_20;
  
  local_20 = DAT_140030470 ^ (ulonglong)auStack168;
  HVar1 = CoCreateGuid(&local_30);
  if (HVar1 < 0) {
    *param_1 = (wchar_t *)0x0;
  }
  else {
    FUN_14000e224(&local_38,(short *)0x0,0x25);
    local_40 = (uint)local_30.Data4[7];
    local_48 = (uint)local_30.Data4[6];
    local_50 = (uint)local_30.Data4[5];
    local_58 = (uint)local_30.Data4[4];
    local_60 = (uint)local_30.Data4[3];
    local_68 = (uint)local_30.Data4[2];
    local_70 = (uint)local_30.Data4[1];
    local_78 = (uint)local_30.Data4[0];
    local_80 = (uint)local_30.Data3;
    local_88 = (uint)local_30.Data2;
    iVar2 = FUN_140001860(local_38,0x25,L"%08lX-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X",
                          (ulonglong)local_30.Data1);
    if (iVar2 < 0) {
      *param_1 = (wchar_t *)0x0;
      if (local_38 != (wchar_t *)0x0) {
        CoTaskMemFree(local_38);
      }
    }
    else {
      *param_1 = local_38;
    }
  }
  FUN_140023f70(local_20 ^ (ulonglong)auStack168);
  return;
}



uint FUN_14001fb7c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 in_stack_00000000;
  PCWSTR local_res10 [3];
  
  FUN_14000e224(local_res10,L"RestartByRestartManager:",0x3d);
  uVar1 = FID_conflict_StringCchCopyW(local_res10[0] + 0x18,0x25,param_1);
  if ((int)uVar1 < 0) {
    iVar2 = 0x143;
  }
  else {
    uVar1 = RegisterApplicationRestart(local_res10[0],0);
    if (-1 < (int)uVar1) {
      uVar1 = 0;
      goto LAB_14001fbf7;
    }
    iVar2 = 0x144;
  }
  FUN_1400025bc(in_stack_00000000,iVar2,"shell\\osshell\\accesory\\notepad\\nprestart.cpp");
LAB_14001fbf7:
  if (local_res10[0] != (PCWSTR)0x0) {
    CoTaskMemFree(local_res10[0]);
  }
  return uVar1;
}



wchar_t * FUN_14001fc20(wchar_t **param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  wchar_t **ppwVar2;
  ulonglong _Count;
  ulonglong uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 in_stack_00000000;
  undefined8 local_res18;
  undefined8 local_res20;
  wchar_t *local_68;
  wchar_t *local_60;
  LPVOID local_58 [3];
  
  local_res18 = param_3;
  local_res20 = param_4;
  iVar1 = FUN_140024fa4(param_2,&local_res18);
  _Count = (ulonglong)iVar1;
  pwVar5 = (wchar_t *)0x0;
  local_68 = (wchar_t *)0x0;
  ppwVar2 = (wchar_t **)FUN_14000e224(local_58,(short *)0x0,_Count);
  local_60 = pwVar5;
  if (&local_68 != ppwVar2) {
    FUN_14000c6a8(&local_68,ppwVar2);
    local_60 = local_68;
  }
  if (local_58[0] != (LPVOID)0x0) {
    CoTaskMemFree(local_58[0]);
  }
  if (local_60 == (wchar_t *)0x0) {
    FUN_1400025bc(in_stack_00000000,0x6ec,
                  "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    return (wchar_t *)0x8007000e;
  }
  uVar3 = _Count + 1;
  pwVar4 = pwVar5;
  if (0x7ffffffe < _Count) {
    pwVar4 = (wchar_t *)0x80070057;
  }
  if ((int)pwVar4 < 0) {
joined_r0x00014001fd43:
    pwVar5 = pwVar4;
    if (uVar3 != 0) {
      *local_60 = L'\0';
    }
  }
  else {
    if (uVar3 == 0) {
      if (*param_2 != L'\0') {
        pwVar5 = (wchar_t *)0x8007007a;
        goto LAB_14001fd4d;
      }
      goto LAB_14001fd76;
    }
    iVar1 = FID_conflict__vsnprintf(local_60,_Count,param_2,(va_list)&local_res18);
    if ((iVar1 < 0) || (_Count < (ulonglong)(longlong)iVar1)) {
      local_60[_Count] = L'\0';
      pwVar5 = (wchar_t *)0x8007007a;
LAB_14001fd2b:
      if (-1 < (int)pwVar5) goto LAB_14001fd76;
      uVar3 = uVar3 & 0x7fffffffffffffff;
      pwVar4 = pwVar5;
      goto joined_r0x00014001fd43;
    }
    if ((longlong)iVar1 != _Count) goto LAB_14001fd2b;
    local_60[_Count] = L'\0';
  }
  if ((int)pwVar5 < 0) {
LAB_14001fd4d:
    FUN_1400025bc(in_stack_00000000,0x6ef,
                  "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    CoTaskMemFree(local_60);
    return pwVar5;
  }
LAB_14001fd76:
  if (param_1 != &local_60) {
    FUN_14000c6a8(param_1,&local_60);
  }
  if (local_60 != (wchar_t *)0x0) {
    CoTaskMemFree(local_60);
  }
  return (wchar_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001fdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res8;
  undefined *local_res10 [3];
  
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x200000000000) != 0)) &&
     ((DAT_140030210 & 0x200000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res10[0] = &DAT_140032118;
    local_res8 = DAT_140032128;
    FUN_140001008(param_1,&DAT_14002b38b,param_3,param_4,local_res10,&local_res8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001fe50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined *local_res20;
  
  local_res10[0] = (undefined4)param_1;
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x200000000000) != 0)) &&
     ((DAT_140030210 & 0x200000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res20 = &DAT_140032118;
    local_res18 = DAT_140032128;
    FUN_140001094(param_1,&DAT_14002b33e,0x200000000000,param_4,&local_res20,&local_res18,
                  local_res10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001fedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res8;
  undefined *local_res10 [3];
  
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res10[0] = &DAT_140032118;
    local_res8 = DAT_140032128;
    FUN_140001008(param_1,&DAT_14002b306,param_3,param_4,local_res10,&local_res8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001ff5c(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint local_res10 [2];
  uint local_res18 [2];
  ulonglong local_res20;
  undefined8 local_28;
  uint *local_20;
  longlong local_18;
  undefined *local_10;
  
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    local_res10[0] = param_1[0x86];
    local_res18[0] = param_1[1];
    local_res20 = (ulonglong)*param_1;
    local_28 = *(undefined8 *)(param_1 + 2);
    local_20 = param_1 + 4;
    DAT_140032128 = DAT_140032128 + 1;
    local_10 = &DAT_140032118;
    local_18 = DAT_140032128;
    FUN_140001130(param_1,&DAT_14002b28c,0x400000000000,param_4,&local_10,&local_18,&local_20,
                  &local_28,&local_res20,local_res18,local_res10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140020040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res8;
  undefined *local_res10 [3];
  
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res10[0] = &DAT_140032118;
    local_res8 = DAT_140032128;
    FUN_140001008(param_1,&DAT_14002b258,param_3,param_4,local_res10,&local_res8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400200c0(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint local_res10 [2];
  ulonglong local_res18;
  undefined *local_res20;
  undefined8 local_28;
  uint *local_20;
  ulonglong local_18;
  undefined *local_10;
  
  if (param_2 == 0) {
    if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
       ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
      DAT_140032128 = DAT_140032128 + 1;
      local_res20 = &DAT_140032118;
      local_res18 = DAT_140032128;
      FUN_140001008(param_1,&DAT_14002b1ab,param_3,param_4,&local_res20,&local_res18);
    }
  }
  else if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
          ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    local_res10[0] = param_1[0x86];
    local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)param_1[1];
    local_res20 = (undefined *)(ulonglong)*param_1;
    local_28 = *(undefined8 *)(param_1 + 2);
    local_20 = param_1 + 4;
    DAT_140032128 = DAT_140032128 + 1;
    local_10 = &DAT_140032118;
    local_18 = DAT_140032128;
    FUN_140001130(param_1,&DAT_14002b1e2,param_3,param_4,&local_10,&local_18,&local_20,&local_28,
                  &local_res20,&local_res18,local_res10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002021c(undefined (*param_1) [16],undefined4 param_2,undefined4 param_3,
                  undefined4 param_4)

{
  undefined auStackY520 [32];
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined2 local_1d4;
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8 [2];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8 [2];
  _EVENT_DATA_DESCRIPTOR local_198 [2];
  undefined *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY520;
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x200000000000) != 0)) &&
     ((DAT_140030210 & 0x200000000000) == DAT_140030210)) {
    local_1d8 = *(undefined2 *)param_1[2];
    local_1d6 = *(undefined2 *)(param_1[1] + 0xe);
    local_1d4 = *(undefined2 *)(param_1[1] + 0xc);
    local_1d2 = *(undefined2 *)(param_1[1] + 10);
    local_1d0 = *(undefined2 *)(param_1[1] + 8);
    local_1ce = *(undefined2 *)(param_1[1] + 6);
    local_1cc = *(undefined2 *)(param_1[1] + 4);
    local_1ca = *(undefined2 *)(param_1[1] + 2);
    local_1c8 = *(undefined2 *)param_1[1];
    local_1c6 = *(undefined2 *)(*param_1 + 0xe);
    local_1c4 = *(undefined2 *)(*param_1 + 0xc);
    local_1c2 = *(undefined2 *)(*param_1 + 10);
    local_1c0 = *(undefined2 *)(*param_1 + 8);
    local_1be = *(undefined2 *)(*param_1 + 6);
    local_1bc = *(undefined2 *)(*param_1 + 4);
    local_1ba = *(undefined2 *)(*param_1 + 2);
    local_1b8[0] = *(undefined2 *)*param_1;
    DAT_140032128 = DAT_140032128 + 1;
    local_28 = &local_1b4;
    local_38 = &local_1b0;
    local_48 = &local_1ac;
    local_58 = &local_1d8;
    local_68 = &local_1d6;
    local_78 = &local_1d4;
    local_88 = &local_1d2;
    local_98 = &local_1d0;
    local_a8 = &local_1ce;
    local_b8 = &local_1cc;
    local_c8 = &local_1ca;
    local_d8 = &local_1c8;
    local_e8 = &local_1c6;
    local_f8 = &local_1c4;
    local_20 = 4;
    local_30 = 4;
    local_40 = 4;
    local_50 = 2;
    local_60 = 2;
    local_70 = 2;
    local_80 = 2;
    local_90 = 2;
    local_a0 = 2;
    local_b0 = 2;
    local_c0 = 2;
    local_d0 = 2;
    local_e0 = 2;
    local_108 = &local_1c2;
    local_f0 = 2;
    local_118 = &local_1c0;
    local_100 = 2;
    local_128 = &local_1be;
    local_110 = 2;
    local_138 = &local_1bc;
    local_120 = 2;
    local_148 = &local_1ba;
    local_158 = local_1b8;
    local_168 = local_1a8;
    local_178 = &DAT_140032118;
    local_130 = 2;
    local_140 = 2;
    local_150 = 2;
    local_160 = 8;
    local_170 = 0x10;
    local_1b4 = param_4;
    local_1b0 = param_3;
    local_1ac = param_2;
    local_1a8[0] = DAT_140032128;
    _tlgWriteTransfer_EtwWriteTransfer
              ((longlong)&DAT_1400301f8,&DAT_14002b027,(LPCGUID)0x0,(LPCGUID)0x0,0x18,local_198);
  }
  *param_1 = ZEXT816(0);
  param_1[1] = ZEXT816(0);
  *(undefined2 *)param_1[2] = 0;
  FUN_140023f70(local_18 ^ (ulonglong)auStackY520);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002053c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined *local_res20;
  
  puVar1 = &DAT_140032118;
  CoCreateGuid((GUID *)&DAT_140032118);
  DAT_140032128 = 0;
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x200000000000) != 0)) &&
     ((DAT_140030210 & 0x200000000000) == DAT_140030210)) {
    DAT_140032128 = 1;
    local_res18 = 1;
    local_res20 = &DAT_140032118;
    local_res10[0] = param_1;
    FUN_140001094(puVar1,&DAT_14002afe4,param_3,param_4,&local_res20,&local_res18,local_res10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400205ec(int param_1,undefined4 param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined auStackY184 [32];
  undefined4 local_88 [2];
  longlong local_80;
  _EVENT_DATA_DESCRIPTOR local_78 [2];
  undefined *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStackY184;
  pwVar2 = (wchar_t *)0x0;
  if (param_1 == 0) {
    pwVar2 = L"EditMenu";
  }
  else if (param_1 == 1) {
    pwVar2 = L"ContextMenu";
  }
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_28 = local_88;
    local_20 = 4;
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = L"";
      local_30 = 2;
    }
    else {
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (pwVar2[lVar1] != L'\0');
      local_30 = (int)lVar1 * 2 + 2;
    }
    local_48 = &local_80;
    local_58 = &DAT_140032118;
    local_2c = 0;
    local_40 = 8;
    local_50 = 0x10;
    local_88[0] = param_2;
    local_80 = DAT_140032128;
    local_38 = pwVar2;
    _tlgWriteTransfer_EtwWriteTransfer
              ((longlong)&DAT_1400301f8,&DAT_14002af8e,(LPCGUID)0x0,(LPCGUID)0x0,6,local_78);
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStackY184);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140020724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined *local_res20;
  
  local_res10[0] = (undefined4)param_1;
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res20 = &DAT_140032118;
    local_res18 = DAT_140032128;
    FUN_140001094(param_1,&DAT_14002af48,0x400000000000,param_4,&local_res20,&local_res18,
                  local_res10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400207b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res8;
  undefined *local_res10 [3];
  
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res10[0] = &DAT_140032118;
    local_res8 = DAT_140032128;
    FUN_140001008(param_1,&DAT_14002af15,param_3,param_4,local_res10,&local_res8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140020830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined *local_res20;
  
  local_res10[0] = (undefined4)param_1;
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res20 = &DAT_140032118;
    local_res18 = DAT_140032128;
    FUN_140001094(param_1,&DAT_14002aec7,0x400000000000,param_4,&local_res20,&local_res18,
                  local_res10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400208bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined *local_res18 [2];
  
  if (((4 < _DAT_1400301f8) && ((_DAT_140030208 & 0x400000000000) != 0)) &&
     ((DAT_140030210 & 0x400000000000) == DAT_140030210)) {
    DAT_140032128 = DAT_140032128 + 1;
    local_res8[0] = DAT_1400315e4;
    local_res18[0] = &DAT_140032118;
    local_res10 = DAT_140032128;
    FUN_140001094(param_1,&DAT_14002ae81,0x400000000000,param_4,local_res18,&local_res10,local_res8)
    ;
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140020950(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1400325a8 == 0) {
    iVar1 = CoCreateInstance((IID *)&DAT_140028428,(LPUNKNOWN)0x0,3,(IID *)&DAT_140028408,
                             (LPVOID *)&DAT_1400325a8);
  }
  if (-1 < iVar1) {
    (**(code **)(*(longlong *)DAT_1400325a8 + 0x38))();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400209ec(void)

{
  undefined auStack104 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_28;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack104;
  if (DAT_1400325a8 != 0) {
    local_48 = &local_28;
    local_40 = 1;
    local_28 = 0xc3a6921b;
    uStack36 = 0x44f14a99;
    uStack32 = 0x1861a6bc;
    uStack28 = 0x31c45270;
    (**(code **)(*(longlong *)DAT_1400325a8 + 0x48))();
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStack104);
  return;
}



undefined8 FUN_140020a60(void)

{
  SetLastError(0x7f);
  return 0;
}



undefined8 FUN_140020a90(void)

{
  return 0;
}



undefined8 FUN_140020aa0(void)

{
  return 0xffffffff;
}



void FUN_140020aac(int param_1)

{
  code *pcVar1;
  
  if (((DAT_1400325b8 != 0) && (param_1 < 0)) &&
     ((DAT_1400325b8 == param_1 || (DAT_1400325b8 == -1)))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



void FUN_140020acc(HLOCAL *param_1)

{
  if (*param_1 != (HLOCAL)0x0) {
    LocalFree(*param_1);
    *param_1 = (HLOCAL)0x0;
  }
  return;
}



void FUN_140020afc(LPVOID *param_1)

{
  LPVOID lpMem;
  HANDLE hHeap;
  
  lpMem = *param_1;
  if (lpMem != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *param_1 = (LPVOID)0x0;
  }
  return;
}



void FUN_140020b48(HANDLE *param_1)

{
  if (*param_1 != (HANDLE)0x0) {
    CloseHandle(*param_1);
    *param_1 = (HANDLE)0x0;
  }
  return;
}



uint FUN_140020b78(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  
  pwVar2 = L"Security-SPP-GenuineLocalStatus";
  lVar3 = 0x7fffffff;
  do {
    if (*pwVar2 == L'\0') break;
    pwVar2 = pwVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = ~-(uint)(lVar3 != 0) & 0x80070057;
  if (param_3 != (longlong *)0x0) {
    if (lVar3 != 0) {
      *param_3 = 0x7fffffff - lVar3;
      return uVar1;
    }
    *param_3 = 0;
  }
  return uVar1;
}



void FUN_140020bc8(DWORD param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140020bd2. Too many branches
                    // WARNING: Treating indirect jump as call
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_140020bf0(longlong param_1,undefined param_2,undefined param_3,undefined param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0x8007000e;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_140020c50(longlong param_1,undefined param_2,undefined param_3,undefined param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0x8007000e;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_140020cb0(longlong param_1,undefined param_2,undefined param_3,undefined param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0x8007000e;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_140020d10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0x8007000e;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  return uVar1;
}



undefined8 FUN_140020d40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    return 0x8007000e;
  }
                    // WARNING: Could not recover jumptable at 0x0001400255c0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  return uVar1;
}



undefined8 FUN_140020d70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    return 0x8007000e;
  }
                    // WARNING: Could not recover jumptable at 0x0001400255c0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140020d94(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_res10 [3];
  
  local_res10[0] = (longlong *)0x0;
  iVar2 = RoGetMatchingRestrictedErrorInfo(param_1,local_res10);
  if (-1 < iVar2) {
    SetRestrictedErrorInfo(local_res10[0]);
  }
  plVar1 = local_res10[0];
  if (local_res10[0] != (longlong *)0x0) {
    local_res10[0] = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140020df0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined8 in_stack_00000000;
  undefined auStack120 [32];
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  undefined local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140030470 ^ (ulonglong)auStack120;
  local_50 = (longlong *)0x0;
  local_28 = 0;
  local_48 = param_1;
  DVar3 = WindowsCreateStringReference(L"Windows.Storage.StorageFile",0x1b,local_40,&local_28);
  if (-1 < (int)DVar3) {
    iVar4 = RoGetActivationFactory(local_28,&DAT_14002ab50,&local_50);
    plVar2 = local_50;
    if (iVar4 < 0) {
      FUN_1400025bc(in_stack_00000000,0x1c,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      local_58 = (longlong *)0x0;
      lVar5 = FUN_140022274((longlong)local_40,&local_48);
      pplVar7 = &local_58;
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      iVar4 = (**(code **)(*plVar2 + 0x30))();
      plVar2 = local_58;
      if (iVar4 < 0) {
        FUN_1400025bc(in_stack_00000000,0x1e,
                      "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
      }
      else {
        DVar3 = FUN_140022824(local_58,uVar6,pplVar7);
        if (-1 < (int)DVar3) {
          (**(code **)(*plVar2 + 0x40))();
        }
      }
      plVar2 = local_58;
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      local_50 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_20 ^ (ulonglong)auStack120);
    return;
  }
  FUN_140020bc8(DVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140020f5c(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong **pplVar6;
  undefined8 in_stack_00000000;
  undefined auStack136 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack136;
  local_50 = (longlong *)0x0;
  iVar3 = FUN_140020df0(param_1);
  if (iVar3 < 0) {
    FUN_1400025bc(in_stack_00000000,0x25,
                  "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
  }
  else {
    local_58 = (longlong *)0x0;
    iVar3 = (**(code **)*local_50)();
    if (iVar3 < 0) {
      FUN_1400025bc(in_stack_00000000,0x27,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      local_60 = (longlong *)0x0;
      local_30 = 0;
      DVar4 = WindowsCreateStringReference
                        (L"Windows.Security.EnterpriseData.FileProtectionManager",0x35,local_48,
                         &local_30);
      if ((int)DVar4 < 0) {
        FUN_140020bc8(DVar4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = RoGetActivationFactory(local_30,&DAT_14002ab10,&local_60);
      if (iVar3 < 0) {
        FUN_1400025bc(in_stack_00000000,0x29,
                      "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
      }
      else {
        pplVar6 = &local_68;
        local_68 = (longlong *)0x0;
        plVar5 = local_58;
        iVar3 = (**(code **)(*local_60 + 0x40))();
        plVar2 = local_68;
        if (iVar3 < 0) {
          FUN_1400025bc(in_stack_00000000,0x2b,
                        "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
        }
        else {
          DVar4 = FUN_140022ad8(local_68,plVar5,pplVar6);
          if (-1 < (int)DVar4) {
            (**(code **)(*plVar2 + 0x40))();
          }
        }
        plVar2 = local_68;
        if (local_68 != (longlong *)0x0) {
          local_68 = (longlong *)0x0;
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        local_60 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_140023f70(local_28 ^ (ulonglong)auStack136);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x0001400212ce)
// WARNING: Removing unreachable block (ram,0x00014002121f)
// WARNING: Removing unreachable block (ram,0x000140021250)
// WARNING: Removing unreachable block (ram,0x0001400212c2)
// WARNING: Removing unreachable block (ram,0x000140021278)
// WARNING: Removing unreachable block (ram,0x000140021249)
// WARNING: Removing unreachable block (ram,0x00014002127d)
// WARNING: Removing unreachable block (ram,0x0001400212ad)
// WARNING: Removing unreachable block (ram,0x0001400212d6)
// WARNING: Removing unreachable block (ram,0x0001400212f5)

uint FUN_140021160(longlong param_1,short *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 in_stack_00000000;
  
  *param_4 = 0;
  *param_2 = 0;
  iVar1 = FUN_140021db8();
  if (iVar1 == 0) {
    *param_4 = 5;
LAB_14002130e:
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140020f5c(param_1);
    if ((int)uVar2 < 0) {
      iVar1 = 0x36;
    }
    else {
      uVar2 = (**(code **)(lRam0000000000000000 + 0x30))();
      if (-1 < (int)uVar2) {
        *param_4 = 4;
        WindowsDeleteString(0);
        goto LAB_14002130e;
      }
      iVar1 = 0x39;
    }
    FUN_1400025bc(in_stack_00000000,iVar1,
                  "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
  }
  return uVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140021324(void)

{
  code *pcVar1;
  longlong *plVar2;
  DWORD DVar3;
  int iVar4;
  undefined8 in_stack_00000000;
  undefined auStack88 [32];
  longlong *local_38;
  undefined local_30 [24];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStack88;
  local_38 = (longlong *)0x0;
  local_18 = 0;
  DVar3 = WindowsCreateStringReference
                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_30,
                     &local_18);
  if (-1 < (int)DVar3) {
    iVar4 = RoGetActivationFactory(local_18,&DAT_14002a900,&local_38);
    if (iVar4 < 0) {
      FUN_1400025bc(in_stack_00000000,0x67,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      (**(code **)(*local_38 + 0x40))();
    }
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_10 ^ (ulonglong)auStack88);
    return;
  }
  FUN_140020bc8(DVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140021400(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000000;
  undefined auStack184 [48];
  undefined4 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140030470 ^ (ulonglong)auStack184;
  local_60 = (longlong *)0x0;
  local_58[0] = param_2;
  iVar3 = FUN_140020df0(param_1);
  if (iVar3 < 0) {
    FUN_1400025bc(in_stack_00000000,0x72,
                  "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    goto LAB_14002163d;
  }
  local_68 = (longlong *)0x0;
  iVar3 = (**(code **)*local_60)();
  if (iVar3 < 0) {
    FUN_1400025bc(in_stack_00000000,0x74,
                  "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
  }
  else {
    local_70 = (longlong *)0x0;
    local_30 = 0;
    DVar4 = WindowsCreateStringReference
                      (L"Windows.Security.EnterpriseData.FileProtectionManager",0x35,local_48,
                       &local_30);
    if ((int)DVar4 < 0) {
      FUN_140020bc8(DVar4);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = RoGetActivationFactory(local_30,&DAT_14002ab10,&local_70);
    plVar2 = local_70;
    if (iVar3 < 0) {
      FUN_1400025bc(in_stack_00000000,0x76,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      local_78 = (longlong *)0x0;
      lVar5 = FUN_140022274((longlong)local_48,local_58);
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      plVar6 = local_68;
      iVar3 = (**(code **)(*plVar2 + 0x30))();
      plVar2 = local_78;
      if (iVar3 < 0) {
        FUN_1400025bc(in_stack_00000000,0x78,
                      "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
      }
      else {
        local_80 = (longlong *)0x0;
        DVar4 = FUN_140022ad8(local_78,plVar6,uVar7);
        if (((int)DVar4 < 0) || (iVar3 = (**(code **)(*plVar2 + 0x40))(), iVar3 < 0)) {
          iVar3 = 0x7a;
LAB_1400215c5:
          FUN_1400025bc(in_stack_00000000,iVar3,
                        "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
        }
        else {
          local_88 = 0;
          iVar3 = (**(code **)(*local_80 + 0x30))();
          if (iVar3 < 0) {
            iVar3 = 0x7c;
            goto LAB_1400215c5;
          }
        }
        plVar2 = local_80;
        if (local_80 != (longlong *)0x0) {
          local_80 = (longlong *)0x0;
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar2 = local_78;
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = local_70;
    if (local_70 != (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
LAB_14002163d:
  plVar2 = local_60;
  if (local_60 != (longlong *)0x0) {
    local_60 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_140023f70(local_28 ^ (ulonglong)auStack184);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x0001400216ec)
// WARNING: Removing unreachable block (ram,0x0001400217dc)

ulonglong FUN_140021688(longlong *param_1,short *param_2,uint param_3)

{
  longlong *pv;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 in_stack_00000000;
  longlong *local_res10;
  uint local_res18 [4];
  undefined2 local_58 [16];
  
  uVar4 = 0;
  *param_2 = 0;
  local_res18[0] = param_3;
  uVar2 = (**(code **)(*param_1 + 0xf0))();
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
    FUN_1400025bc(in_stack_00000000,0x85,
                  "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
  }
  else {
    local_res10 = (longlong *)0x0;
    local_res18[0] = 0;
    local_58[0] = 0;
    iVar1 = (**(code **)(lRam0000000000000000 + 0x28))();
    if (-1 < iVar1) {
      iVar1 = PropVariantToStringVectorAlloc(local_58,&local_res10,local_res18);
    }
    PropVariantClear((PROPVARIANT *)local_58);
    uVar3 = uVar4;
    if ((-1 < iVar1) && (local_res18[0] != 0)) {
      uVar2 = FID_conflict_StringCchCopyW(param_2,0xfd,*local_res10);
      uVar3 = (ulonglong)uVar2;
    }
    pv = local_res10;
    uVar5 = (ulonglong)local_res18[0];
    if (local_res18[0] != 0) {
      do {
        CoTaskMemFree((LPVOID)pv[uVar4]);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    CoTaskMemFree(pv);
    (**(code **)(lRam0000000000000000 + 0x10))();
  }
  return uVar3;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140021808(short *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  undefined8 in_stack_00000000;
  undefined auStack120 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined local_30 [24];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStack120;
  *param_1 = 0;
  local_58 = (longlong *)0x0;
  local_18 = 0;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.ApplicationModel.DataTransfer.Clipboard",0x2f,local_30,&local_18);
  uVar3 = local_18;
  if (-1 < (int)DVar4) {
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    iVar5 = RoGetActivationFactory(uVar3,&DAT_14002ab40,&local_58);
    if (iVar5 < 0) {
      FUN_1400025bc(in_stack_00000000,0x9e,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      local_38 = (longlong *)0x0;
      iVar5 = (**(code **)(*local_58 + 0x30))();
      if (iVar5 < 0) {
        FUN_1400025bc(in_stack_00000000,0xa0,
                      "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
      }
      else {
        local_40 = (longlong *)0x0;
        iVar5 = (**(code **)(*local_38 + 0x30))();
        if (iVar5 < 0) {
          FUN_1400025bc(in_stack_00000000,0xa2,
                        "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
        }
        else {
          local_48 = (longlong *)0x0;
          iVar5 = (**(code **)*local_40)();
          plVar2 = local_48;
          if (iVar5 < 0) {
            FUN_1400025bc(in_stack_00000000,0xa4,
                          "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
          }
          else {
            WindowsDeleteString(0);
            local_50 = 0;
            iVar5 = (**(code **)(*plVar2 + 0x30))();
            if (iVar5 < 0) {
              FUN_1400025bc(in_stack_00000000,0xa7,
                            "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
            }
            else {
              lVar6 = WindowsGetStringRawBuffer(local_50,0);
              FID_conflict_StringCchCopyW(param_1,0xfd,lVar6);
            }
            WindowsDeleteString(local_50);
            local_50 = 0;
          }
          plVar2 = local_48;
          if (local_48 != (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        plVar2 = local_40;
        if (local_40 != (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar2 = local_38;
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_10 ^ (ulonglong)auStack120);
    return;
  }
  FUN_140020bc8(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Could not reconcile some variable overlaps

void FUN_140021a94(undefined *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000000;
  undefined auStack120 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined2 local_48;
  longlong *local_40;
  code *local_38;
  undefined8 local_30;
  undefined local_28;
  char local_27;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack120;
  local_50 = 0;
  local_48 = 0;
  if (param_1 == (undefined *)0x0) {
    WindowsDeleteString();
    uVar6 = 0;
    param_1 = &DAT_140027b40;
LAB_140021b13:
    iVar4 = WindowsCreateString(param_1,uVar6,&local_50);
    if (-1 < iVar4) {
      local_28 = 0;
      local_38 = FUN_14000c500;
      local_30 = local_50;
      local_27 = local_48._1_1_ + '\x01';
      local_50 = 0;
      local_48 = CONCAT11(local_48._1_1_,1);
      FUN_1400222f4(&local_40,&local_38);
      WindowsDeleteString(local_30);
      local_58 = (longlong *)0x0;
      local_20 = 0;
      DVar5 = WindowsCreateStringReference
                        (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,&local_38,
                         &local_20);
      uVar3 = local_20;
      if ((int)DVar5 < 0) {
        FUN_140020bc8(DVar5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      iVar4 = RoGetActivationFactory(uVar3,&DAT_14002a900,&local_58);
      if (iVar4 < 0) {
        FUN_1400025bc(in_stack_00000000,0xc3,
                      "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
      }
      else if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x88))();
      }
      plVar2 = local_58;
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
      }
      goto LAB_140021c6d;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(short *)(param_1 + uVar6 * 2) != 0);
    if (uVar6 < 0x100000000) {
      WindowsDeleteString(0);
      uVar6 = uVar6 & 0xffffffff;
      goto LAB_140021b13;
    }
  }
  FUN_1400025bc(in_stack_00000000,0xae,
                "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
LAB_140021c6d:
  WindowsDeleteString(local_50);
  FUN_140023f70(local_18 ^ (ulonglong)auStack120);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140021cb0(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined8 in_stack_00000000;
  undefined auStack88 [32];
  longlong *local_38;
  undefined local_30 [24];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStack88;
  local_38 = (longlong *)0x0;
  local_18 = 0;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_30,
                     &local_18);
  uVar3 = local_18;
  if (-1 < (int)DVar4) {
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    iVar5 = RoGetActivationFactory(uVar3,&DAT_14002a900,&local_38);
    if (iVar5 < 0) {
      FUN_1400025bc(in_stack_00000000,0xca,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      (**(code **)(*local_38 + 0x90))();
    }
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_10 ^ (ulonglong)auStack88);
    return;
  }
  FUN_140020bc8(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140021db8(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined auStack104 [32];
  undefined local_48;
  longlong *local_40;
  undefined local_38 [24];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack104;
  local_40 = (longlong *)0x0;
  local_20 = 0;
  local_48 = 0;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_38,
                     &local_20);
  uVar3 = local_20;
  if (-1 < (int)DVar4) {
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    iVar5 = RoGetActivationFactory(uVar3,&DAT_14002a9e0,&local_40);
    if (-1 < iVar5) {
      (**(code **)(*local_40 + 0x70))();
    }
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_18 ^ (ulonglong)auStack104);
    return;
  }
  FUN_140020bc8(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140021ea0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 in_stack_00000000;
  undefined auStack104 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined local_38 [24];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack104;
  local_40 = 0;
  plVar6 = (longlong *)FUN_14002454c(0x18);
  lVar2 = DAT_1400325c8;
  plVar7 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR__o__purecall_1400262d8;
    *plVar6 = (longlong)&PTR_FUN_1400262b0;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)lVar2 + 8))();
    }
    plVar6[2] = (longlong)FUN_140011c00;
    *plVar6 = (longlong)&PTR_FUN_140026450;
    plVar7 = plVar6;
  }
  local_48 = (longlong *)0x0;
  local_20 = 0;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_38,
                     &local_20);
  uVar3 = local_20;
  if ((int)DVar4 < 0) {
    FUN_140020bc8(DVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  iVar5 = RoGetActivationFactory(uVar3,&DAT_14002a9e0,&local_48);
  if (iVar5 < 0) {
    FUN_1400025bc(in_stack_00000000,0xf6,
                  "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
  }
  else if (plVar7 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar6 + 0x10))();
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  FUN_140023f70(local_18 ^ (ulonglong)auStack104);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_14002203c(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined8 in_stack_00000000;
  undefined auStack88 [32];
  longlong *local_38;
  undefined local_30 [24];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStack88;
  local_38 = (longlong *)0x0;
  local_18 = 0;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_30,
                     &local_18);
  uVar3 = local_18;
  if (-1 < (int)DVar4) {
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    iVar5 = RoGetActivationFactory(uVar3,&DAT_14002a9e0,&local_38);
    if (iVar5 < 0) {
      FUN_1400025bc(in_stack_00000000,0xfd,
                    "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
    }
    else {
      (**(code **)(*local_38 + 0x68))();
    }
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_10 ^ (ulonglong)auStack88);
    return;
  }
  FUN_140020bc8(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140022144(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined auStack120 [32];
  longlong *local_58 [2];
  longlong local_48 [2];
  undefined local_38 [24];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140030470 ^ (ulonglong)auStack120;
  local_58[0] = (longlong *)0x0;
  local_20 = 0;
  local_48[0] = param_1;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.Security.EnterpriseData.ProtectionPolicyManager",0x37,local_38,
                     &local_20);
  uVar3 = local_20;
  if (-1 < (int)DVar4) {
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    iVar5 = RoGetActivationFactory(uVar3,&DAT_14002a9e0,local_58);
    plVar2 = local_58[0];
    if (-1 < iVar5) {
      FUN_140022274((longlong)local_38,local_48);
      (**(code **)(*plVar2 + 0x48))();
    }
    plVar2 = local_58[0];
    if (local_58[0] != (longlong *)0x0) {
      local_58[0] = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_140023f70(local_18 ^ (ulonglong)auStack120);
    return;
  }
  FUN_140020bc8(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



longlong FUN_140022274(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar6;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar4;
    uVar4 = uVar5 + 1;
  } while (*(short *)(*param_2 + uVar4 * 2) != 0);
  if (0xffffffff < uVar4) {
    FUN_140020bc8(0x80070216);
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  iVar2 = (int)uVar5;
  if (iVar2 + 2U < (uint)uVar4) {
    FUN_140020bc8(0x80070216);
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  DVar3 = WindowsCreateStringReference(*param_2,iVar2 + 1,param_1);
  if (-1 < (int)DVar3) {
    return param_1;
  }
  FUN_140020bc8(DVar3);
  pcVar1 = (code *)swi(3);
  lVar6 = (*pcVar1)();
  return lVar6;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 * FUN_1400222f4(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14002454c(0x28);
  lVar1 = DAT_1400325c8;
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__o__purecall_1400262d8;
    *puVar2 = &PTR_FUN_1400264c0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)lVar1 + 8))();
    }
    puVar2[2] = *param_2;
    puVar2[3] = param_2[1];
    param_2[1] = 0;
    *(undefined *)(puVar2 + 4) = *(undefined *)(param_2 + 2);
    *(undefined *)((longlong)puVar2 + 0x21) = 0;
    *(undefined *)(param_2 + 2) = 1;
    *puVar2 = &PTR_FUN_140026428;
    puVar3 = puVar2;
  }
  *param_1 = puVar3;
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 * FUN_1400223b4(undefined8 *param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  LPUNKNOWN pIVar3;
  HRESULT HVar4;
  LPUNKNOWN local_res8;
  
  local_res8 = (LPUNKNOWN)0x0;
  pplVar1 = (longlong **)(param_1 + 3);
  *param_1 = &PTR__o__purecall_140026478;
  *pplVar1 = (longlong *)0x0;
  HVar4 = CoCreateFreeThreadedMarshaler((LPUNKNOWN)0x0,&local_res8);
  if (-1 < HVar4) {
    plVar2 = *pplVar1;
    if (plVar2 != (longlong *)0x0) {
      *pplVar1 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (*local_res8->lpVtbl->QueryInterface)();
  }
  pIVar3 = local_res8;
  if (local_res8 != (LPUNKNOWN)0x0) {
    local_res8 = (LPUNKNOWN)0x0;
    (*pIVar3->lpVtbl->Release)();
  }
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_140022460(longlong *param_1)

{
  int iVar1;
  
  do {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 == 0x7fffffff) goto LAB_140022485;
    LOCK();
  } while (iVar1 != *(int *)((longlong)param_1 + 0xc));
  *(int *)((longlong)param_1 + 0xc) = iVar1 + -1;
LAB_140022485:
  if (iVar1 + -1 == 0) {
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x20))();
    }
    if (DAT_1400325c8 != 0) {
      (**(code **)(*(longlong *)DAT_1400325c8 + 0x10))();
    }
  }
  return iVar1 + -1;
}



int FUN_1400224d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0x7fffffff;
  if (iVar1 != 0x7fffffff) {
    do {
      LOCK();
      if (iVar1 == *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar1 + 1;
        break;
      }
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar1 != 0x7fffffff);
    if (iVar1 != 0x7fffffff) {
      iVar2 = iVar1 + 1;
    }
  }
  return iVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_140022510(longlong *param_1,int *param_2,longlong **param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *param_3 = (longlong *)0x0;
  if (((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
      (param_2[3] == 0x46000000)) ||
     (((*param_2 == -0x3af7670a && (param_2[1] == 0x5f47c536)) &&
      ((param_2[2] == 0x2c8b8385 && (param_2[3] == 0x3ba13824)))))) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))();
  }
  else {
    uVar1 = 0x80004002;
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_140022590(longlong param_1)

{
  (**(code **)(param_1 + 0x10))();
  return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1400225b0(longlong *param_1,int *param_2,longlong **param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *param_3 = (longlong *)0x0;
  if (((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
      (param_2[3] == 0x46000000)) ||
     (((*param_2 == 0x4ff76357 && (param_2[1] == 0x573e6805)) &&
      ((param_2[2] == 0x592c7da6 && (param_2[3] == -0x48fbafb1)))))) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))();
  }
  else {
    uVar1 = 0x80004002;
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x000140022780)
// WARNING: Removing unreachable block (ram,0x0001400226d4)
// WARNING: Removing unreachable block (ram,0x0001400227ea)
// WARNING: Removing unreachable block (ram,0x00014002270a)
// WARNING: Removing unreachable block (ram,0x0001400227ad)
// WARNING: Removing unreachable block (ram,0x000140022757)
// WARNING: Removing unreachable block (ram,0x0001400227d4)
// WARNING: Removing unreachable block (ram,0x0001400227e5)
// WARNING: Removing unreachable block (ram,0x00014002268b)

ulonglong FUN_140022630(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_stack_00000000;
  
  uVar3 = 0;
  uVar1 = (**(code **)(*param_3 + 0x30))();
  if ((int)uVar1 < 0) {
    iVar2 = 0xb2;
  }
  else {
    uVar1 = (**(code **)(lRam0000000000000000 + 0x38))();
    if (-1 < (int)uVar1) goto LAB_140022794;
    iVar2 = 0xb4;
  }
  FUN_1400025bc(in_stack_00000000,iVar2,
                "shell\\osshell\\accesory\\common\\edpapphelper\\edpapphelper.cpp");
  uVar3 = (ulonglong)uVar1;
LAB_140022794:
  if ((int)uVar3 < 0) {
    FUN_140020d94(uVar3);
  }
  return uVar3;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x000140022a58)
// WARNING: Could not reconcile some variable overlaps

DWORD FUN_140022824(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  HANDLE pvVar7;
  DWORD local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  HANDLE local_38;
  undefined8 local_30;
  
  local_res18 = param_3;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_res20 = (longlong *)0x0;
  plVar6 = (longlong *)FUN_14002454c(0x40);
  if (plVar6 == (longlong *)0x0) {
    local_res10 = 0x8007000e;
  }
  else {
    plVar1 = plVar6 + 1;
    *plVar6 = (longlong)&PTR__o__purecall_1400262d8;
    FUN_1400223b4(plVar1);
    lVar3 = DAT_1400325c8;
    *plVar6 = (longlong)&PTR_FUN_1400263d8;
    *plVar1 = (longlong)&PTR_FUN_1400262f8;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = 1;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)lVar3 + 8))();
    }
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[7] = 0;
    *plVar6 = (longlong)&PTR_FUN_1400263b0;
    *plVar1 = (longlong)&PTR_FUN_1400262f8;
    pvVar7 = CreateEventExW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0,0,0x1f0003);
    plVar6[7] = (longlong)pvVar7;
    if (pvVar7 == (HANDLE)0x0) {
      DVar4 = GetLastError();
      local_res10 = DVar4 & 0xffff | 0x80070000;
      if ((int)DVar4 < 1) {
        local_res10 = DVar4;
      }
    }
    else {
      local_res10 = 0;
    }
    if ((int)local_res10 < 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else {
      (**(code **)(*plVar6 + 8))();
      local_res20 = plVar6;
      (**(code **)(*plVar6 + 0x10))();
      local_res10 = 0;
    }
    if ((-1 < (int)local_res10) &&
       (local_res10 = (**(code **)(*param_1 + 0x30))(), -1 < (int)local_res10)) {
      bVar2 = false;
      local_38 = (HANDLE)local_res20[7];
      local_30 = 0;
      local_res10 = CoWaitForMultipleHandles(8,0xffffffff,1,&local_38,(LPDWORD)&local_res18);
      if ((-1 < (int)local_res10) && ((int)local_res18 != 0)) {
        local_res10 = 0x800704c7;
        bVar2 = true;
      }
      if ((bVar2) && (iVar5 = (**(code **)*param_1)(), -1 < iVar5)) {
        (**(code **)(lRam0000000000000000 + 0x48))();
      }
      if (((-1 < (int)local_res10) && (*(int *)(local_res20 + 6) != 1)) &&
         (iVar5 = (**(code **)*param_1)(), -1 < iVar5)) {
        (**(code **)(lRam0000000000000000 + 0x40))();
      }
    }
  }
  plVar6 = local_res20;
  if (local_res20 != (longlong *)0x0) {
    local_res20 = (longlong *)0x0;
    (**(code **)(*plVar6 + 0x10))();
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))();
  }
  return local_res10;
}



undefined8 FUN_140022ab0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x30) = param_3;
  SetEvent(*(HANDLE *)(param_1 + 0x38));
  return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x000140022d0c)
// WARNING: Could not reconcile some variable overlaps

DWORD FUN_140022ad8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  HANDLE pvVar7;
  DWORD local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  HANDLE local_38;
  undefined8 local_30;
  
  local_res18 = param_3;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_res20 = (longlong *)0x0;
  plVar6 = (longlong *)FUN_14002454c(0x40);
  if (plVar6 == (longlong *)0x0) {
    local_res10 = 0x8007000e;
  }
  else {
    plVar1 = plVar6 + 1;
    *plVar6 = (longlong)&PTR__o__purecall_1400262d8;
    FUN_1400223b4(plVar1);
    lVar3 = DAT_1400325c8;
    *plVar6 = (longlong)&PTR_FUN_140026388;
    *plVar1 = (longlong)&PTR_FUN_140026340;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = 1;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)lVar3 + 8))();
    }
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[7] = 0;
    *plVar6 = (longlong)&PTR_FUN_140026400;
    *plVar1 = (longlong)&PTR_FUN_140026340;
    pvVar7 = CreateEventExW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0,0,0x1f0003);
    plVar6[7] = (longlong)pvVar7;
    if (pvVar7 == (HANDLE)0x0) {
      DVar4 = GetLastError();
      local_res10 = DVar4 & 0xffff | 0x80070000;
      if ((int)DVar4 < 1) {
        local_res10 = DVar4;
      }
    }
    else {
      local_res10 = 0;
    }
    if ((int)local_res10 < 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else {
      (**(code **)(*plVar6 + 8))();
      local_res20 = plVar6;
      (**(code **)(*plVar6 + 0x10))();
      local_res10 = 0;
    }
    if ((-1 < (int)local_res10) &&
       (local_res10 = (**(code **)(*param_1 + 0x30))(), -1 < (int)local_res10)) {
      bVar2 = false;
      local_38 = (HANDLE)local_res20[7];
      local_30 = 0;
      local_res10 = CoWaitForMultipleHandles(8,0xffffffff,1,&local_38,(LPDWORD)&local_res18);
      if ((-1 < (int)local_res10) && ((int)local_res18 != 0)) {
        local_res10 = 0x800704c7;
        bVar2 = true;
      }
      if ((bVar2) && (iVar5 = (**(code **)*param_1)(), -1 < iVar5)) {
        (**(code **)(lRam0000000000000000 + 0x48))();
      }
      if (((-1 < (int)local_res10) && (*(int *)(local_res20 + 6) != 1)) &&
         (iVar5 = (**(code **)*param_1)(), -1 < iVar5)) {
        (**(code **)(lRam0000000000000000 + 0x40))();
      }
    }
  }
  plVar6 = local_res20;
  if (local_res20 != (longlong *)0x0) {
    local_res20 = (longlong *)0x0;
    (**(code **)(*plVar6 + 0x10))();
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))();
  }
  return local_res10;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 * FUN_140022d70(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_1400263b0;
  param_1[1] = &PTR_FUN_1400262f8;
  CloseHandle((HANDLE)param_1[7]);
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xc0000001;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    _o_free(param_1);
  }
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 * FUN_140022df0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_140026400;
  param_1[1] = &PTR_FUN_140026340;
  CloseHandle((HANDLE)param_1[7]);
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xc0000001;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    _o_free(param_1);
  }
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_140022e70(longlong *param_1)

{
  int iVar1;
  
  do {
    iVar1 = *(int *)((longlong)param_1 + 0x2c);
    if (iVar1 == 0x7fffffff) goto LAB_140022e95;
    LOCK();
  } while (iVar1 != *(int *)((longlong)param_1 + 0x2c));
  *(int *)((longlong)param_1 + 0x2c) = iVar1 + -1;
LAB_140022e95:
  if (iVar1 + -1 == 0) {
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x20))();
    }
    if (DAT_1400325c8 != 0) {
      (**(code **)(*(longlong *)DAT_1400325c8 + 0x10))();
    }
  }
  return iVar1 + -1;
}



int FUN_140022ee0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = 0x7fffffff;
  if (iVar1 != 0x7fffffff) {
    do {
      LOCK();
      if (iVar1 == *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x2c) = iVar1 + 1;
        break;
      }
      iVar1 = *(int *)(param_1 + 0x2c);
    } while (iVar1 != 0x7fffffff);
    if (iVar1 != 0x7fffffff) {
      iVar2 = iVar1 + 1;
    }
  }
  return iVar2;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_140022f20(longlong *param_1,int *param_2,longlong **param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *param_3 = (longlong *)0x0;
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)
     ) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))();
  }
  else {
    if ((((*param_2 == 0x2918ffea) && (param_2[1] == 0x53e2e091)) &&
        ((param_2[2] == 0x7c61e5bd && (param_2[3] == -0x1274c65)))) ||
       (((param_1 = param_1 + 1, *param_2 == -0x6b15d46c && (param_2[1] == 0x49e0e9cc)) &&
        ((param_2[2] == 0x64eeffc0 && (param_2[3] == -0x6fa47036)))))) {
      *param_3 = param_1;
    }
    else {
      if ((((*param_2 == 3) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
         (param_2[3] == 0x46000000)) {
        *param_3 = param_1;
      }
      else {
        iVar1 = -0x7fffbffe;
      }
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    (**(code **)(**param_3 + 8))();
  }
  return iVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_140023030(longlong *param_1,int *param_2,longlong **param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *param_3 = (longlong *)0x0;
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)
     ) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))();
  }
  else {
    if ((((*param_2 == -0x1ade376c) && (param_2[1] == 0x59462c26)) &&
        ((param_2[2] == 0x5e2b619e && (param_2[3] == -0x12fe72e8)))) ||
       (((param_1 = param_1 + 1, *param_2 == -0x6b15d46c && (param_2[1] == 0x49e0e9cc)) &&
        ((param_2[2] == 0x64eeffc0 && (param_2[3] == -0x6fa47036)))))) {
      *param_3 = param_1;
    }
    else {
      if ((((*param_2 == 3) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
         (param_2[3] == 0x46000000)) {
        *param_3 = param_1;
      }
      else {
        iVar1 = -0x7fffbffe;
      }
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    (**(code **)(**param_3 + 8))();
  }
  return iVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

longlong FUN_140023140(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0xc0000001;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    _o_free(param_1);
  }
  return param_1;
}



longlong FUN_1400231a0(longlong param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0xc0000001;
  if ((param_2 & 1) != 0) {
    _o_free();
  }
  return param_1;
}



longlong FUN_1400231d0(longlong param_1,uint param_2)

{
  WindowsDeleteString(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xc0000001;
  if ((param_2 & 1) != 0) {
    _o_free(param_1);
  }
  return param_1;
}



longlong FUN_140023220(longlong param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0xc0000001;
  if ((param_2 & 1) != 0) {
    _o_free();
  }
  return param_1;
}



void FUN_140023250(longlong param_1,int *param_2,longlong **param_3)

{
  FUN_140023030((longlong *)(param_1 + -8),param_2,param_3);
  return;
}



void FUN_140023260(longlong param_1,int *param_2,longlong **param_3)

{
  FUN_140022f20((longlong *)(param_1 + -8),param_2,param_3);
  return;
}



void FUN_140023270(longlong param_1)

{
  FUN_140022e70((longlong *)(param_1 + -8));
  return;
}



void FUN_140023280(longlong param_1)

{
  FUN_140022ee0(param_1 + -8);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140023290(undefined8 param_1,HMODULE *param_2)

{
  longlong *plVar1;
  int iVar2;
  LPCWSTR lpLibFileName;
  HMODULE pHVar3;
  undefined auStack120 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140030470 ^ (ulonglong)auStack120;
  *param_2 = (HMODULE)0x0;
  iVar2 = RoInitialize(0);
  if (-1 < iVar2) {
    local_48 = (longlong *)0x0;
    iVar2 = WindowsCreateStringReference(L"Windows.ApplicationModel.Resources.Core.ResourceManager")
    ;
    if (iVar2 < 0) {
      RaiseException(0xc000000d,1,0,(ULONG_PTR *)0x0);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    iVar2 = RoGetActivationFactory(local_30,&DAT_14002ab60,&local_48);
    if (-1 < iVar2) {
      local_40 = (longlong *)0x0;
      iVar2 = (**(code **)(*local_48 + 0x30))();
      if (-1 < iVar2) {
        local_50 = (longlong *)0x0;
        iVar2 = (**(code **)(*local_40 + 0x30))();
        plVar1 = local_50;
        if ((-1 < iVar2) && (local_50 != (longlong *)0x0)) {
          local_58 = (longlong *)0x0;
          WindowsCreateStringReference(L"Files/Resources/notepad.exe.mui",0x1f,local_28,&local_30);
          iVar2 = (**(code **)(*plVar1 + 0x38))();
          plVar1 = local_58;
          if ((-1 < iVar2) && (local_58 != (longlong *)0x0)) {
            WindowsDeleteString(0);
            local_38 = 0;
            iVar2 = (**(code **)(*plVar1 + 0x50))();
            if ((-1 < iVar2) && (local_38 != 0)) {
              lpLibFileName = (LPCWSTR)WindowsGetStringRawBuffer();
              pHVar3 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x22);
              *param_2 = pHVar3;
              RoUninitialize();
            }
            if (local_38 != 0) {
              WindowsDeleteString();
            }
          }
          plVar1 = local_58;
          if (local_58 != (longlong *)0x0) {
            local_58 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
        }
        plVar1 = local_50;
        if (local_50 != (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    plVar1 = local_48;
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  FUN_140023f70(local_10 ^ (ulonglong)auStack120);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140023564)

DWORD FUN_14002352c(undefined8 param_1,LPSTR param_2,undefined8 param_3,dword *param_4,
                   dword *param_5)

{
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  
  *param_4 = 0xd3fde383;
  *param_5 = 0x38000;
  DVar1 = GetModuleFileNameA((HMODULE)&IMAGE_DOS_HEADER_140000000,param_2,0x104);
  if (DVar1 != 0) {
    for (uVar3 = DVar1 - 1;
        (uVar2 = DVar1 - 1, uVar3 != 0 && (uVar2 = uVar3, param_2[uVar3] != '\\'));
        uVar3 = uVar3 - 1) {
    }
    if (uVar2 != 0x103) {
      memmove(param_2,param_2 + (uVar2 + 1),(ulonglong)(0x103 - uVar2));
    }
    DVar1 = 1;
  }
  return DVar1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400235d8(IMAGE_DOS_HEADER *param_1,undefined8 param_2,undefined8 param_3)

{
  REGHANDLE RVar1;
  char cVar2;
  BOOLEAN BVar3;
  DWORD DVar4;
  int iVar5;
  ULONG UVar6;
  IMAGE_DOS_HEADER *pIVar7;
  longlong lVar8;
  uint uVar9;
  IMAGE_DOS_HEADER *pIVar10;
  DWORD DVar11;
  DWORD DVar12;
  DWORD DVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined auStackY616 [32];
  uint local_238;
  DWORD local_234;
  uint local_230 [2];
  undefined8 local_228;
  DWORD local_220;
  undefined4 local_21c;
  undefined4 local_218;
  DWORD local_214;
  undefined local_210 [8];
  undefined4 local_208;
  undefined4 local_204;
  _EVENT_DATA_DESCRIPTOR local_1f8 [2];
  undefined4 *local_1d8;
  undefined8 local_1d0;
  DWORD *local_1c8;
  undefined8 local_1c0;
  uint *local_1b8;
  undefined8 local_1b0;
  uint *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  int local_190;
  undefined4 local_18c;
  undefined4 *local_188;
  undefined8 local_180;
  undefined4 *local_178;
  undefined8 local_170;
  DWORD *local_168;
  undefined8 local_160;
  DWORD *local_158;
  undefined8 local_150;
  char local_148;
  char local_147 [271];
  ulonglong local_38;
  
  local_38 = DAT_140030470 ^ (ulonglong)auStackY616;
  uVar15 = 0;
  pIVar10 = (IMAGE_DOS_HEADER *)&DAT_1400325d8;
  DVar11 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1400325d8);
  pIVar7 = DAT_1400325e0;
  if (DAT_1400325e0 == (IMAGE_DOS_HEADER *)0x0) {
LAB_14002364d:
    pIVar7 = (IMAGE_DOS_HEADER *)LocalAlloc(0x40,0x20);
    if (pIVar7 == (IMAGE_DOS_HEADER *)0x0) goto LAB_1400239b9;
    *(IMAGE_DOS_HEADER **)pIVar7 = param_1;
    DVar4 = GetTickCount();
    *(DWORD *)&pIVar7->e_cparhdr = DVar4 - 0xea61;
    *(undefined8 *)&pIVar7->e_maxalloc = 0;
    *(IMAGE_DOS_HEADER **)&pIVar7->e_lfarlc = DAT_1400325e0;
    pIVar10 = DAT_1400325e0;
    DAT_1400325e0 = pIVar7;
  }
  else {
    do {
      if (*(IMAGE_DOS_HEADER **)pIVar7 == param_1) break;
      pIVar7 = *(IMAGE_DOS_HEADER **)&pIVar7->e_lfarlc;
    } while (pIVar7 != (IMAGE_DOS_HEADER *)0x0);
    if (pIVar7 == (IMAGE_DOS_HEADER *)0x0) goto LAB_14002364d;
  }
  *(int *)&pIVar7->e_maxalloc = *(int *)&pIVar7->e_maxalloc + 1;
  *(int *)&pIVar7->e_sp = *(int *)&pIVar7->e_sp + 1;
  DVar4 = GetTickCount();
  if (60000 < DVar4 - *(int *)&pIVar7->e_cparhdr) {
    DVar4 = GetTickCount();
    *(DWORD *)&pIVar7->e_cparhdr = DVar4;
    DVar4 = FUN_14002352c(pIVar10,&local_148,param_3,local_230,&local_238);
    DVar13 = DVar11;
    if ((((DVar4 != 0) && (&IMAGE_DOS_HEADER_140000000 <= param_1)) &&
        ((IMAGE_DOS_HEADER *)(IMAGE_DOS_HEADER_140000000.e_magic + 1) <=
         (IMAGE_DOS_HEADER *)(IMAGE_DOS_HEADER_140000000.e_magic + local_238))) &&
       (param_1 <= (IMAGE_DOS_HEADER *)(IMAGE_DOS_HEADER_140000000.e_magic + local_238))) {
      DVar13 = (int)param_1 + 0xc0000000;
    }
    DVar12 = DVar11;
    local_234 = DVar4;
    if ((*(int *)&pIVar7->e_sp == 1) &&
       (iVar5 = FUN_140001380(&DAT_140030230), DVar11 = 0, DVar12 = 0, iVar5 == 0)) {
      DVar11 = 0;
      DVar12 = 0;
      if (_DAT_140030230 != 0) {
        DVar11 = 1;
        local_210._0_4_ = 0x1d1727a6;
        local_210._4_4_ = 0x4e2792c8;
        local_208 = 0x8b0f69bc;
        local_204 = 0x9d548c45;
        if (local_148 != '\0') {
          pcVar14 = &local_148;
          uVar16 = uVar15;
          do {
            cVar2 = _o_toupper();
            local_210[uVar15] = local_210[uVar15] + cVar2;
            pcVar14 = pcVar14 + 1;
            uVar9 = (int)uVar16 + 1;
            uVar16 = (ulonglong)(-(uint)(uVar9 < 0x10) & uVar9);
            uVar15 = -(ulonglong)(uVar9 < 0x10) & uVar15 + 1;
            DVar4 = local_234;
          } while (*pcVar14 != '\0');
        }
        UVar6 = EventRegister((LPCGUID)local_210,(PENABLECALLBACK)0x0,(PVOID)0x0,&local_228);
        DVar12 = DVar11;
        if (UVar6 == 0) {
          BVar3 = EventProviderEnabled(CONCAT44(local_228._4_4_,(undefined4)local_228),'\0',0);
          DVar12 = (DWORD)(BVar3 == '\0');
          EventUnregister(CONCAT44(local_228._4_4_,(undefined4)local_228));
        }
      }
      RVar1 = DAT_140030250;
      DAT_140030250 = 0;
      _DAT_140030230 = 0;
      EventUnregister(RVar1);
    }
    iVar5 = FUN_140001380(&DAT_140030268);
    if (iVar5 == 0) {
      if (((5 < _DAT_140030268) && ((_DAT_140030278 & 0x400000000000) != 0)) &&
         ((DAT_140030280 & 0x400000000000) == DAT_140030280)) {
        local_21c = *(undefined4 *)&pIVar7->e_sp;
        local_218 = *(undefined4 *)&pIVar7->e_maxalloc;
        local_238 = local_238 & -(uint)(DVar4 != 0);
        local_228._0_4_ = 10;
        local_150 = 4;
        local_158 = &local_234;
        local_230[0] = local_230[0] & -(uint)(DVar4 != 0);
        local_168 = &local_220;
        local_198 = &local_148;
        local_160 = 4;
        local_178 = &local_21c;
        local_170 = 4;
        local_188 = &local_218;
        if (DVar4 == 0) {
          local_198 = "<unknown>";
        }
        local_180 = 4;
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (local_198[lVar8] != '\0');
        local_190 = (int)lVar8 + 1;
        local_1a8 = &local_238;
        local_18c = 0;
        local_1b8 = local_230;
        local_1a0 = 4;
        local_1c8 = &local_214;
        local_1b0 = 4;
        local_1d8 = (undefined4 *)&local_228;
        local_1c0 = 4;
        local_1d0 = 4;
        local_234 = DVar11;
        local_220 = DVar12;
        local_214 = DVar13;
        _tlgWriteTransfer_EtwWriteTransfer
                  ((longlong)&DAT_140030268,&DAT_14002b3c8,(LPCGUID)0x0,(LPCGUID)0x0,0xb,local_1f8);
      }
      RVar1 = DAT_140030288;
      DAT_140030288 = 0;
      _DAT_140030268 = 0;
      EventUnregister(RVar1);
    }
    if ((DVar11 != 0) && (DVar12 != 0)) {
      Sleep(1000);
    }
    *(undefined4 *)&pIVar7->e_maxalloc = 0;
  }
LAB_1400239b9:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1400325d8);
  FUN_140023f70(local_38 ^ (ulonglong)auStackY616);
  return;
}



void FUN_140023a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  IMAGE_DOS_HEADER *in_stack_00000000;
  
  FUN_1400235d8(in_stack_00000000,param_2,param_3);
  return;
}



void FUN_140023a20(undefined8 param_1,undefined8 param_2)

{
  ResolveDelayLoadedAPI(&IMAGE_DOS_HEADER_140000000,param_1,0,DelayLoadFailureHook_exref,param_2,0);
  return;
}



undefined8 FUN_140023a70(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140023a8c();
  *puVar1 = *puVar1 | 0x20;
  return 0;
}



undefined * FUN_140023a8c(void)

{
  return &DAT_140030c70;
}



void DelayLoad_OpenProcessToken
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&OpenProcessToken_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_GetTokenInformation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&GetTokenInformation_exref)
  ;
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_DuplicateEncryptionInfoFile
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&DuplicateEncryptionInfoFile_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegSetValueExW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegSetValueExW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegQueryValueExW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegQueryValueExW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegCreateKeyW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegCreateKeyW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegCloseKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegCloseKey_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegOpenKeyExW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegOpenKeyExW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegCreateKeyExW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegCreateKeyExW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegDeleteKeyExW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegDeleteKeyExW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegQueryInfoKeyW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegQueryInfoKeyW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_RegEnumValueW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&RegEnumValueW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_EventSetInformation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&EventSetInformation_exref)
  ;
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_EventRegister
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&EventRegister_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



ULONG EventRegister(LPCGUID ProviderId,PENABLECALLBACK EnableCallback,PVOID CallbackContext,
                   PREGHANDLE RegHandle)

{
  ULONG UVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140023c0f. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = EventRegister(ProviderId,EnableCallback,CallbackContext,RegHandle);
  return UVar1;
}



void DelayLoad_EventUnregister
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&EventUnregister_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



ULONG EventUnregister(REGHANDLE RegHandle)

{
  ULONG UVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140023c2d. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = EventUnregister(RegHandle);
  return UVar1;
}



void DelayLoad_EventWriteTransfer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&EventWriteTransfer_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_IsTextUnicode
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&IsTextUnicode_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



undefined8 FUN_140023c60(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140023a8c();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_140023c84();
  *puVar1 = *puVar1 | 2;
  return 0;
}



undefined * FUN_140023c84(void)

{
  return &DAT_140030c80;
}



undefined8 FUN_140023ca0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140023a8c();
  *puVar1 = *puVar1 | 0x18;
  puVar1 = (ulonglong *)FUN_140023c84();
  *puVar1 = *puVar1 | 4;
  return 0;
}



void FUN_140023cd0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  _o__set_app_type(2);
  uVar4 = FUN_14002463c();
  _o__set_fmode(uVar4 & 0xffffffff);
  uVar5 = FUN_140024630();
  puVar6 = (undefined4 *)_o___p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_140024314(1);
  if ((char)uVar5 != '\0') {
    FUN_140024920();
    atexit(FUN_140024970);
    uVar4 = FUN_140024624();
    iVar3 = _o__configure_wide_argv(uVar4 & 0xffffffff);
    if (iVar3 == 0) {
      FUN_140024648();
      _guard_check_icall();
      _guard_check_icall();
      uVar4 = FUN_140024630();
      _o__configthreadlocale(uVar4 & 0xffffffff);
      cVar2 = FUN_14002465c();
      if (cVar2 != '\0') {
        _o__initialize_wide_environment();
      }
      FUN_140024630();
      uVar5 = thunk_FUN_140024630();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_1400246d0(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 FUN_140023d80(void)

{
  FUN_14002467c();
  return 0;
}



void FUN_140023da0(void)

{
  ulonglong uVar1;
  
  FUN_1400248c8();
  uVar1 = FUN_140024630();
                    // WARNING: Could not recover jumptable at 0x000140024edc. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__set_new_mode(uVar1 & 0xffffffff);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

ulonglong entry(void)

{
  code *pcVar1;
  bool bVar2;
  WORD WVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  code **ppcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  IMAGE_DOS_HEADER *pIVar10;
  ulonglong unaff_RBX;
  
  __security_init_cookie();
  uVar6 = __scrt_initialize_crt(1);
  if ((char)uVar6 == '\0') {
    FUN_1400246d0(7);
  }
  else {
    bVar2 = false;
    uVar6 = __scrt_acquire_startup_lock();
    unaff_RBX = unaff_RBX & 0xffffffffffffff00 | uVar6 & 0xff;
    if (DAT_140031204 != 1) {
      if (DAT_140031204 == 0) {
        DAT_140031204 = 1;
        iVar4 = _initterm_e(&DAT_140027160,&DAT_140027190);
        if (iVar4 != 0) {
          return 0xff;
        }
        _initterm();
        DAT_140031204 = 2;
      }
      else {
        bVar2 = true;
      }
      __scrt_release_startup_lock((char)(uVar6 & 0xff));
      ppcVar7 = (code **)FUN_1400246a0();
      if ((*ppcVar7 != (code *)0x0) &&
         (uVar6 = __scrt_is_nonwritable_in_current_image((longlong)ppcVar7), (char)uVar6 != '\0')) {
        (**ppcVar7)();
      }
      plVar8 = (longlong *)FUN_1400246b0();
      if ((*plVar8 != 0) &&
         (uVar6 = __scrt_is_nonwritable_in_current_image((longlong)plVar8), (char)uVar6 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar8);
      }
      WVar3 = __scrt_get_show_window_mode();
      uVar9 = _o__get_wide_winmain_command_line();
      pIVar10 = &IMAGE_DOS_HEADER_140000000;
      uVar5 = FUN_14000ad6c((HMODULE)&IMAGE_DOS_HEADER_140000000,0,uVar9,(uint)WVar3);
      unaff_RBX = (ulonglong)uVar5;
      uVar6 = __scrt_is_managed_app();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          _o__cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)pIVar10 >> 8),1),'\0');
        return unaff_RBX;
      }
      goto LAB_140023f21;
    }
  }
  FUN_1400246d0(7);
LAB_140023f21:
  _o_exit(unaff_RBX & 0xffffffff);
  _o__exit(unaff_RBX & 0xffffffff);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}



void FUN_140023f70(longlong param_1)

{
  if ((param_1 == DAT_140030470) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140024000();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140023f98(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  _DAT_140031200 = IsDebuggerPresent();
  FUN_1400246c0();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  if (_DAT_140031200 == 0) {
    FUN_1400246c0();
  }
  hProcess = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x000140023fee. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140024000(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack56 [8];
  undefined auStack48 [48];
  
  puVar3 = auStack56;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack48;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14002402b;
  capture_previous_context((PCONTEXT)&DAT_140030d30);
  _DAT_140030ca0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140030dc8 = puVar3 + 0x40;
  _DAT_140030db0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140030c90 = 0xc0000409;
  _DAT_140030c94 = 1;
  _DAT_140030ca8 = 1;
  DAT_140030cb0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140030470;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140030478;
  *(undefined8 *)(puVar3 + -8) = 0x1400240cd;
  DAT_140030e28 = _DAT_140030ca0;
  FUN_140023f98((_EXCEPTION_POINTERS *)&PTR_DAT_140026000);
  return;
}



void FUN_1400240d8(void)

{
  FUN_1400240f4(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400240f4(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined auStack32 [32];
  
  puVar3 = auStack40;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack32;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14002411f;
  capture_current_context((PCONTEXT)&DAT_140030d30);
  _DAT_140030ca0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_140030dc8 = puVar3 + 0x30;
  _DAT_140030c90 = 0xc0000409;
  _DAT_140030c94 = 1;
  _DAT_140030ca8 = 1;
  DAT_140030cb0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x14002418b;
  DAT_140030e28 = _DAT_140030ca0;
  FUN_140023f98((_EXCEPTION_POINTERS *)&PTR_DAT_140026000);
  return;
}



// Library Function - Single Match
//  capture_current_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  ulonglong uVar1;
  bool bVar2;
  undefined7 extraout_var;
  longlong in_GS_OFFSET;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_1400242b2:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar1 = *(ulonglong *)(*(longlong *)(in_GS_OFFSET + 0x30) + 8);
    do {
      LOCK();
      bVar2 = DAT_140031208 == 0;
      DAT_140031208 = DAT_140031208 ^ (ulonglong)bVar2 * (DAT_140031208 ^ uVar1);
      uVar3 = !bVar2 * DAT_140031208;
      if (bVar2) goto LAB_1400242b2;
    } while (uVar1 != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}



// Library Function - Single Match
//  __scrt_initialize_crt
// 
// Library: Visual Studio 2017 Release

ulonglong __scrt_initialize_crt(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 == 0) {
    DAT_140031241 = 1;
  }
  __isa_available_init();
  uVar1 = FUN_14002465c();
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_14002465c();
    if ((char)uVar1 != '\0') {
      return uVar1 & 0xffffffffffffff00 | 1;
    }
    uVar1 = FUN_14002465c();
  }
  return uVar1 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140024314(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_140031240 == '\0') {
    if (1 < param_1) {
      FUN_1400246d0(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_140030470 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1 << 0x40 - bVar2) ^ DAT_140030470;
      _DAT_140031210 = in_RAX;
      _DAT_140031218 = in_RAX;
      _DAT_140031220 = in_RAX;
      _DAT_140031228 = in_RAX;
      _DAT_140031230 = in_RAX;
      _DAT_140031238 = in_RAX;
    }
    else {
      in_RAX = _o__initialize_onexit_table(&DAT_140031210);
      if (((int)in_RAX != 0) ||
         (in_RAX = _o__initialize_onexit_table(&DAT_140031228), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_140031240 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000140024459)
// Library Function - Single Match
//  __scrt_is_nonwritable_in_current_image
// 
// Library: Visual Studio 2019 Release

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000200; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_140000318;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)(uint)(pIVar3->Misc + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140024442;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140024442:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    DAT_140031208 = 0;
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Library: Visual Studio 2019 Release

undefined __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_140031241 == '\0') || (param_2 == '\0')) {
    FUN_14002465c();
    FUN_14002465c();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _onexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

_onexit_t _onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  _onexit_t p_Var3;
  
  bVar2 = (byte)DAT_140030470 & 0x3f;
  if (((DAT_140030470 ^ _DAT_140031210) >> bVar2 | (DAT_140030470 ^ _DAT_140031210) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _o__crt_atexit();
  }
  else {
    iVar1 = _o__register_onexit_function(&DAT_140031210,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
}



// Library Function - Single Match
//  atexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

int atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



void _o_free(void)

{
  _o_free();
  return;
}



void FUN_14002454c(__uint64 param_1)

{
  operator_new(param_1);
  return;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  uint local_res18;
  undefined4 uStackX28;
  
  if (DAT_140030470 == 0x2b992ddfa232) {
    local_res10 = (_FILETIME)0x0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter((LARGE_INTEGER *)&local_res18);
    DAT_140030470 =
         ((ulonglong)local_res18 << 0x20 ^ CONCAT44(uStackX28,local_res18) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_140030470 == 0x2b992ddfa232) {
      DAT_140030470 = 0x2b992ddfa233;
    }
  }
  DAT_140030478 = ~DAT_140030470;
  return;
}



undefined8 FUN_140024624(void)

{
  return 1;
}



undefined8 FUN_140024630(void)

{
  return 0;
}



undefined8 FUN_14002463c(void)

{
  return 0x4000;
}



void FUN_140024648(void)

{
                    // WARNING: Could not recover jumptable at 0x00014002464f. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead((PSLIST_HEADER)&DAT_140031250);
  return;
}



undefined FUN_14002465c(void)

{
  return 1;
}



void _guard_check_icall(void)

{
  return;
}



void FUN_14002467c(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140023a8c();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_140023c84();
  *puVar1 = *puVar1 | 2;
  return;
}



undefined * FUN_1400246a0(void)

{
  return &DAT_1400326a0;
}



undefined * FUN_1400246b0(void)

{
  return &DAT_140032698;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400246c0(void)

{
  _DAT_140031260 = 0;
  return;
}



void FUN_1400246d0(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined *puVar4;
  undefined8 in_stack_00000000;
  DWORD64 local_res10;
  undefined local_res18 [8];
  undefined local_res20 [8];
  undefined auStack1480 [8];
  undefined auStack1472 [232];
  undefined local_4d8 [152];
  undefined *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack1480;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack1472;
  }
  *(undefined8 *)(puVar4 + -8) = 0x140024704;
  FUN_1400246c0();
  *(undefined8 *)(puVar4 + -8) = 0x140024715;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x14002471f;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140024739;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined **)(puVar4 + 0x30) = local_res18;
    *(undefined **)(puVar4 + 0x28) = local_res20;
    *(undefined **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x14002477a;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1400247ac;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = in_stack_00000000;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1400247ce;
  BVar2 = IsDebuggerPresent();
  *(undefined **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1400247ef;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1400247fa;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14002480a;
    FUN_1400246c0();
  }
  return;
}



// Library Function - Single Match
//  __scrt_get_show_window_mode
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  undefined local_78 [64];
  WORD local_38;
  
  memset(local_78,0,0x68);
  GetStartupInfoW((LPSTARTUPINFOW)local_78);
  WVar1 = 10;
  if ((local_78[60] & 1) != 0) {
    WVar1 = local_38;
  }
  return WVar1;
}



undefined8 thunk_FUN_140024630(void)

{
  return 0;
}



// Library Function - Single Match
//  __scrt_is_managed_app
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || (*(short *)&pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || (((pHVar1 = (HMODULE)0x20b, *(short *)(piVar3 + 6) != 0x20b ||
              ((uint)piVar3[0x21] < 0xf)) || (piVar3[0x3e] == 0)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = 0x201;
  }
  return uVar2;
}



void FUN_1400248c8(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400248cf. Too many branches
                    // WARNING: Treating indirect jump as call
  SetUnhandledExceptionFilter(FUN_1400248e0);
  return;
}



undefined8 FUN_1400248e0(int **param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  piVar1 = *param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
      _o_terminate();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
  }
  return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140024920(void)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_14002b970; ppcVar1 < &DAT_14002b970; ppcVar1 = ppcVar1 + 1) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140024970(void)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_14002b980; ppcVar1 < &DAT_14002b980; ppcVar1 = ppcVar1 + 1) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000140024a82)
// WARNING: Removing unreachable block (ram,0x000140024a00)
// WARNING: Removing unreachable block (ram,0x0001400249db)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __isa_available_init
// 
// Library: Visual Studio 2017 Release

undefined8 __isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  
  DAT_140030484 = 2;
  _DAT_140030480 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] ^ 0x756e6547U | piVar1[3] ^ 0x6c65746eU | piVar1[2] ^ 0x49656e69U) == 0) {
    _DAT_140030488 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140031264 = DAT_140031264 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_140031264 = DAT_140031264 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_140030480 = 2;
    DAT_140030484 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_140030484 = 0xe;
      _DAT_140030480 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_140030480 = 5;
        DAT_140030484 = 0x2e;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_140030490 != 0;
}



void _o_free(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  _o_free();
  return;
}



// Library Function - Single Match
//  void * __ptr64 __cdecl operator new(unsigned __int64)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void * operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = (void *)_o_malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _o__callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_140024d3c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_140024d14();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



undefined8 * FUN_140024ba8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined (*) [16])(param_1 + 1) = ZEXT816(0);
  _o___std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



undefined8 * FUN_140024bec(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



undefined8 * FUN_140024c10(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined (*) [16])(param_1 + 1) = ZEXT816(0);
  _o___std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



undefined8 * FUN_140024c54(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// Library Function - Single Match
//  public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
// 
// Library: Visual Studio 2019 Release

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined (*) [16])(this + 8) = ZEXT816(0);
  _o___std_exception_copy(param_1 + 8);
  return this;
}



undefined8 * FUN_140024cd0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  _o___std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    _o_free(param_1);
  }
  return param_1;
}



void FUN_140024d14(void)

{
  undefined8 local_28 [5];
  
  FUN_140024bec(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14002c8e8);
}



void FUN_140024d3c(void)

{
  undefined8 local_28 [5];
  
  FUN_140024c54(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14002c970);
}



char * FUN_140024d70(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



undefined8 * FUN_140024d90(undefined8 *param_1,byte param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    _o_free();
  }
  return param_1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024dbc. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024dc8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024de0. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140024dec. Too many branches
                    // WARNING: Treating indirect jump as call
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}



void _o___p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024df8. Too many branches
                    // WARNING: Treating indirect jump as call
  _o___p__commode();
  return;
}



void _o___std_exception_copy(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e04. Too many branches
                    // WARNING: Treating indirect jump as call
  _o___std_exception_copy();
  return;
}



void _o___std_exception_destroy(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e10. Too many branches
                    // WARNING: Treating indirect jump as call
  _o___std_exception_destroy();
  return;
}



void _o___stdio_common_vswprintf(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  _o___stdio_common_vswprintf();
  return;
}



void _o__callnewh(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e28. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__callnewh();
  return;
}



void _o__cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e34. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__cexit();
  return;
}



void _o__configthreadlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e40. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__configthreadlocale();
  return;
}



void _o__configure_wide_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__configure_wide_argv();
  return;
}



void _o__crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e58. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__crt_atexit();
  return;
}



void _o__exit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e64. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__exit();
  return;
}



void _o__get_wide_winmain_command_line(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e70. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__get_wide_winmain_command_line();
  return;
}



void _o__initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__initialize_onexit_table();
  return;
}



void _o__initialize_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e88. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__initialize_wide_environment();
  return;
}



void _o__invalid_parameter_noinfo(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024e94. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__invalid_parameter_noinfo();
  return;
}



void _o__purecall(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__purecall();
  return;
}



void _o__register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024eac. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__register_onexit_function();
  return;
}



void _o__seh_filter_exe(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__seh_filter_exe();
  return;
}



void _o__set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__set_app_type();
  return;
}



void _o__set_fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  _o__set_fmode();
  return;
}



void _o_exit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  _o_exit();
  return;
}



void _o_free(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  _o_free();
  return;
}



void _o_malloc(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024f00. Too many branches
                    // WARNING: Treating indirect jump as call
  _o_malloc();
  return;
}



void _o_terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000140024f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  _o_terminate();
  return;
}



void * memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140024f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x000140024f30. Too many branches
                    // WARNING: Treating indirect jump as call
  _CxxThrowException();
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  _vsnprintf
//  _vsnwprintf
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int FID_conflict__vsnprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_140023a8c();
  iVar1 = _o___stdio_common_vswprintf(*puVar2 | 1,_Dest,_Count,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



int FUN_140024fa4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_140023a8c();
  iVar1 = _o___stdio_common_vswprintf(*puVar2 | 2,0,0,param_1,0,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



void DelayLoad_DecryptFileW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9d8,&DecryptFileW_exref);
                    // WARNING: Could not recover jumptable at 0x000140023b1d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_CommDlgExtendedError
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&CommDlgExtendedError_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_GetOpenFileNameW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&GetOpenFileNameW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_GetSaveFileNameW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&GetSaveFileNameW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_ReplaceTextW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&ReplaceTextW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_FindTextW(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&FindTextW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_ChooseFontW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&ChooseFontW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_PageSetupDlgW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&PageSetupDlgW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_GetFileTitleW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&GetFileTitleW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_PrintDlgExW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002c9f8,&PrintDlgExW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_PSGetPropertyDescriptionListFromString
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_140023a20(&ImgDelayDescr_14002ca18,&PSGetPropertyDescriptionListFromString_exref)
  ;
                    // WARNING: Could not recover jumptable at 0x0001400251a1. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_PropVariantToStringVectorAlloc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_140023a20(&ImgDelayDescr_14002ca18,&PropVariantToStringVectorAlloc_exref);
                    // WARNING: Could not recover jumptable at 0x0001400251a1. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_SHCreateItemFromParsingName
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&SHCreateItemFromParsingName_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_ShellExecuteW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&ShellExecuteW_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_ShellAboutW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&ShellAboutW_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_DragQueryFileW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&DragQueryFileW_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_DragFinish
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&DragFinish_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_SHAddToRecentDocs
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&SHAddToRecentDocs_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_DragAcceptFiles
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&DragAcceptFiles_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_SHGetKnownFolderPath
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_140023a20(&ImgDelayDescr_14002ca38,&SHGetKnownFolderPath_exref);
                    // WARNING: Could not recover jumptable at 0x00014002523e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_OpenPrinterW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca58,&OpenPrinterW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025347. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_GetPrinterDriverW
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca58,&GetPrinterDriverW_exref);
                    // WARNING: Could not recover jumptable at 0x000140025347. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_ClosePrinter
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca58,&ClosePrinter_exref);
                    // WARNING: Could not recover jumptable at 0x000140025347. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void DelayLoad_FindMimeFromData
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_140023a20(&ImgDelayDescr_14002ca78,&FindMimeFromData_exref);
                    // WARNING: Could not recover jumptable at 0x0001400253f6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// Library Function - Single Match
//  __GSHandlerCheck
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}



// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*(byte *)param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  FUN_140023f70(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



// Library Function - Single Match
//  __GSHandlerCheck_SEH
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __GSHandlerCheck_SEH
               (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,
               _DISPATCHER_CONTEXT *param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  __GSHandlerCheckCommon((ulonglong)param_2,(longlong)param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    __C_specific_handler(param_1,param_2,param_3,param_4);
  }
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  _alloca_probe
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void _alloca_probe(void)

{
  undefined *in_RAX;
  undefined *puVar1;
  undefined *puVar2;
  longlong in_GS_OFFSET;
  undefined local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined *)0x0;
  }
  puVar2 = *(undefined **)(in_GS_OFFSET + 0x10);
  if (puVar1 < puVar2) {
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



int wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140025577. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = wcscmp(_Str1,_Str2);
  return iVar1;
}



int memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140025583. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



void * memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014002558f. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014002559b. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0001400255c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_1400255c8(undefined8 *param_1)

{
  _o__seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}



bool FUN_1400255ec(int **param_1)

{
  return **param_1 == -0x3ffffffb;
}



undefined * Catch_All_14002560a(void)

{
  return &DAT_140024561;
}



void FUN_140025630(void)

{
  if (DAT_1400302a8 != (int *)0x0) {
    FUN_1400073c0(DAT_1400302a8);
  }
  return;
}



void FUN_140025660(void)

{
  LPVOID pvVar1;
  HANDLE hHeap;
  LPVOID lpMem;
  LPVOID *ppvVar2;
  
  ppvVar2 = (LPVOID *)&DAT_1400325f0;
  do {
    lpMem = *ppvVar2;
    while (lpMem != (LPVOID)0x0) {
      pvVar1 = *(LPVOID *)((longlong)lpMem + 8);
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
      lpMem = pvVar1;
    }
    *ppvVar2 = (LPVOID)0x0;
    ppvVar2 = ppvVar2 + 1;
  } while (ppvVar2 != (LPVOID *)&DAT_140032640);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined * FUN_1400256e0(void)

{
  PTP_TIMER p_Var1;
  LPVOID pvVar2;
  byte bVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  undefined *in_RAX;
  
  if (DAT_140031330 == '\0') {
    in_RAX = DAT_140031310;
    if (DAT_140031310 != (undefined *)0x0) {
      bVar3 = (*(code *)DAT_140031310)();
      in_RAX = (undefined *)(ulonglong)bVar3;
    }
    p_Var1 = DAT_1400302e0;
    if ((int)in_RAX == 0) {
      DAT_1400302b0 = 0;
      if (DAT_1400302e0 != (PTP_TIMER)0x0) {
        DVar4 = GetLastError();
        FUN_14000781c(p_Var1);
        SetLastError(DVar4);
      }
      p_Var1 = DAT_1400302e8;
      DAT_1400302e0 = (PTP_TIMER)0x0;
      if (DAT_1400302e8 != (PTP_TIMER)0x0) {
        DVar4 = GetLastError();
        FUN_14000781c(p_Var1);
        SetLastError(DVar4);
      }
      pvVar2 = DAT_1400303c0;
      DAT_1400302e8 = (PTP_TIMER)0x0;
      DAT_1400303c0 = (LPVOID)0x0;
      if (pvVar2 != (LPVOID)0x0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar2);
      }
      pvVar2 = DAT_1400303a0;
      DAT_1400303a0 = (LPVOID)0x0;
      if (pvVar2 != (LPVOID)0x0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar2);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_140030360);
      pvVar2 = DAT_140030358;
      DAT_140030358 = (LPVOID)0x0;
      if (pvVar2 != (LPVOID)0x0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar2);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_140030318);
      if (DAT_140030310 != 0) {
        FUN_140006288(DAT_140030310);
      }
      if (DAT_140030308 != 0) {
        FUN_140004360();
      }
      if (DAT_140030300 != 0) {
        FUN_1400042ec();
      }
      if (DAT_1400302f8 != 0) {
        FUN_1400042ec();
      }
      if (DAT_1400302e8 != (PTP_TIMER)0x0) {
        FUN_14000781c(DAT_1400302e8);
      }
      if (DAT_1400302e0 != (PTP_TIMER)0x0) {
        FUN_14000781c(DAT_1400302e0);
      }
      if (DAT_1400302c0 != (int *)0x0) {
        FUN_140006ed0(DAT_1400302c0);
      }
      return &DAT_1400302b0;
    }
  }
  DAT_1400302b0 = 0;
  if (DAT_1400302c0 != (int *)0x0) {
    in_RAX = (undefined *)FUN_140006ed0(DAT_1400302c0);
  }
  return in_RAX;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined * FUN_140025740(void)

{
  PTP_TIMER p_Var1;
  LPVOID pvVar2;
  byte bVar3;
  DWORD dwErrCode;
  HANDLE pvVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  if (DAT_140031330 == '\0') {
    uVar5 = DAT_140031310;
    if (DAT_140031310 != 0) {
      bVar3 = (*(code *)DAT_140031310)();
      uVar5 = (ulonglong)bVar3;
    }
    p_Var1 = DAT_140030c08;
    if ((int)uVar5 == 0) {
      DAT_140030bf8 = 0;
      if (DAT_140030c08 != (PTP_TIMER)0x0) {
        dwErrCode = GetLastError();
        FUN_14000781c(p_Var1);
        SetLastError(dwErrCode);
      }
      DAT_140030c08 = (PTP_TIMER)0x0;
      DAT_140030bf8 = 0;
      FUN_14000679c((longlong)&DAT_140030bf8);
      pvVar2 = DAT_140030c60;
      DAT_140030c60 = (LPVOID)0x0;
      if (pvVar2 != (LPVOID)0x0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      pvVar2 = DAT_140030c40;
      DAT_140030c40 = (LPVOID)0x0;
      if (pvVar2 != (LPVOID)0x0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      if (DAT_140030c20 != 0) {
        FUN_1400066c8();
      }
      if (DAT_140030c18 != 0) {
        FUN_1400066c8();
      }
      if (DAT_140030c08 != (PTP_TIMER)0x0) {
        FUN_14000781c(DAT_140030c08);
      }
      return &DAT_140030bf8;
    }
  }
  DAT_140030bf8 = 0;
  puVar6 = (undefined *)FUN_14000679c((longlong)&DAT_140030bf8);
  return puVar6;
}



void FUN_1400257a0(void)

{
  if (DAT_1400320e0 != (LPVOID)0x0) {
    CoTaskMemFree(DAT_1400320e0);
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1400257d0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1400320e8;
  DAT_1400320e8 = 0;
  if (lVar1 != 0) {
    (***(code ***)lVar1)();
  }
  return;
}


