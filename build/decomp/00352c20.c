// OoT3D decomp @ 00352c20  name=FUN_00352c20  size=164

void FUN_00352c20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;

  uVar2 = DAT_00352cd8;
  uVar1 = DAT_00352cd4;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352cc4 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x64a) = (short)(int)(DAT_00352cd0 + (DAT_00352cc8 / fVar3) * DAT_00352ccc);
  FUN_00375c08(uVar2,uVar1,uVar1,uVar1,param_1 + 0x214,10,1);
  uVar1 = DAT_00352ce0;
  *(undefined4 *)(param_1 + 0x254) = DAT_00352cdc;
  FUN_00375bcc(param_1,uVar1);
  FUN_0036df4c(param_1 + 8,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x640) = DAT_00352ce4;
  *(ushort *)(param_1 + 0x644) = *(ushort *)(param_1 + 0x644) & 0xfeff | 8;
  return;
}
