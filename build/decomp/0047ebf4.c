// OoT3D decomp @ 0047ebf4  name=FUN_0047ebf4  size=80

void FUN_0047ebf4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x10;
  *(int *)(iVar2 + 0x10) = param_2 + 0xf4;
  *(undefined4 *)(iVar2 + 0x14) = param_1;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}
