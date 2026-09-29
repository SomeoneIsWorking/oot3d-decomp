// OoT3D decomp @ 00363cb8  name=FUN_00363cb8  size=148

undefined4 FUN_00363cb8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar1 = *(int *)(param_2 + 0x20ac);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xb0),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 + DAT_00363d4c;
  if ((*(uint *)(iVar1 + 4) & 0x100) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x114) == '\0') {
    if (fVar3 < ABS(*(float *)(param_1 + 0x9c))) {
      return 0;
    }
    fVar4 = *(float *)(param_1 + 0x98);
    fVar5 = *(float *)(iVar1 + 0x1730);
    bVar2 = NAN(fVar4) || NAN(fVar5);
    if (fVar4 <= fVar5) {
      bVar2 = NAN(fVar4) || NAN(fVar3);
      fVar5 = fVar3;
    }
    if (fVar4 != fVar5 && fVar4 < fVar5 == bVar2) {
      return 0;
    }
  }
  *(int *)(iVar1 + 0x172c) = param_1;
  *(undefined4 *)(iVar1 + 0x1730) = *(undefined4 *)(param_1 + 0x98);
  *(undefined1 *)(iVar1 + 0x172b) = 0;
  return 1;
}
