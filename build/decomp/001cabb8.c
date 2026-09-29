// OoT3D decomp @ 001cabb8  name=FUN_001cabb8  size=508

void FUN_001cabb8(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;

  iVar4 = DAT_001cadb4;
  cVar5 = '\0';
  if (*(short *)(param_1 + 0x7e2) != 0) {
    *(short *)(param_1 + 0x7e2) = *(short *)(param_1 + 0x7e2) + -1;
  }
  iVar3 = *(int *)(param_1 + 0x124);
  iVar6 = *(int *)(param_1 + 0x128);
  if (*(short *)(param_1 + 0x7e2) == 0) {
    if (*(int *)(iVar3 + 0x7d8) != iVar4) {
      FUN_00364084(iVar3,param_2);
    }
    if (*(int *)(iVar6 + 0x7d8) != iVar4) {
      FUN_00364084(iVar6,param_2);
    }
  }
  else {
    cVar5 = *(int *)(iVar3 + 0x7d8) != iVar4 && *(int *)(iVar3 + 0x7d8) != DAT_001cadb8;
    if (*(int *)(iVar6 + 0x7d8) != iVar4 && *(int *)(iVar6 + 0x7d8) != DAT_001cadb8) {
      cVar5 = cVar5 + '\x01';
    }
  }
  fVar9 = *(float *)(param_1 + 0x54);
  if (cVar5 == '\x01') {
    FUN_003705a0(DAT_001cadc0,DAT_001cadbc,param_1 + 0x54);
  }
  else if (cVar5 == '\0') {
    FUN_003705a0(DAT_001cadc4,DAT_001cadbc,param_1 + 0x54);
  }
  fVar8 = *(float *)(param_1 + 0x54);
  bVar7 = fVar9 != DAT_001cadc8;
  fVar1 = DAT_001cadc8;
  if (bVar7) {
    fVar1 = DAT_001cadcc;
  }
  *(float *)(param_1 + 0x5c) = fVar8;
  *(float *)(param_1 + 0x58) = fVar8;
  if ((!bVar7 || fVar9 == fVar1) && (fVar8 != fVar9)) {
    FUN_00375bcc(param_1,DAT_001cadd0);
  }
  fVar9 = DAT_001cadd8;
  iVar4 = DAT_001cadd4;
  *(float *)(param_1 + 0x824) =
       *(float *)(DAT_001cadd4 + 0x20) * *(float *)(param_1 + 0x54) * DAT_001cadd8;
  *(float *)(param_1 + 0x828) = *(float *)(iVar4 + 0x24) * *(float *)(param_1 + 0x54) * fVar9;
  iVar4 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x54) < DAT_001caddc) {
      if (*(short *)(param_1 + 0x7dc) == 0) {
        FUN_00373d40(param_1 + 0x1a4,6);
        *(undefined2 *)(param_1 + 0x7dc) = 1;
      }
      else {
        FUN_00373d40(param_1 + 0x1a4,10);
        *(undefined2 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
      *(undefined1 *)(param_1 + 0x7f8) = 0;
      *(byte *)(param_1 + 0x7f5) = *(byte *)(param_1 + 0x7f5) & 0xfb;
      *(undefined2 *)(param_1 + 0x7de) = 0;
      *(byte *)(param_1 + 0x812) = *(byte *)(param_1 + 0x812) | 4;
      puVar2 = DAT_001cade0;
      *(undefined2 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 0xb7) = *puVar2;
      FUN_00370410(param_1);
    }
  }
  FUN_00373264(param_1,DAT_001cade4);
  return;
}
