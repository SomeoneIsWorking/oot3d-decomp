// OoT3D decomp @ 001121c4  name=FUN_001121c4  size=312

void FUN_001121c4(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_00369a48();
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
      FUN_00369674(param_1,1);
    }
    else if (uVar1 == 1) {
      FUN_00369674(param_1,7);
    }
    else if (uVar1 == 2) {
      *(undefined4 *)(param_1 + 0x98c) = DAT_001122fc;
    }
    *(undefined4 *)(param_1 + 0x13c) = DAT_00112300;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  iVar2 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
  if (iVar2 + 0x4000U < 0x8001) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),6,4000,100);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x96c,param_1 + 0x972,
                 0x4300);
    return;
  }
  uVar3 = DAT_00112308;
  if (-1 < iVar2) {
    uVar3 = 0x2000;
  }
  FUN_00375a18(param_1 + 0x96e,uVar3,6,DAT_00112304,0x100);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0xc,1000,100);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  return;
}
