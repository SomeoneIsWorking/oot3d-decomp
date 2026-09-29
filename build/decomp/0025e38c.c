// OoT3D decomp @ 0025e38c  name=FUN_0025e38c  size=252

void FUN_0025e38c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003510b0(param_1,DAT_0025e488);
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x354,3,param_1 + 0x358,4,0);
  uVar1 = FUN_00353fd4(param_1,param_2,3);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_0034f910(param_2,param_1 + 0x1c4);
  FUN_0034f760(param_2,param_1 + 0x1c4,param_1,DAT_0025e48c,param_1 + 0x1e4);
  *(char *)(param_1 + 0x1c0) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined1 *)(param_1 + 0x19b) = 2;
  iVar2 = FUN_0036e864(param_2);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0025e490;
  }
  else {
    FUN_00374428(param_1);
  }
  return;
}
