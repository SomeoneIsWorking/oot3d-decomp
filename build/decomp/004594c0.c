// OoT3D decomp @ 004594c0  name=FUN_004594c0  size=464

void FUN_004594c0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  iVar7 = FUN_0037571c();
  piVar4 = DAT_004596a0;
  fVar3 = DAT_0045969c;
  fVar2 = DAT_00459698;
  iVar1 = DAT_00459694;
  fVar10 = DAT_00459690;
  iVar8 = (int)(short)((short)DAT_004596a0[3] + -0x8000);
  if (iVar7 == 0) {
    fVar9 = (float)FUN_002cfca0(iVar8);
    *(float *)(param_1 + 0x3194) = fVar9 * fVar10 * *(float *)(iVar1 + 0x1c);
    fVar10 = (float)FUN_00338f60((int)(short)((short)piVar4[3] + -0x8000));
    *(float *)(param_1 + 0x3198) = fVar10 * fVar2 * *(float *)(iVar1 + 0x1c);
    fVar10 = (float)FUN_00338f60((int)(short)((short)piVar4[3] + -0x8000));
    *(float *)(param_1 + 0x319c) = fVar10 * fVar3 * *(float *)(iVar1 + 0x1c);
  }
  else {
    fVar9 = (float)FUN_002cfca0(iVar8);
    uVar6 = DAT_004596a8;
    uVar5 = DAT_004596a4;
    FUN_0036e168(fVar9 * fVar10 * *(float *)(iVar1 + 0x1c),DAT_004596a8,DAT_004596a4,DAT_004596a4,
                 param_1 + 0x3194);
    fVar10 = (float)FUN_00338f60((int)(short)((short)piVar4[3] + -0x8000));
    FUN_0036e168(fVar10 * fVar2 * *(float *)(iVar1 + 0x1c),uVar6,uVar5,uVar5,param_1 + 0x3198);
    fVar10 = (float)FUN_00338f60((int)(short)((short)piVar4[3] + -0x8000));
    FUN_0036e168(fVar10 * fVar3 * *(float *)(iVar1 + 0x1c),uVar6,uVar5,uVar5,param_1 + 0x3198);
  }
  if (((*piVar4 != 0xcd) || (*(int *)(DAT_004596ac + 0x4e8) != 5)) &&
     (*(short *)(param_1 + 0x104) != 0x44)) {
    local_34 = *(float *)(param_1 + 0x3194);
    local_30 = *(float *)(param_1 + 0x3198);
    local_2c = *(float *)(param_1 + 0x319c);
    FUN_0047d558(param_1 + 0x327c,param_1 + 0x1b8,&local_34);
    local_3c = -local_30;
    local_40 = -local_34;
    local_38 = -local_2c;
    FUN_0047d5e0(param_1 + 0x327c,param_1 + 0x1b8,&local_40);
  }
  return;
}
