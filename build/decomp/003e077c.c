// OoT3D decomp @ 003e077c  name=FUN_003e077c  size=192

void FUN_003e077c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar6 = *(int *)(param_1 + 0x128);
  iVar7 = *(int *)(iVar6 + 0x128);
  iVar5 = FUN_00370378(param_1 + 0xbc,(int)*(short *)(param_1 + 0x1f8),0x50);
  iVar4 = iRam003e0840;
  iVar3 = iRam003e083c;
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x1bc) = iRam003e083c;
  }
  if (iVar4 <= *(short *)(param_1 + 0xbc)) {
    FUN_00370378(iVar6 + 0xbc,(int)*(short *)(iVar6 + 0x1f8),0x20);
    FUN_00370378(iVar7 + 0xbc,(int)*(short *)(iVar6 + 0x1f8),0x20);
  }
  uVar1 = uRam003e084c;
  uVar2 = uRam003e0850;
  if (*(short *)(param_1 + 0x1f8) < 0) {
    uVar1 = uRam003e0844;
    uVar2 = uRam003e0848;
  }
  if (*(int *)(param_1 + 0x1bc) == iVar3) {
    FUN_0037547c(uVar1,param_1 + 0x28,4,DAT_00375c04);
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return;
}
