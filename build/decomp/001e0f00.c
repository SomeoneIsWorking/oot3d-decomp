// OoT3D decomp @ 001e0f00  name=FUN_001e0f00  size=340

void FUN_001e0f00(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  iVar2 = FUN_0033caf8(*(undefined4 *)(DAT_001e1054 + param_2));
  if (iVar2 != 0) {
    bVar6 = (int)*(float *)(param_1 + 8) == 0xf5f;
    bVar7 = (int)*(float *)(param_1 + 0xc) == -0x74;
    bVar8 = bVar6 && bVar7;
    if (bVar6 && bVar7) {
      bVar8 = (int)*(float *)(param_1 + 0x10) == 0x1887;
    }
    if (bVar8) {
      return;
    }
  }
  sVar1 = *(short *)(param_1 + 0x1c);
  if (((sVar1 == 8 || sVar1 == 9) || sVar1 == 5) || sVar1 == 0x17) {
    uVar3 = 0x32;
    uVar4 = 0xaa;
    uVar5 = 0x46;
    if (sVar1 == 0x17) goto LAB_001e0fc4;
  }
  else {
    if ((sVar1 != 6 && sVar1 != 7) && sVar1 != 0x18) goto LAB_001e102c;
    uVar3 = 0xb4;
    uVar4 = 0x9b;
    uVar5 = 0;
  }
  if (sVar1 != 0x18) {
LAB_001e102c:
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x210),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
    return;
  }
LAB_001e0fc4:
  fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_003695cc(fVar11 * DAT_001e1058,fVar10 * DAT_001e1058,fVar9 * DAT_001e1058,DAT_001e105c,
               *(undefined4 *)(param_1 + 0x20c),0,4);
  *(undefined1 *)(*(int *)(param_1 + 0x20c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x20c),auStack_3c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x20c),0);
  return;
}
