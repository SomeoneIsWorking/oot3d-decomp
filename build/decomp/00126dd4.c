// OoT3D decomp @ 00126dd4  name=FUN_00126dd4  size=204

void FUN_00126dd4(int param_1,undefined4 param_2)

{
  FUN_003731e0(param_1 + 0x1a8);
  if (*(short *)(param_1 + 0xd28) == 0) {
    if (DAT_00126ea0 <= *(int *)(param_1 + 0xd48)) {
      FUN_00373500(*(undefined4 *)(param_1 + 0xd50),*(undefined4 *)(param_1 + 0xd54),DAT_00126ea8,
                   param_1 + 0x2c);
      FUN_0036fc20(*(undefined4 *)(param_1 + 0xd58),DAT_00126eac,param_1 + 0xd48);
      FUN_00373500(DAT_00126eb8,DAT_00126eb4,DAT_00126eb0,param_1 + 0xd54);
      FUN_00373500(DAT_00126ec4,DAT_00126ec0,DAT_00126ebc,param_1 + 0xd58);
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 3000;
      FUN_0036d44c(param_1,param_2,0);
      return;
    }
    *(undefined2 *)(param_1 + 0xd28) = 0x1e;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00126ea4;
  }
  return;
}
