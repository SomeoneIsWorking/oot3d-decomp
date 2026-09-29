// OoT3D decomp @ 00210758  name=FUN_00210758  size=300

void FUN_00210758(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x970));
  if (iVar1 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    FUN_003510b0(param_1,DAT_00210884);
    FUN_00372f38(param_1,param_2,param_1 + 0x974,0,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x568,0x10);
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0021088c,DAT_00210888,uVar2,DAT_00210888,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x140) = DAT_00210890;
    *(undefined4 *)(param_1 + 0x13c) = DAT_00210894;
    FUN_00353dd0(param_2);
    FUN_0034fb3c(param_2,param_1 + 0x8ac,param_1,DAT_00210898);
    FUN_0037322c(DAT_0021089c,param_1);
    *(undefined1 *)(param_1 + 0x972) = 0;
    *(undefined1 *)(param_1 + 0x971) = 0;
    iVar1 = DAT_002108a4;
    *(undefined2 *)(param_1 + 0x92e) = 0;
    *(short *)(iVar1 + param_1) = (short)DAT_002108a0;
    *(undefined4 *)(param_1 + 0x8a8) = DAT_002108a8;
  }
  return;
}
