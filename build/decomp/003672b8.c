// OoT3D decomp @ 003672b8  name=FUN_003672b8  size=144

void FUN_003672b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = DAT_0036734c;
  iVar1 = DAT_00367348;
  *(undefined4 *)(DAT_00367348 + *(short *)(param_1 + 0x1c) * 4) = 2;
  FUN_00374a58(uVar2,param_1 + 0x1a4,*(undefined4 *)(iVar1 + 0x48 + *(short *)(param_1 + 0x1c) * 4))
  ;
  uVar2 = DAT_00367350;
  *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
  *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) | 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) & 0xfd;
  *(undefined1 *)(param_1 + 0xf00) = 0;
  *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) & 0xfb;
  *(undefined2 *)(param_1 + 0x234) = 0;
  uVar3 = DAT_00367354;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  return;
}
