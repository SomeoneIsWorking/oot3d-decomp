// OoT3D decomp @ 00382298  name=FUN_00382298  size=104

void FUN_00382298(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  uVar2 = DAT_00382300;
  *(undefined4 *)(param_2 + 0x6c) = DAT_00382300;
  *(undefined4 *)(param_2 + 0x221c) = uVar2;
  iVar3 = DAT_00382308;
  uVar2 = DAT_00382304;
  *(undefined1 *)(param_2 + 0x1749) = 0;
  uVar4 = DAT_0038230c;
  *(undefined4 *)(iVar3 + 0xcc) = uVar2;
  *(undefined1 *)(iVar3 + 0xd4) = 0;
  uVar1 = *(undefined1 *)(param_2 + 0x2a6);
  *(undefined1 *)(param_2 + 0x2a6) = 0;
  FUN_0036055c(param_1,param_2,uVar4);
  iVar3 = DAT_00382310;
  *(undefined1 *)(param_2 + 0x2a6) = uVar1;
  *(undefined2 *)(iVar3 + param_2) = 3;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  return;
}
