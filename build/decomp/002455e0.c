// OoT3D decomp @ 002455e0  name=FUN_002455e0  size=272

void FUN_002455e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  if (-1 < *(char *)(param_1 + 3)) {
    iVar3 = (uint)(*(ushort *)(param_1 + 0x1c) >> 10) * 0x10 + 4;
    *(short *)(*(int *)(DAT_002456f0 + param_2) + iVar3) =
         -*(short *)(*(int *)(DAT_002456f0 + param_2) + iVar3);
  }
  if (-1 < *(char *)(DAT_002456f4 + param_1)) {
    FUN_00350f34(param_1,param_1 + 0x1d4,param_1 + 0x1d8,param_1 + 0x1dc,param_1 + 0x1e0,
                 param_1 + 0x1e4,param_1 + 0x1e8,param_1 + 0x1ec,param_1 + 0x1f0,0);
    iVar3 = 0;
    do {
      FUN_0035021c(*(undefined4 *)(param_1 + iVar3 * 4 + 500));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  puVar1 = DAT_002456f8;
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 4;
    if (*(int *)(iVar4 + 0x1fc) != 0) {
      uVar2 = FUN_003685a0();
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,uVar2);
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar4 + 0x1fc) = 0;
  } while (iVar3 < 2);
  FUN_0034291c(param_1 + 0x204);
  return;
}
