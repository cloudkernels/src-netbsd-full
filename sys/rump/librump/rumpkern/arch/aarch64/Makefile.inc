# $NetBSD: Makefile.inc,v 0.1 2018/10/28 20:10:56 pooka Exp $

CPPFLAGS+=	-DARCH_ELFSIZE=64

.PATH:  ${RUMPTOP}/../arch/aarch64/aarch64
SRCS+=  	kobj_machdep.c

.PATH:	${RUMPTOP}/librump/rumpkern/arch/generic
SRCS+=  	rump_generic_abi.c rump_generic_cpu.c rump_generic_pmap.c
