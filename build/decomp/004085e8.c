// OoT3D decomp @ 004085e8  name=FUN_004085e8  size=124

void FUN_004085e8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,0xb);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x23;
  *(int *)(iVar2 + 0x10) = param_1 + 0xf4;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(undefined4 *)(iVar2 + 0x18) = *param_3;
  *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)(param_3 + 1);
  *(undefined4 *)(iVar2 + 0x20) = param_3[2];
  *(undefined4 *)(iVar2 + 0x24) = param_3[3];
  *(undefined4 *)(iVar2 + 0x28) = param_3[4];
  FUN_0030c1e8(iVar1,iVar2);
  *(undefined1 *)(param_1 + 0x449) = 1;
  return;
}
