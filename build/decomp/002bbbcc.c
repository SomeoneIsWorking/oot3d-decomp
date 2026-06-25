// OoT3D decomp @ 002bbbcc  name=FUN_002bbbcc  size=440

undefined4 FUN_002bbbcc(float param_1,int param_2,int param_3,float *param_4,undefined2 *param_5)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = DAT_002bbd8c;
  fVar7 = DAT_002bbd84;
  if (((*(char *)(param_3 + 0x1749) != '\0') || (*(char *)(param_2 + 0x5c2d) == '\x14')) ||
     ((*(uint *)(param_3 + 0x1710) & 1) != 0)) {
LAB_002bbc24:
    *param_4 = DAT_002bbd84;
    *param_5 = *(undefined2 *)(param_3 + 0xbe);
    return 0;
  }
  uVar2 = (ushort)*(byte *)(param_3 + 2);
  bVar3 = uVar2 == 2;
  if (bVar3) {
    uVar2 = *(ushort *)(DAT_002bbd88 + 0x44);
  }
  if (bVar3 && uVar2 == 0) goto LAB_002bbc24;
  bVar3 = param_1 == DAT_002bbd84;
  *param_4 = *(float *)(param_3 + 0x29cc);
  *param_5 = *(undefined2 *)(iVar1 + param_3);
  if (bVar3) {
    fVar4 = *param_4 * DAT_002bbd90;
  }
  else {
    fVar4 = *param_4 - DAT_002bbd94;
    *param_4 = fVar4;
    if (fVar4 < fVar7) {
      *param_4 = fVar7;
      goto LAB_002bbcb4;
    }
    fVar4 = (float)FUN_00338f60((int)(short)(int)(fVar4 * DAT_002bbd98));
    fVar4 = DAT_002bbda0 + DAT_002bbda4 * (DAT_002bbd9c - fVar4) * (DAT_002bbd9c - fVar4);
  }
  *param_4 = fVar4;
LAB_002bbcb4:
  if (*(float *)(param_3 + 0x29cc) == fVar7) {
    return 0;
  }
  fVar5 = (float)FUN_002cfca0((int)*(short *)(DAT_002bbda8 + param_3));
  fVar6 = *(float *)(param_3 + 0x226c);
  fVar4 = fVar7;
  if ((fVar7 <= fVar5) && (fVar4 = fVar5, DAT_002bbdac < (int)fVar5)) {
    fVar4 = DAT_002bbdb0;
  }
  if ((((*(uint *)(param_3 + 0x29b8) & 0x100) == 0) && (*(float *)(param_3 + 0x1760) != fVar7)) &&
     (fVar6 = fVar6 - *(float *)(param_3 + 0x1760) * DAT_002bbdb4, (int)fVar6 < 0x40000000)) {
    fVar6 = DAT_002bbdb8;
  }
  fVar4 = *param_4 * DAT_002bbdbc - fVar4 * DAT_002bbdc0 * fVar4;
  *param_4 = fVar4;
  if ((fVar7 <= fVar4) &&
     (fVar7 = fVar6, fVar4 == fVar6 || fVar4 < fVar6 != (NAN(fVar4) || NAN(fVar6)))) {
    fVar7 = fVar4;
  }
  *param_4 = fVar7;
  return 1;
}

