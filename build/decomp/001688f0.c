// OoT3D decomp @ 001688f0  name=FUN_001688f0  size=268

void FUN_001688f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_003510b0(param_1,DAT_001689fc);
  *(undefined4 *)(param_1 + 0xa0) = DAT_00168a00;
  *(undefined1 *)(param_1 + 0xb7) = 2;
  FUN_00372f38(param_1,param_2,0);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a4,0,1,0,0,0);
  FUN_00353dd0(param_2,param_1 + 0x22c);
  FUN_0034fb3c(param_2,param_1 + 0x22c,param_1,DAT_00168a04);
  *(undefined2 *)(param_1 + 0x29c) = 0;
  uVar1 = DAT_00168a08;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_0037572c(uVar1,param_1);
  uVar2 = DAT_00168a10;
  uVar1 = DAT_00168a0c;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 100) = DAT_00168a14;
  *(undefined2 *)(param_1 + 0x298) = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 0;
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00168a1c,uVar1,uVar2,DAT_00168a18,param_1 + 0x1a4,2);
  *(undefined2 *)(param_1 + 0x29a) = 1;
  *(undefined4 *)(param_1 + 0x228) = DAT_00168a20;
  return;
}
