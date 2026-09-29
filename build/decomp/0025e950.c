// OoT3D decomp @ 0025e950  name=FUN_0025e950  size=232

void FUN_0025e950(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_0025ea38);
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x21c,5,0);
  uVar1 = FUN_00353fd4(param_1,param_2,2);
  FUN_00353dd0(param_2,param_1 + 0x1c4);
  FUN_00353d24(param_2,param_1 + 0x1c4,param_1,DAT_0025ea3c);
  FUN_0037632c(param_1,param_1 + 0x1c4);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0025ea40;
  }
  else {
    *(undefined2 *)(param_1 + 0xbc) = 0x8000;
    uVar1 = DAT_0025ea48;
    *(undefined4 *)(param_1 + 0xc4) = DAT_0025ea44;
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x19b) = 2;
  return;
}
