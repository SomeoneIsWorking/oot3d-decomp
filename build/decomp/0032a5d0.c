// OoT3D decomp @ 0032a5d0  name=FUN_0032a5d0  size=256

void FUN_0032a5d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  piVar4 = (int *)(param_1 + 0x1d0);
  uVar3 = (uint)*(ushort *)(param_2 + 0x22b8);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a6d0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0032a6d4 / fVar6 + DAT_0032a6d8) <= (int)uVar3) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a6d0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)uVar3 < (int)(DAT_0032a6dc / fVar6 + DAT_0032a6d8)) {
      fVar5 = (float)FUN_0032c66c(0x26c,DAT_0032a6e0,uVar3,0,0);
      fVar1 = DAT_0032a6f0;
      fVar6 = DAT_0032a6ec;
      *piVar4 = (int)(DAT_0032a6e8 + fVar5 * DAT_0032a6e4);
      iVar2 = (int)(fVar1 + fVar5 * fVar6);
      *(int *)(param_1 + 0x1d4) = iVar2;
    }
    else {
      iVar2 = 0x96;
      *piVar4 = 0x96;
      *(undefined4 *)(param_1 + 0x1d4) = 0x96;
    }
    *(int *)(param_1 + 0x1d8) = iVar2;
    return;
  }
  *piVar4 = 0xa3;
  *(undefined4 *)(param_1 + 0x1d4) = 0xc1;
  *(undefined4 *)(param_1 + 0x1d8) = 0xc1;
  *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + -1;
  return;
}
