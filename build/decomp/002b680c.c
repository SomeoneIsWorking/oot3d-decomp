// OoT3D decomp @ 002b680c  name=FUN_002b680c  size=640

void FUN_002b680c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_3c;

  iVar6 = *(int *)(DAT_002b6a8c + param_2);
  fVar9 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x4a8);
  fVar7 = *(float *)(iVar6 + 0x30) - *(float *)(param_1 + 0x4b0);
  iVar3 = FUN_003758b0(SQRT(fVar9 * fVar9 + fVar7 * fVar7),
                       *(float *)(param_1 + 0x4ac) - *(float *)(iVar6 + 0x2c));
  iVar5 = DAT_002b6a94;
  if (DAT_002b6a90 < iVar3) {
    iVar3 = DAT_002b6a90;
  }
  if ((*(byte *)(param_1 + 0x558) & 2) != 0) {
    *(byte *)(param_1 + 0x558) = *(byte *)(param_1 + 0x558) & 0xfd;
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    iVar8 = *(int *)(param_1 + 0x4cc);
    if (DAT_002b6a98 < *(int *)(param_1 + 0x4cc)) {
      iVar8 = iVar5;
    }
    *(int *)(param_1 + 0x4cc) = iVar8;
  }
  iVar8 = DAT_002b6aac;
  fVar7 = DAT_002b6aa4;
  uVar1 = DAT_002b6aa0;
  if ((*(short *)(param_1 + 0x4d8) < DAT_002b6a9c) || (*(int *)(param_1 + 0x4a4) == 0)) {
    FUN_0036e168(DAT_002b6aa4,DAT_002b6aa0,DAT_002b6aa8,DAT_002b6aa4,param_1 + 0x4cc);
    *(undefined2 *)(param_1 + 0x4e4) = 0;
    if (*(float *)(param_1 + 0x4cc) == fVar7) {
      *(float *)(param_1 + 0x4d4) = fVar7;
      *(float *)(param_1 + 0x4d0) = fVar7;
      FUN_0039bb60(param_1);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4a4) + -1;
    *(int *)(param_1 + 0x4a4) = iVar4;
    uVar2 = DAT_002b6ab0;
    if (iVar8 < iVar4) {
      return;
    }
    FUN_00375a18(param_1 + 0x4e0,
                 (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)),10,
                 DAT_002b6ab0,0);
    FUN_00375a18(param_1 + 0x4da,(int)*(short *)(param_1 + 0x92),10,uVar2,0);
    FUN_00375a18(param_1 + 0x4d8,iVar3,10,uVar2,0);
    local_3c = *(float *)(iVar6 + 0x2c);
    if ((uint)*(float *)(iVar6 + 0x84) < (uint)DAT_002b6ab4) {
      local_3c = *(float *)(iVar6 + 0x84);
    }
    fVar10 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x4a8);
    local_3c = local_3c - *(float *)(param_1 + 0x4ac);
    fVar9 = *(float *)(iVar6 + 0x30) - *(float *)(param_1 + 0x4b0);
    FUN_0036e168(SQRT(fVar10 * fVar10 + local_3c * local_3c + fVar9 * fVar9),uVar1,
                 *(undefined4 *)(param_1 + 0x4e8),fVar7,param_1 + 0x4d4);
    FUN_0036e168(iVar5,uVar1,DAT_002b6ab8,fVar7,param_1 + 0x4cc);
    FUN_00375bcc(param_1,DAT_002b6abc);
    if (2 < *(short *)(param_1 + 0x4e4)) {
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x548);
    }
    *(undefined2 *)(param_1 + 0x4e4) = 3;
  }
  iVar5 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e8);
  }
  return;
}
