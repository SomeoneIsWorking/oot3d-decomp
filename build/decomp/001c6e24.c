// OoT3D decomp @ 001c6e24  name=FUN_001c6e24  size=256

void FUN_001c6e24(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  fVar5 = DAT_001c6f24;
  iVar4 = FUN_003736fc(DAT_001c6f28,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00375bcc(param_1,DAT_001c6f2c);
  }
  fVar1 = DAT_001c6f30;
  iVar4 = FUN_003736fc(*(float *)(param_1 + 0x278) * fVar5,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00353b70(DAT_001c6f34,param_1);
  }
  uVar3 = DAT_001c6f3c;
  uVar2 = DAT_001c6f38;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  FUN_0036fc20(uVar3,uVar2,param_1 + 0x60);
  FUN_0036fc20(uVar3,uVar2,param_1 + 0x68);
  fVar5 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x23c) * (short)DAT_001c6f40));
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar5 * fVar1;
  if (*(char *)(param_1 + 0x272) != '\0') {
    *(undefined1 *)(param_1 + 0x272) = 0;
    FUN_00258c60(param_1,param_2);
    *(undefined2 *)(param_1 + 0x264) = 0x78;
  }
  return;
}
