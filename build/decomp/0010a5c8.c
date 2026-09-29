// OoT3D decomp @ 0010a5c8  name=FUN_0010a5c8  size=128

void FUN_0010a5c8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_0010a64c;
  if (iVar3 != 0) {
    *(undefined2 *)(DAT_0010a648 + param_1) = 0x26;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = DAT_0010a654;
    *(undefined4 *)(param_1 + 0x6c) = DAT_0010a650;
    *(undefined4 *)(param_1 + 0x7d8) = uVar1;
  }
  uVar1 = DAT_0010a65c;
  fVar2 = DAT_0010a658;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x140;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar2;
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,uVar1);
  FUN_00372aa8(param_1 + 0x7e0,0x4b0,100);
  return;
}
