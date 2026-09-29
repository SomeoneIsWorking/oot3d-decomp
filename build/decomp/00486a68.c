// OoT3D decomp @ 00486a68  name=FUN_00486a68  size=208

undefined4 FUN_00486a68(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar2 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar2 + 0x30) < *(int *)(iVar2 + 0x2c)) {
    FUN_00309d80(param_1,param_2);
  }
  uVar1 = DAT_00486b38;
  if (*(int *)(iVar2 + 0x30) < *(int *)(iVar2 + 0x2c)) {
    fVar3 = *(float *)(iVar2 + 0x24);
    fVar4 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x2c),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = ((*(float *)(iVar2 + 0x28) - fVar3) * fVar4) / fVar5 + fVar3;
  }
  else {
    fVar3 = *(float *)(iVar2 + 0x28);
  }
  *(float *)(iVar2 + 0x24) = fVar3;
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  FUN_002d2ee4();
  param_1 = param_1 + param_2 * 0xc;
  if (*(int *)(param_1 + 100) == 0) {
    FUN_00309d64((int)(char)param_2,DAT_00486b3c,param_2);
  }
  FUN_0030cab0(param_1 + 100,param_1 + 0x68,param_3 + 4);
  return 1;
}
