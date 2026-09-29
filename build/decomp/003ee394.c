// OoT3D decomp @ 003ee394  name=FUN_003ee394  size=312

void FUN_003ee394(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036bc98();
  uVar1 = DAT_003ee4d8;
  if (iVar2 == 0) {
    *(short *)(DAT_003ee4d4 + param_1) = (short)DAT_003ee4d0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    FUN_00359220(uVar1,uVar1,param_1,param_2,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98c) = DAT_003ee4cc;
  }
  uVar1 = DAT_003ee4e0;
  if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601) &&
     (*(int *)(param_1 + 0x98) < DAT_003ee4dc)) {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x96c,param_1 + 0x972,
                 0x4300);
    return;
  }
  FUN_00375a18(param_1 + 0x96c,0,6,DAT_003ee4e0,100);
  FUN_00375a18(param_1 + 0x96e,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x972,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x974,0,6,uVar1,100);
  return;
}
