// OoT3D decomp @ 0015434c  name=FUN_0015434c  size=188

void FUN_0015434c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x5c0);
  uVar1 = DAT_00154410;
  uVar3 = DAT_0015440c;
  FUN_00373500(DAT_00154410,DAT_0015440c,DAT_00154408,param_1 + 0x528);
  iVar2 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar3,param_1 + 0x5c0);
  if (iVar2 != 0) {
    if (*(short *)(*(int *)(DAT_00154414 + 0x94) + 0x1d4) == 0) {
      FUN_0036e3a8(param_1,param_2);
    }
    else {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00154418;
      FUN_00374a58(uVar1,param_1 + 0x5c0,0xe);
      uVar3 = FUN_0036ae14(param_1 + 0x5c0,0xe);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1fc) = uVar3;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x528) = uVar1;
  }
  return;
}
