// OoT3D decomp @ 00306808  name=FUN_00306808  size=304

void FUN_00306808(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint uVar4;
  bool bVar5;

  FUN_00306a34(param_1 + 0x16c);
  FUN_00305a20(param_1 + 0xe,param_2);
  if (*(char *)(param_1 + 0xb) != '\0') {
    bVar5 = *(int *)(param_1 + 0xb4) != 0;
    uVar4 = extraout_r1;
    if (bVar5) {
      uVar4 = (uint)*(byte *)(param_1 + 0xbc);
    }
    if (bVar5 && uVar4 != 0) {
      FUN_0034fc68();
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    iVar1 = FUN_00301300(param_2,0,0);
    FUN_0031b9c0(iVar1,1);
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(param_1 + 0xb8) = iVar2;
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_0035010c(*(undefined4 *)(param_1 + 0xb8),0x9c00000);
      *(int *)(param_1 + 0xb4) = iVar2;
      if (iVar2 != 0) {
        uVar3 = FUN_00303ea8(iVar1);
        FUN_0034338c(*(undefined4 *)(param_1 + 0xb4),uVar3,*(undefined4 *)(param_1 + 0xb8));
        FUN_00301260(iVar1);
        FUN_0031b99c(iVar1);
        *(undefined1 *)(param_1 + 0xbc) = 1;
        goto LAB_0030690c;
      }
    }
    FUN_00301260(iVar1);
    FUN_0031b99c(iVar1);
  }
LAB_0030690c:
  FUN_003069cc(param_1 + 0x16c);
  FUN_00306a34(param_1 + 0x16c);
  *(undefined1 *)(param_1 + 8) = 4;
  FUN_003069cc(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x704) = 0;
  return;
}
