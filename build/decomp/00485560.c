// OoT3D decomp @ 00485560  name=FUN_00485560  size=112

void FUN_00485560(char param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,7);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x32;
  *(char *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  FUN_0030c1e8(iVar1,iVar2);
  uVar3 = FUN_0030c0dc(iVar1,1);
  FUN_0030c074(iVar1,uVar3);
  FUN_002c493c(DAT_004855d0,(int)param_1);
  return;
}
