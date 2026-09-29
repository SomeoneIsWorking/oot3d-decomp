// OoT3D decomp @ 0040512c  name=FUN_0040512c  size=164

void FUN_0040512c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = FUN_0030c550();
  iVar3 = FUN_0030c20c(iVar2,7);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x180);
  *(undefined1 *)(iVar3 + 4) = 0xd;
  *(int *)(iVar3 + 0x10) = param_1 + 0xf4;
  *(undefined4 *)(iVar3 + 0x14) = param_2;
  *(undefined4 *)(iVar3 + 0x18) = *param_3;
  FUN_0030c1e8(iVar2);
  iVar2 = param_3[2];
  if (0 < iVar2) {
    bVar1 = *(byte *)(param_3 + 1);
    iVar3 = FUN_0030c550();
    iVar4 = FUN_0030c20c(iVar3,7);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x180);
    *(undefined1 *)(iVar4 + 4) = 0xf;
    *(uint *)(iVar4 + 0x14) = (uint)bVar1;
    *(int *)(iVar4 + 0x18) = iVar2;
    *(int *)(iVar4 + 0x10) = param_1 + 0xf4;
    FUN_0030c1e8(iVar3);
  }
  *(undefined1 *)(param_1 + 0x4b9) = 1;
  return;
}
