// OoT3D decomp @ 0035e7b4  name=FUN_0035e7b4  size=224

void FUN_0035e7b4(int param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 != 0) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * DAT_0035e894;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * DAT_0035e894;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 * DAT_0035e894;
    fVar4 = (float)FUN_002cfca0(param_2);
    fVar5 = (float)FUN_00338f60(param_2);
    uVar2 = DAT_0035e898;
    fVar5 = (float)FUN_003696ec((-(fVar7 * fVar4) - fVar9 * fVar5) * fVar8);
    fVar4 = DAT_0035e89c;
    sVar1 = (short)param_2 + -0x3ff7;
    *param_3 = -(short)(int)(fVar5 * DAT_0035e89c);
    fVar5 = (float)FUN_002cfca0((int)sVar1);
    fVar6 = (float)FUN_00338f60((int)sVar1);
    fVar5 = (float)FUN_003696ec((-(fVar7 * fVar5) - fVar9 * fVar6) * fVar8,uVar2);
    param_3[2] = -(short)(int)(fVar5 * fVar4);
  }
  return;
}
