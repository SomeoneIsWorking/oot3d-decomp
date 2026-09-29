// OoT3D decomp @ 003806d8  name=FUN_003806d8  size=352

void FUN_003806d8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  float fVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;

  iVar7 = *(int *)(DAT_00380868 + param_2);
  iVar6 = FUN_0032fdf8(param_2,param_1);
  if ((iVar6 == 0) &&
     ((*(short *)(param_1 + 0x1c) != -2 || (iVar6 = FUN_0032fbc0(param_2,param_1), iVar6 == 0)))) {
    fVar3 = DAT_00380874;
    iVar6 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
    fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar6 < 1) {
      sVar1 = (short)(int)(fVar8 * DAT_0038086c - DAT_00380870);
    }
    else {
      sVar1 = (short)(int)(DAT_00380870 + fVar8 * DAT_0038086c);
    }
    sVar2 = *(short *)(param_1 + 0xbe) + sVar1;
    *(short *)(param_1 + 0xbe) = sVar2;
    *(short *)(param_1 + 0x36) = sVar2;
    fVar8 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * fVar3;
    if (iVar6 < 1) {
      if (0xc0000000 < (uint)fVar8) {
        fVar8 = DAT_0038087c;
      }
    }
    else if (0x40000000 < (int)fVar8) {
      fVar8 = DAT_00380878;
    }
    *(float *)(param_1 + 0x1e4) = -fVar8;
    FUN_003731e0(param_1 + 0x1a4);
    if (-1 < *(short *)(param_1 + 0x1c)) {
      uVar4 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
      *(undefined2 *)(param_1 + 0xa6a) = uVar4;
      iVar6 = FUN_00373fa4(iVar7 + 0x28,0xffffffff);
      if (iVar6 != *(short *)(param_1 + 0xa6a)) {
        FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
        *(undefined4 *)(param_1 + 0xa48) = 5;
        if (-1 < *(short *)(param_1 + 0x1c)) {
          uVar5 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
          *(short *)(param_1 + 0xa6a) = (short)uVar5;
          uVar4 = FUN_003262b8(param_1 + 0x28,uVar5,(int)*(short *)(param_1 + 0xa6c),param_2);
          *(undefined2 *)(param_1 + 0xa6e) = uVar4;
          *(undefined4 *)(param_1 + 0xa50) = 0;
        }
        uVar5 = DAT_0032fbbc;
        *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
        *(undefined4 *)(param_1 + 0xa54) = uVar5;
        return;
      }
    }
    iVar6 = FUN_0036f18c(param_1,DAT_00380880);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if ((*(uint *)(DAT_00380888 + param_2) & 0x5f) == 0) {
      FUN_00375bcc(param_1,DAT_0038088c);
      return;
    }
  }
  return;
}
