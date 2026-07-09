# -*- coding: utf-8 -*-
#@runtime Jython
# Dump memory block layout so we know the true VA extents of .text etc.
prog = currentProgram
for b in prog.getMemory().getBlocks():
    print("  %-16s start=0x%08x  end=0x%08x  size=0x%08x  R=%s W=%s X=%s init=%s" % (
        b.getName(), b.getStart().getOffset(), b.getEnd().getOffset(),
        b.getSize(), b.isRead(), b.isWrite(), b.isExecute(), b.isInitialized()))
