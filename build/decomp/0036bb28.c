// OoT3D decomp @ 0036bb28  name=FUN_0036bb28  size=128

undefined4 FUN_0036bb28(float param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;

  iVar1 = *(int *)(param_3 + 0x20ac);
  if ((*(uint *)(iVar1 + 4) & 0x100) != 0) {
    return 0;
  }
  if (*(char *)(param_2 + 0x114) == '\0') {
    if (param_1 < ABS(*(float *)(param_2 + 0x9c))) {
      return 0;
    }
    fVar3 = *(float *)(param_2 + 0x98);
    fVar4 = *(float *)(iVar1 + 0x1730);
    bVar2 = NAN(fVar3) || NAN(fVar4);
    if (fVar3 <= fVar4) {
      bVar2 = NAN(fVar3) || NAN(param_1);
      fVar4 = param_1;
    }
    if (fVar3 != fVar4 && fVar3 < fVar4 == bVar2) {
      return 0;
    }
  }
  *(int *)(iVar1 + 0x172c) = param_2;
  *(undefined4 *)(iVar1 + 0x1730) = *(undefined4 *)(param_2 + 0x98);
  *(undefined1 *)(iVar1 + 0x172b) = 0;
  return 1;
}
