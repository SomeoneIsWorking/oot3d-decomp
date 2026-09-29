// OoT3D decomp @ 0020627c  name=FUN_0020627c  size=20

undefined4 FUN_0020627c(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  uint in_fpscr;
  int iVar5;
  float fVar6;
  float fVar7;

  FUN_003731e0(param_1 + 0x1a4);
  iVar5 = FUN_00363e64(param_1,param_1 + 8);
  if (iVar5 < iRam0020630c) {
    FUN_00370350(uRam00206310,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x6c) = uRam00206314;
    *(undefined1 *)(param_1 + 0x9ed) = 0xff;
    *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 0x15;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    uVar3 = uRam00206318;
    *(undefined4 *)(param_1 + 0x9dc) = uRam00206318;
    return uVar3;
  }
  iVar5 = FUN_00367358(param_1,param_1 + 8);
  psVar4 = (short *)(param_1 + 0x36);
  sVar1 = *psVar4;
  if (iRam0020631c == 0) {
    if (sVar1 == iVar5) {
      return 1;
    }
  }
  else {
    sVar2 = (short)iVar5;
    iVar5 = iRam0020631c;
    if (0 < (short)(sVar1 - sVar2)) {
      iVar5 = -iRam0020631c;
    }
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00370408 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (0 < (short)(sVar1 - sVar2)) {
      iVar5 = (int)(short)iVar5;
    }
    fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    sVar1 = sVar1 + (short)(int)(fVar7 * fVar6 * DAT_0037040c);
    *psVar4 = sVar1;
    if (-1 < (int)(short)(sVar1 - sVar2) * (int)(short)iVar5) {
      *psVar4 = sVar2;
      return 1;
    }
  }
  return 0;
}
