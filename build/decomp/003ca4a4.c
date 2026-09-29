// OoT3D decomp @ 003ca4a4  name=FUN_003ca4a4  size=132

void FUN_003ca4a4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (*(short *)(param_1 + 0x1d0) == 0) {
    FUN_00375bcc(param_1,DAT_003ca528);
    uVar2 = DAT_003ca534;
    uVar1 = DAT_003ca530;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + DAT_003ca52c;
    FUN_00373500(DAT_003ca538,uVar2,uVar1,param_1 + 0x30);
    uVar1 = DAT_003ca544;
    if (DAT_003ca53c < *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x28) = DAT_003ca540;
      FUN_00375bcc(param_1,uVar1);
      *(undefined2 *)(param_1 + 0x1d0) = 0x2d;
      *(undefined4 *)(param_1 + 0x1bc) = DAT_003ca548;
    }
  }
  return;
}
