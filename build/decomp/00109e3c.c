// OoT3D decomp @ 00109e3c  name=FUN_00109e3c  size=348

void FUN_00109e3c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;

  *(undefined1 *)(param_1 + 4000) = 9;
  FUN_003731e0(param_1 + 0x1a8);
  uVar1 = DAT_00109fac;
  iVar4 = DAT_00109f9c;
  iVar2 = *(int *)(DAT_00109f9c + 0x44);
  *(undefined4 *)(iVar2 + 0x1708) = DAT_00109f98;
  *(undefined4 *)(iVar2 + 0x170c) = DAT_00109fa0;
  *(undefined4 *)(iVar2 + 0x1710) = DAT_00109fa4;
  *(undefined4 *)(iVar2 + 0x1728) = DAT_00109fa8;
  if (*(short *)(param_1 + 0xaee) == 0) {
    if (*(short *)(param_1 + 0xae2) == 0) {
      *(undefined2 *)(param_1 + 0xaee) = 1;
      FUN_00374a58(DAT_00109fb0,param_1 + 0x1a8,0x1c);
      uVar3 = FUN_0036ae14(param_1 + 0x1a8,0x1c);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar3;
      FUN_003731e0(param_1 + 0x1a8);
      uVar3 = DAT_00109fb8;
      *(undefined4 *)(*(int *)(iVar4 + 0x44) + 0x171c) = DAT_00109fb4;
      FUN_00375bcc(param_1,uVar3);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x1710) = DAT_00109fbc;
    iVar4 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar1,param_1 + 0x1a8);
    if (iVar4 != 0) {
      FUN_0036e288(param_1,param_2);
    }
  }
  uVar3 = DAT_00109fc0;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  FUN_0036fc20(uVar1,uVar3,param_1 + 0x60);
  FUN_0036fc20(uVar1,uVar3,param_1 + 100);
  FUN_0036fc20(uVar1,uVar3,param_1 + 0x68);
  return;
}
