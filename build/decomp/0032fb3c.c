// OoT3D decomp @ 0032fb3c  name=FUN_0032fb3c  size=120

void FUN_0032fb3c(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;

  FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0xa48) = 5;
  if (-1 < *(short *)(param_1 + 0x1c)) {
    uVar2 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
    *(short *)(param_1 + 0xa6a) = (short)uVar2;
    uVar1 = FUN_003262b8(param_1 + 0x28,uVar2,(int)*(short *)(param_1 + 0xa6c),param_2);
    *(undefined2 *)(param_1 + 0xa6e) = uVar1;
    *(undefined4 *)(param_1 + 0xa50) = 0;
  }
  uVar2 = DAT_0032fbbc;
  *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
  *(undefined4 *)(param_1 + 0xa54) = uVar2;
  return;
}
