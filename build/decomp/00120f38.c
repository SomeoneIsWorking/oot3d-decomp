// OoT3D decomp @ 00120f38  name=FUN_00120f38  size=208

void FUN_00120f38(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,8);
  uVar1 = DAT_00121008;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = FUN_003736fc(uVar3,DAT_00121008,param_1 + 0x1a4);
  if (iVar4 != 0) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,0xb);
    uVar2 = DAT_00121010;
    uVar3 = DAT_0012100c;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,DAT_00121010,uVar5,DAT_0012100c,param_1 + 0x1a4,0xb,0);
    *(undefined4 *)(param_1 + 0x1050) = uVar2;
    *(undefined4 *)(param_1 + 0x1054) = uVar2;
    uVar1 = DAT_00121014;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    *(undefined2 *)(param_1 + 0x232) = 0;
  }
  *(undefined2 *)(param_1 + 0x250) = 1;
  FUN_00373500(DAT_00121020,DAT_0012101c,DAT_00121018,param_1 + 0x294);
  *(undefined2 *)(param_1 + 0x254) = 5;
  return;
}
