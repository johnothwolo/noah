#ifndef LINUX_PTRACE_H
#define LINUX_PTRACE_H

struct linux_ptrace_peeksiginfo_args {
  uint64_t off;
  uint32_t flags;
  int32_t nr;
};

struct linux_pt_reg {
    l_ulong    r15;
    l_ulong    r14;
    l_ulong    r13;
    l_ulong    r12;
    l_ulong    rbp;
    l_ulong    rbx;
    l_ulong    r11;
    l_ulong    r10;
    l_ulong    r9;
    l_ulong    r8;
    l_ulong    rax;
    l_ulong    rcx;
    l_ulong    rdx;
    l_ulong    rsi;
    l_ulong    rdi;
    l_ulong    orig_rax;
    l_ulong    rip;
    l_ulong    cs;
    l_ulong    eflags;
    l_ulong    rsp;
    l_ulong    ss;
};

struct linux_pt_regset {
    l_ulong    r15;
    l_ulong    r14;
    l_ulong    r13;
    l_ulong    r12;
    l_ulong    rbp;
    l_ulong    rbx;
    l_ulong    r11;
    l_ulong    r10;
    l_ulong    r9;
    l_ulong    r8;
    l_ulong    rax;
    l_ulong    rcx;
    l_ulong    rdx;
    l_ulong    rsi;
    l_ulong    rdi;
    l_ulong    orig_rax;
    l_ulong    rip;
    l_ulong    cs;
    l_ulong    eflags;
    l_ulong    rsp;
    l_ulong    ss;
    l_ulong    fs_base;
    l_ulong    gs_base;
    l_ulong    ds;
    l_ulong    es;
    l_ulong    fs;
    l_ulong    gs;
};


#define LINUX_PTRACE_TRACEME            0
#define LINUX_PTRACE_PEEKTEXT           1
#define LINUX_PTRACE_PEEKDATA           2
#define LINUX_PTRACE_PEEKUSR            3
#define LINUX_PTRACE_POKETEXT           4
#define LINUX_PTRACE_POKEDATA           5
#define LINUX_PTRACE_POKEUSR            6
#define LINUX_PTRACE_CONT               7
#define LINUX_PTRACE_KILL               8
#define LINUX_PTRACE_SINGLESTEP         9
#define LINUX_PTRACE_GETREGS            12
#define LINUX_PTRACE_SETREGS            13
#define LINUX_PTRACE_GETFPREGS          14
#define LINUX_PTRACE_SETFPREGS          15

#define LINUX_PTRACE_ATTACH             16
#define LINUX_PTRACE_DETACH             17
#define LINUX_PTRACE_SYSCALL            24

#define LINUX_PTRACE_SETOPTIONS         0x4200
#define LINUX_PTRACE_GETEVENTMSG        0x4201
#define LINUX_PTRACE_GETSIGINFO         0x4202
#define LINUX_PTRACE_SETSIGINFO         0x4203
#define LINUX_PTRACE_GETREGSET          0x4204
#define LINUX_PTRACE_SETREGSET          0x4205
#define LINUX_PTRACE_SEIZE              0x4206
#define LINUX_PTRACE_INTERRUPT          0x4207
#define LINUX_PTRACE_LISTEN             0x4208
#define LINUX_PTRACE_PEEKSIGINFO        0x4209
#define LINUX_PTRACE_GETSIGMASK         0x420a
#define LINUX_PTRACE_SETSIGMASK         0x420b
#define LINUX_PTRACE_SECCOMP_GET_FILTER 0x420c

#define LINUX_PTRACE_PEEKSIGINFO_SHARED	(1 << 0)

#define LINUX_PTRACE_EVENT_FORK       1
#define LINUX_PTRACE_EVENT_VFORK      2
#define LINUX_PTRACE_EVENT_CLONE      3
#define LINUX_PTRACE_EVENT_EXEC       4
#define LINUX_PTRACE_EVENT_VFORK_DONE 5
#define LINUX_PTRACE_EVENT_EXIT       6
#define LINUX_PTRACE_EVENT_SECCOMP    7
#define LINUX_PTRACE_EVENT_STOP       128

#define LINUX_PTRACE_O_TRACESYSGOOD    1
#define LINUX_PTRACE_O_TRACEFORK       (1 << LINUX_PTRACE_EVENT_FORK)
#define LINUX_PTRACE_O_TRACEVFORK      (1 << LINUX_PTRACE_EVENT_VFORK)
#define LINUX_PTRACE_O_TRACECLONE      (1 << LINUX_PTRACE_EVENT_CLONE)
#define LINUX_PTRACE_O_TRACEEXEC       (1 << LINUX_PTRACE_EVENT_EXEC)
#define LINUX_PTRACE_O_TRACEVFORKDONE  (1 << LINUX_PTRACE_EVENT_VFORK_DONE)
#define LINUX_PTRACE_O_TRACEEXIT       (1 << LINUX_PTRACE_EVENT_EXIT)
#define LINUX_PTRACE_O_TRACESECCOMP    (1 << LINUX_PTRACE_EVENT_SECCOMP)
#define LINUX_PTRACE_O_EXITKILL        (1 << 20)
#define LINUX_PTRACE_O_SUSPEND_SECCOMP (1 << 21)
#define LINUX_PTRACE_O_MASK            (0x000000ff | LINUX_PTRACE_O_EXITKILL | LINUX_PTRACE_O_SUSPEND_SECCOMP)

#endif
