// OoT3D decomp @ 003e28d8  name=FUN_003e28d8  size=108

void FUN_003e28d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x8fe),1,
                       (int)(short)*(undefined4 *)(param_1 + 0x8e8),0);
  FUN_003731e0(param_1 + 0x1e4);
  uVar1 = DAT_003e2944;
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x8fe);
    *(undefined2 *)(param_1 + 0x8f6) = 0;
    FUN_00370350(uVar1,param_1 + 0x1e4,1);
    *(undefined4 *)(param_1 + 0x8f0) = DAT_003e2948;
  }
  return;
}
