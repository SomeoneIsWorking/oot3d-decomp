// OoT3D decomp @ 00359220  name=FUN_00359220  size=180

undefined4 FUN_00359220(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;

  iVar2 = *(int *)(DAT_003592d4 + param_4);
  if (((*(uint *)(iVar2 + 4) & 0x100) == 0) &&
     ((param_5 == 0 || (iVar1 = FUN_0036a7a0(param_4), iVar1 == 0)))) {
    if (*(char *)(param_3 + 0x114) != '\0') {
LAB_003592b0:
      *(int *)(iVar2 + 0x172c) = param_3;
      *(undefined4 *)(iVar2 + 0x1730) = *(undefined4 *)(param_3 + 0x98);
      *(char *)(iVar2 + 0x172b) = (char)param_5;
      return 1;
    }
    if (ABS(*(float *)(param_3 + 0x9c)) <= param_2) {
      fVar4 = *(float *)(param_3 + 0x98);
      fVar5 = *(float *)(iVar2 + 0x1730);
      bVar3 = NAN(fVar4) || NAN(fVar5);
      if (fVar4 <= fVar5) {
        bVar3 = NAN(fVar4) || NAN(param_1);
        fVar5 = param_1;
      }
      if (fVar4 == fVar5 || fVar4 < fVar5 != bVar3) goto LAB_003592b0;
    }
  }
  return 0;
}
