// OoT3D decomp @ 00366318  name=FUN_00366318  size=380

void FUN_00366318(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  
  uVar1 = uRam0036649c;
  uVar4 = uRam00366498;
  if (*(int *)(iRam00366494 + 0x10) == 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uRam003664a0,uVar2,uVar1,uVar4,param_1 + 0x1a4,3,2);
    *(undefined1 *)(param_1 + 0xdf0) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined1 *)(param_1 + 0xdf1) = 0;
    uVar4 = uRam003664a4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375bcc(param_1,uVar4);
    uVar4 = uRam003664a8;
  }
  else {
    iVar3 = FUN_0036f18c(param_1,uRam003664ac);
    if (iVar3 != 0) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c),
                                         (byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(fRam003664b4 + fVar5 * fRam003664b0 <= *(float *)(param_1 + 0x98)) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uRam003664bc,uVar1,uVar4,uRam003664b8,param_1 + 0x1a4,0,3);
        *(byte *)(param_1 + 0xe20) = *(byte *)(param_1 + 0xe20) & 0xfb;
        *(undefined1 *)(param_1 + 0xdf0) = 3;
        uVar4 = uRam003664c0;
        *(undefined4 *)(param_1 + 0x6c) = uVar1;
        *(undefined4 *)(param_1 + 0xdf4) = uVar4;
        return;
      }
    }
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uRam003664c4,uVar1,uVar2,uVar4,param_1 + 0x1a4,4,0);
    *(undefined1 *)(param_1 + 0xdf0) = 4;
    iVar3 = iRam003664cc;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x58) * fRam003664c8;
    *(undefined2 *)(iVar3 + param_1) = 0;
    uVar4 = uRam003664d0;
  }
  *(undefined4 *)(param_1 + 0xdf4) = uVar4;
  return;
}

