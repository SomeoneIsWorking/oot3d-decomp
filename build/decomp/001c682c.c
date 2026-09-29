// OoT3D decomp @ 001c682c  name=FUN_001c682c  size=168

void FUN_001c682c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;

  FUN_00373d40(param_1 + 0x1a4,5);
  iVar3 = DAT_001c68e4;
  iVar2 = DAT_001c68dc;
  fVar4 = DAT_001c68d8;
  iVar1 = DAT_001c68d4;
  if (*(int *)(param_1 + 0x8ac) != DAT_001c68d4) {
    *(undefined2 *)(param_1 + 0x8b0) = *(undefined2 *)(param_1 + 0x8b2);
  }
  fVar4 = *(float *)(param_1 + 0x9c) + fVar4;
  *(float *)(param_1 + 0x8b4) = fVar4;
  if ((int)fVar4 < iVar2) {
    fVar4 = DAT_001c68e0;
  }
  *(float *)(param_1 + 0x8b4) = fVar4;
  if (iVar3 < (int)fVar4) {
    FUN_0036e670(param_2,param_1 + 8,0,0,0,DAT_001c68e8);
  }
  if (iVar3 < *(int *)(param_1 + 0x8b4)) {
    FUN_00375bcc(param_1,DAT_001c68ec);
  }
  *(int *)(param_1 + 0x8ac) = iVar1;
  return;
}
