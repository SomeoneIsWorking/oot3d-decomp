// OoT3D decomp @ 003b342c  name=FUN_003b342c  size=392

void FUN_003b342c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  iVar5 = *(int *)(param_2 + 0x20ac);
  if (DAT_003b35b4 <
      (int)(short)((*(short *)(param_1 + 0x16) + *(short *)(param_1 + 0x1c4) * 0x2000) -
                  *(short *)(param_1 + 0x36)) + 0x1cffU) {
    uVar4 = 10;
    uVar3 = 0x15;
  }
  else {
    uVar4 = 4;
    uVar3 = 0x6a;
  }
  FUN_00372aa8(param_1 + 0x1c6,uVar3,uVar4);
  iVar2 = FUN_00370378(param_1 + 0x1c8,(int)(short)(*(short *)(param_1 + 0x1c2) << 0xd),
                       (int)*(short *)(param_1 + 0x1c6));
  uVar4 = DAT_003b35b8;
  if (iVar2 == 0) {
    sVar1 = *(short *)(param_1 + 0x16) + *(short *)(param_1 + 0x1c8) +
            *(short *)(param_1 + 0x1c4) * 0x2000;
    *(short *)(param_1 + 0x36) = sVar1;
    *(short *)(param_1 + 0xbe) = sVar1;
  }
  else {
    *(ushort *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + *(short *)(param_1 + 0x1c2) & 7;
    *(uint *)(iVar5 + 0x1714) = *(uint *)(iVar5 + 0x1714) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x1a8) = uVar4;
    FUN_001445e8(param_1,param_2);
  }
  if ((*(uint *)(DAT_003b35bc + iVar5) & 0x10) == 0) {
    if ((int)ABS(*(float *)(param_1 + 0x1a8)) < DAT_003b35c0) {
      *(undefined1 *)(param_1 + 0x1ca) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x1ca) != '\0') {
    iVar5 = *(int *)(param_2 + 0x20ac);
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1c8));
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1c8));
    fVar8 = *(float *)(param_1 + 0x1d4);
    fVar9 = *(float *)(param_1 + 0x1cc);
    fVar10 = *(float *)(param_1 + 0x1d0);
    *(float *)(iVar5 + 0x28) = *(float *)(param_1 + 0x28) + fVar8 * fVar6 + fVar9 * fVar7;
    *(float *)(iVar5 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar10;
    *(float *)(iVar5 + 0x30) = *(float *)(param_1 + 0x30) + (fVar8 * fVar7 - fVar9 * fVar6);
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  FUN_00373264(param_1,DAT_003b35c4);
  return;
}
