// OoT3D decomp @ 00342714  name=FUN_00342714  size=376

undefined4 FUN_00342714(int param_1,int param_2,short *param_3,code *param_4,code *param_5)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float extraout_s11;
  float local_28;
  float local_24;
  float local_20;

  bVar1 = true;
  if ((*(uint *)(param_2 + 4) & 0x100) != 0) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffeff;
    *param_3 = 1;
    return 1;
  }
  if (*param_3 != 0) {
    sVar2 = (*param_5)(param_1,param_2);
    *param_3 = sVar2;
    return 0;
  }
  FUN_00368cc0(param_1,param_2 + 0x3c,&local_24,&local_28);
  sVar2 = (short)(int)(DAT_00342894 + local_20 * local_28 * DAT_00342890);
  if (400 < (ushort)(int)(DAT_0034288c + local_24 * local_28 * DAT_0034288c)) {
    return 0;
  }
  if (sVar2 < 0) {
    return 0;
  }
  if (0xf0 < sVar2) {
    return 0;
  }
  iVar4 = *(int *)(DAT_00342898 + param_1);
  if ((*(uint *)(iVar4 + 4) & 0x100) == 0) {
    if (*(char *)(param_2 + 0x114) != '\0') {
LAB_0034284c:
      *(int *)(iVar4 + 0x172c) = param_2;
      *(undefined4 *)(iVar4 + 0x1730) = *(undefined4 *)(param_2 + 0x98);
      *(undefined1 *)(iVar4 + 0x172b) = 0;
      goto LAB_00342864;
    }
    if (ABS(*(float *)(param_2 + 0x9c)) <= extraout_s11) {
      fVar6 = *(float *)(param_2 + 0x98);
      fVar7 = *(float *)(iVar4 + 0x1730);
      bVar5 = NAN(fVar6) || NAN(fVar7);
      if (fVar6 <= fVar7) {
        bVar5 = NAN(fVar6) || NAN(extraout_s11);
        fVar7 = extraout_s11;
      }
      if (fVar6 == fVar7 || fVar6 < fVar7 != bVar5) goto LAB_0034284c;
    }
  }
  bVar1 = false;
LAB_00342864:
  if (bVar1) {
    uVar3 = (*param_4)(param_1,param_2);
    *(undefined2 *)(DAT_0034289c + param_2) = uVar3;
  }
  return 0;
}
