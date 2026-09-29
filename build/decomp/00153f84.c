// OoT3D decomp @ 00153f84  name=FUN_00153f84  size=372

void FUN_00153f84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  if (((int)*(short *)(param_1 + 0x234) & 1U) != 0) {
    FUN_00354014(param_1,((int)*(short *)(param_1 + 0x234) >> 1) + 1);
  }
  uVar1 = DAT_001540fc;
  if (*(char *)(param_1 + 0x231) == '\0') {
    *(undefined2 *)(param_1 + 0x11a) = 10;
    if (*(short *)(param_1 + 0x236) != 0) {
      fVar5 = (float)FUN_002cfca0((int)*(short *)(*(int *)(param_1 + 0x128) + 0xbc));
      fVar7 = DAT_00154104;
      fVar5 = fVar5 * DAT_00154104;
      fVar6 = (float)FUN_00338f60((int)*(short *)(*(int *)(param_1 + 0x128) + 0xbc));
      fVar6 = fVar6 * fVar7;
      bVar4 = (*(ushort *)(param_1 + 0x236) & 1) != 0;
      if (bVar4) {
        fVar5 = -fVar5;
      }
      if (bVar4) {
        fVar6 = -fVar6;
      }
      fVar7 = (float)FUN_00338f60((int)*(short *)(*(int *)(param_1 + 0x128) + 0xbe));
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0xee0) + fVar6 * fVar7;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xee4) + fVar5;
      fVar7 = (float)FUN_002cfca0((int)*(short *)(*(int *)(param_1 + 0x128) + 0xbe));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xee8) + fVar6 * fVar7;
      *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
      return;
    }
  }
  else {
    *(undefined2 *)(DAT_001540f8 + param_1) = 1;
    FUN_00375bcc(param_1,uVar1);
    iVar3 = 0;
    do {
      iVar2 = param_1 + iVar3 * 0x2c;
      if (*(short *)(iVar2 + 0x12f4) != 0) {
        *(float *)(iVar2 + 0x12d4) = *(float *)(iVar2 + 0x12d4) + *(float *)(param_1 + 0x28);
        *(float *)(iVar2 + 0x12d8) = *(float *)(iVar2 + 0x12d8) + *(float *)(param_1 + 0x2c);
        *(float *)(iVar2 + 0x12dc) = *(float *)(iVar2 + 0x12dc) + *(float *)(param_1 + 0x30);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x12);
    FUN_003672b8(param_1);
    *(undefined1 *)(*(int *)(DAT_00154100 + 0x30) + 0x231) = 1;
  }
  return;
}
