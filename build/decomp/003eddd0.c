// OoT3D decomp @ 003eddd0  name=FUN_003eddd0  size=224

void FUN_003eddd0(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint in_fpscr;
  float fVar6;

  FUN_00376864();
  iVar3 = FUN_00371e40(param_1,param_2);
  if (iVar3 != 0) {
LAB_003edea0:
    FUN_00374428(param_1);
    return;
  }
  FUN_003724dc(DAT_003edeb4,DAT_003edeb0,param_1,param_2,0x29);
  FUN_00376340(DAT_003edebc,DAT_003edebc,DAT_003edeb8,param_2,param_1,5);
  fVar2 = DAT_003edec4;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    sVar1 = *(short *)(param_1 + 0x1fe) + -1;
    uVar4 = (uint)sVar1;
    *(short *)(param_1 + 0x1fe) = sVar1;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003edec0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)uVar4 < (int)(fVar2 / fVar6 + DAT_003edec8)) {
      uVar5 = *(ushort *)(param_1 + 0x200);
      if ((uVar4 & 1) == 0) {
        uVar5 = uVar5 & 0xfffd;
      }
      else {
        uVar5 = uVar5 | 2;
      }
      *(ushort *)(param_1 + 0x200) = uVar5;
    }
    if (uVar4 == 0) goto LAB_003edea0;
  }
  return;
}
