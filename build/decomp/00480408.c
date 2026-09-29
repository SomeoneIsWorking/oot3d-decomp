// OoT3D decomp @ 00480408  name=FUN_00480408  size=60

void FUN_00480408(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  *(undefined1 *)(param_1 + 0x16ec) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 0;
  iVar1 = DAT_00480444;
  *(undefined4 *)(DAT_00480444 + 0x558) = 0xff;
  *(undefined1 *)(iVar1 + 0x56e) = 0xff;
  uVar2 = DAT_00480448;
  *(undefined1 *)(param_2 + 0x101) = 0;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 0x10) = 0x590;
  FUN_00331754(0);
  return;
}
