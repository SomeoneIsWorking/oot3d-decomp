// OoT3D decomp @ 00366c24  name=FUN_00366c24  size=220

void FUN_00366c24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;

  iVar2 = *(int *)(DAT_00366d00 + param_2);
  if (*(char *)(param_1 + 0x9e1) != '\0') {
    iVar1 = *(int *)(param_1 + 0x9dc);
    bVar3 = iVar1 == DAT_00366d04;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x124);
    }
    if (bVar3) {
      fVar5 = *(float *)(iVar1 + 0x98);
      goto LAB_00366cc0;
    }
  }
  iVar1 = iVar2 + 0x2200;
  bVar3 = *(char *)(iVar2 + 0x2227) != '\0';
  if (bVar3) {
    iVar1 = (int)*(char *)(iVar2 + 0x2226);
  }
  if ((bVar3 && iVar1 < 0x18) ||
     (0x3f7fffff < (int)(*(float *)(iVar2 + 0x2c) - *(float *)(iVar2 + 0x84)))) {
    FUN_003705a0(DAT_00366d14,DAT_00366d10,param_1 + 0xa50);
  }
  else {
    FUN_003705a0(DAT_00366d0c,DAT_00366d08,param_1 + 0xa50);
  }
  fVar5 = *(float *)(param_1 + 0xa50);
LAB_00366cc0:
  fVar4 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
  *(float *)(param_1 + 0x28) = *(float *)(iVar2 + 0x28) + fVar5 * fVar4;
  fVar4 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
  *(float *)(param_1 + 0x30) = *(float *)(iVar2 + 0x30) + fVar5 * fVar4;
  return;
}
