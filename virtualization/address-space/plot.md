# Registers

| Register | Hex Value | Decimal Value |
|----------|-----------|---------------|
| rax | 0x000000000000000a | 10 |
| rbx | 0x0000000000000001 | 1 |
| rcx | 0x00000000004212e4 | 4330212 |
| rdx | 0x0000000000000000 | 0 |
| rsi | 0x00000000004bb930 | 4962608 |
| rdi | 0x00000000004b4840 | 4933696 |
| rbp | 0x00007fffffffd840 | 140737488345152 |
| rsp | 0x00007fffffffd770 | 140737488344944 |
| r8 | 0x0000000000000078 | 120 |
| r9 | 0x0000000000000001 | 1 |
| r10 | 0x0000000000000000 | 0 |
| r11 | 0x0000000000000202 | 514 |
| r12 | 0x00007fffffffd958 | 140737488345432 |
| r13 | 0x00007fffffffd968 | 140737488345448 |
| r14 | 0x00000000004ad868 | 4905064 |
| r15 | 0x0000000000000001 | 1 |
| rip | 0x0000000000401c64 | 4201572 |
| eflags | 0x0000000000000206 | 518 |

# Memory Mappings

| Start Address | End Address | Size | Permissions | Name |
|---------------|-------------|------|--------------|------|
| 0x400000 | 0x401000 | 0x1000 | r--p | /home/yang/Desktop/os-demos/virtualization/address-space/mmap-demo |
| 0x401000 | 0x486000 | 0x85000 | r-xp | /home/yang/Desktop/os-demos/virtualization/address-space/mmap-demo |
| 0x486000 | 0x4ad000 | 0x27000 | r--p | /home/yang/Desktop/os-demos/virtualization/address-space/mmap-demo |
| 0x4ad000 | 0x4b2000 | 0x5000 | r--p | /home/yang/Desktop/os-demos/virtualization/address-space/mmap-demo |
| 0x4b2000 | 0x4b4000 | 0x2000 | rw-p | /home/yang/Desktop/os-demos/virtualization/address-space/mmap-demo |
| 0x4b4000 | 0x4ba000 | 0x6000 | rw-p |  |
| 0x4ba000 | 0x4dc000 | 0x22000 | rw-p | [heap] |
| 0x7ffff7f2e000 | 0x7ffff7ff8000 | 0xca000 | r--p | /home/yang/Desktop/os-demos/virtualization/address-space/mmap-demo |
| 0x7ffff7ff8000 | 0x7ffff7ff9000 | 0x1000 | rw-p |  |
| 0x7ffff7ff9000 | 0x7ffff7ffd000 | 0x4000 | r--p | [vvar] |
| 0x7ffff7ffd000 | 0x7ffff7fff000 | 0x2000 | r-xp | [vdso] |
| 0x7ffffffdd000 | 0x7ffffffff000 | 0x22000 | rw-p | [stack] |
| 0xffffffffff600000 | 0xffffffffff601000 | 0x1000 | --xp | [vsyscall] |
