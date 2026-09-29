// OoT3D decomp @ 003575e8  name=FUN_003575e8  size=144

undefined4 FUN_003575e8(float param_1,float param_2,int param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar1 = *(int *)(param_3 + 0x20ac);
  if ((*(char *)(iVar1 + 0x1a9) == '\x06') && (*(short *)(DAT_00357678 + iVar1) != 0)) {
    param_1 = param_1 * param_1;
    fVar5 = *(float *)(iVar1 + 0x22a8) - *param_4;
    fVar3 = *(float *)(iVar1 + 0x22ac) - param_4[1];
    fVar4 = *(float *)(iVar1 + 0x22b0) - param_4[2];
    fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
    bVar2 = NAN(param_1) || NAN(fVar4);
    if (param_1 >= fVar4) {
      bVar2 = NAN(fVar3) || NAN(DAT_0035767c);
    }
    if (((param_1 < fVar4 || fVar3 < DAT_0035767c) == bVar2) && (fVar3 <= param_2)) {
      return 1;
    }
  }
  return 0;
}
