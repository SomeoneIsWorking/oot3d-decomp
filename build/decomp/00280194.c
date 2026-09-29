// OoT3D decomp @ 00280194  name=FUN_00280194  size=288

void FUN_00280194(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,0);
  uVar1 = DAT_002802bc;
  *(undefined4 *)(param_1 + 0x70) = DAT_002802b4;
  FUN_00372d4c(DAT_002802c0,DAT_002802b8,param_1 + 0xbc,uVar1);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x66c,0x15);
  FUN_0035c358(param_1 + 0xab0,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xd48,param_1,DAT_002802c4);
  uVar1 = DAT_002802c8;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = DAT_002802cc;
  *(undefined4 *)(param_1 + 0x5c) = DAT_002802d0;
  if (*(int *)(param_2 + 0x7f78) == 0) {
    *(undefined4 *)(param_2 + 0x7f78) = 1;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    if ((*(ushort *)(DAT_002802d4 + 0xf2) & 0x8000) != 0) {
      *(undefined2 *)(DAT_002802d8 + param_1) = 1;
    }
    *(undefined4 *)(param_1 + 0xc7c) = DAT_002802dc;
    return;
  }
  *(undefined1 *)(param_1 + 0xd1b) = 1;
  FUN_00374428(param_1);
  return;
}
