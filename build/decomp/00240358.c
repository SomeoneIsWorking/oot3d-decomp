// OoT3D decomp @ 00240358  name=FUN_00240358  size=364

void FUN_00240358(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_003510b0(param_1,DAT_002404c4);
  FUN_003532e8(param_1,1);
  FUN_00372f38(param_1,param_2,param_1 + 0x1d0,0x16,param_1 + 0x1d4,0xb,param_1 + 0x1d8,0xb,
               param_1 + 0x1dc,0x17,0,uVar3);
  *(char *)(param_1 + 0x1c1) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = uVar1 & 0xff;
  if ((uVar1 & 0xff) == 0) {
    uVar3 = FUN_00353fd4(param_1,param_2,0x10);
    *(undefined1 *)(param_1 + 0x1c0) = 0xc;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002404c8;
  }
  else {
    uVar3 = FUN_00353fd4(param_1,param_2,0x11);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002404cc;
  }
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x4000;
  *(undefined2 *)(DAT_002404d0 + param_1) = 0;
  if ((*(short *)(param_1 + 0x1c) == 0) &&
     (iVar2 = FUN_0036aa20(*(float *)(param_1 + 0x28) + DAT_002404d8,
                           *(float *)(param_1 + 0x2c) + DAT_002404d4,*(undefined4 *)(param_1 + 0x30)
                           ,param_2 + 0x208c,param_1,param_2,0xb0,0,0,0,1), iVar2 == 0)) {
    FUN_00374428(param_1);
  }
  return;
}
