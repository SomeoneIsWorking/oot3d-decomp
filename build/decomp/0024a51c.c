// OoT3D decomp @ 0024a51c  name=FUN_0024a51c  size=96

undefined8 FUN_0024a51c(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  bool bVar4;

  iVar1 = *(int *)(param_1 + 0x124);
  if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0x1e8))) {
    bVar4 = *(int *)(iVar1 + 0x13c) != 0;
    sVar3 = 0;
    iVar2 = iVar1;
    if (bVar4) {
      iVar2 = iVar1 + 0x100;
      sVar3 = *(short *)(iVar1 + 0x1b0);
    }
    if ((bVar4 && sVar3 != 0) && -1 < sVar3) {
      *(short *)(iVar2 + 0xb0) = sVar3 + -1;
    }
  }
  FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x244),0);
  return CONCAT44(param_1 + 0x1ec,1);
}
