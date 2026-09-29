// OoT3D decomp @ 00381dbc  name=FUN_00381dbc  size=152

void FUN_00381dbc(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = DAT_00381e54;
  *(undefined4 *)(param_2 + 0x6c) = DAT_00381e54;
  *(undefined4 *)(param_2 + 0x221c) = uVar2;
  iVar3 = DAT_00381e5c;
  uVar2 = DAT_00381e58;
  *(undefined1 *)(param_2 + 0x1749) = 0;
  *(undefined4 *)(iVar3 + 0xcc) = uVar2;
  *(undefined1 *)(iVar3 + 0xd4) = 0;
  uVar2 = DAT_00381e60;
  uVar1 = *(undefined1 *)(param_2 + 0x2a6);
  *(undefined1 *)(param_2 + 0x2a6) = 0;
  FUN_0036055c(param_1,param_2,uVar2,0);
  iVar3 = DAT_00381e64;
  *(undefined1 *)(param_2 + 0x2a6) = uVar1;
  uVar2 = DAT_00381e68;
  *(undefined2 *)(iVar3 + param_2) = 0;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  FUN_00358dfc(uVar2,param_2 + 0x254,param_1,0xe3);
  FUN_003603f8(param_1,param_2,0x19);
  *(undefined4 *)(param_2 + 0x16f8) = *(undefined4 *)(param_2 + 0x1744);
  return;
}
