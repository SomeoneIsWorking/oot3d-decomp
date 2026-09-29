// OoT3D decomp @ 002db010  name=FUN_002db010  size=96

int FUN_002db010(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  *param_1 = DAT_002db070;
  iVar3 = FUN_00303a94(param_1 + 1);
  iVar3 = FUN_00303a94(iVar3 + 0x1b8);
  FUN_003445d4(iVar3 + -0x1b8);
  FUN_003445d4(iVar3);
  *(undefined4 *)(iVar3 + 0x1c8) = 0;
  uVar1 = DAT_002db074;
  *(undefined4 *)(iVar3 + 0x1cc) = 0;
  uVar2 = DAT_002db078;
  *(undefined4 *)(iVar3 + 0x1d0) = 0;
  *(undefined4 *)(iVar3 + 0x1b8) = uVar1;
  *(undefined4 *)(iVar3 + 0x1bc) = uVar2;
  *(undefined4 *)(iVar3 + 0x1c0) = uVar1;
  *(undefined4 *)(iVar3 + 0x1c4) = uVar2;
  *(undefined1 *)(iVar3 + 0x1d4) = 0;
  return iVar3 + -0x1bc;
}
