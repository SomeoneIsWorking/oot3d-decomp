// OoT3D decomp @ 0036bbd0  name=FUN_0036bbd0  size=180

undefined4 FUN_0036bbd0(float param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;

  iVar2 = *(int *)(param_3 + 0x20ac);
  if (((*(uint *)(iVar2 + 4) & 0x100) == 0) &&
     ((param_4 == 0 || (iVar1 = FUN_0036a7a0(param_3), iVar1 == 0)))) {
    if (*(char *)(param_2 + 0x114) != '\0') {
LAB_0036bc60:
      *(int *)(iVar2 + 0x172c) = param_2;
      *(undefined4 *)(iVar2 + 0x1730) = *(undefined4 *)(param_2 + 0x98);
      *(char *)(iVar2 + 0x172b) = (char)param_4;
      return 1;
    }
    if (ABS(*(float *)(param_2 + 0x9c)) <= param_1) {
      fVar4 = *(float *)(param_2 + 0x98);
      fVar5 = *(float *)(iVar2 + 0x1730);
      bVar3 = NAN(fVar4) || NAN(fVar5);
      if (fVar4 <= fVar5) {
        bVar3 = NAN(fVar4) || NAN(param_1);
        fVar5 = param_1;
      }
      if (fVar4 == fVar5 || fVar4 < fVar5 != bVar3) goto LAB_0036bc60;
    }
  }
  return 0;
}
