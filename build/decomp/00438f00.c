// OoT3D decomp @ 00438f00  name=FUN_00438f00  size=504

void FUN_00438f00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_f4 [27];
  undefined4 local_88 [27];

  FUN_00371738(local_88,DAT_004390f8,0x6c);
  FUN_00371738(local_f4,DAT_004390fc,0x6c);
  iVar1 = DAT_00439104;
  iVar3 = DAT_00439100;
  iVar5 = DAT_00439104 + -0x6c;
  uVar4 = 0;
  if (*(int *)(DAT_00439100 + 0x28) == -1) {
    while( true ) {
      uVar6 = VectorFloatToUnsigned(*(undefined4 *)(iVar1 + uVar4 * 4),3);
      uVar7 = VectorFloatToUnsigned(*(undefined4 *)(iVar5 + uVar4 * 4),3);
      uVar8 = VectorFloatToUnsigned(local_f4[uVar4],3);
      uVar9 = VectorFloatToUnsigned(local_88[uVar4],3);
      iVar2 = FUN_0033f428(uVar9 & 0xffff,uVar8 & 0xffff,uVar7 & 0xffff,uVar6 & 0xffff,0);
      if (iVar2 != 0) break;
      uVar4 = uVar4 + 1;
      if (0x1a < (int)uVar4) {
        return;
      }
    }
    FUN_0037547c(DAT_00439110,0,4,DAT_0043910c,DAT_0043910c,DAT_00439108);
    *(uint *)(iVar3 + 0x20) = uVar4;
    *(uint *)(iVar3 + 0x28) = uVar4;
  }
  else {
    while( true ) {
      uVar6 = VectorFloatToUnsigned(*(undefined4 *)(iVar1 + uVar4 * 4),3);
      uVar7 = VectorFloatToUnsigned(*(undefined4 *)(iVar5 + uVar4 * 4),3);
      uVar8 = VectorFloatToUnsigned(local_f4[uVar4],3);
      uVar9 = VectorFloatToUnsigned(local_88[uVar4],3);
      iVar2 = FUN_0033f428(uVar9 & 0xffff,uVar8 & 0xffff,uVar7 & 0xffff,uVar6 & 0xffff,2);
      if ((iVar2 != 0) && (*(uint *)(iVar3 + 0x28) == uVar4)) break;
      uVar4 = uVar4 + 1;
      if (0x1a < (int)uVar4) {
        return;
      }
    }
    if ((uVar4 < 3) && (iVar3 = FUN_002e9d78(uVar4), iVar3 != 0)) {
      FUN_002e9b4c(0,uVar4);
    }
    if ((uVar4 - 3 < 3) && (iVar3 = FUN_002e9d78(uVar4), iVar3 != 0)) {
      FUN_002e9b4c(1,uVar4 - 3);
    }
    if ((uVar4 - 6 < 3) && (iVar3 = FUN_002e9d78(uVar4), iVar3 != 0)) {
      FUN_002e9b4c(2,uVar4 - 6);
      return;
    }
  }
  return;
}
