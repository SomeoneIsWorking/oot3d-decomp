// OoT3D decomp @ 0022e25c  name=FUN_0022e25c  size=448

void FUN_0022e25c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_003510b0(param_1,DAT_0022e41c);
  FUN_00372d4c(DAT_0022e428,DAT_0022e420,param_1 + 0xbc,DAT_0022e424);
  FUN_00372f38(param_1,param_2,param_1 + 0xba0,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,2,param_1 + 0x228,param_1 + 0x6a0,0x16);
  FUN_0035c358(param_1 + 0xba4,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xb48,param_1,DAT_0022e42c);
  uVar1 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0xb30);
  *(undefined4 *)(param_1 + 0xb2c) = uVar1;
  uVar3 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x10),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0xc),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  FUN_003591e4(uVar1,uVar2,uVar3,param_1 + 0xb30,0xff,0xff,0xff,200,0);
  *(undefined1 *)(param_1 + 0xb2b) = 0xff;
  if (*(int *)(param_2 + 0x7f48) == 0) {
    *(undefined4 *)(param_2 + 0x7f48) = 1;
    FUN_003462ac(param_2,param_1,0x41);
    *(undefined2 *)(param_1 + 0xb24) = *(undefined2 *)(DAT_0022e430 + param_1);
    *(undefined1 *)(param_1 + 0xb1d) = 0x30;
    *(undefined2 *)(param_1 + 0xb20) = 0;
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x8000;
    *(undefined1 *)(param_1 + 0xb6) = 0xfe;
    *(undefined4 *)(param_1 + 0xb18) = DAT_0022e434;
  }
  else {
    FUN_00374428(param_1);
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  return;
}
