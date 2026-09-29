// OoT3D decomp @ 002ac704  name=FUN_002ac704  size=160

void FUN_002ac704(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_002ac7a4,param_3,param_4,param_4);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1b0,2,0);
  uVar1 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0x10) = 1;
  if (((*(ushort *)(DAT_002ac7a8 + 0xf8) & 0x80) == 0) && (*(int *)(DAT_002ac7ac + 4) != 0)) {
    *(undefined4 *)(param_1 + 0x1a8) = DAT_002ac7b0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a8) = DAT_002ac7b4;
  }
  uVar1 = DAT_002ac7b8;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
