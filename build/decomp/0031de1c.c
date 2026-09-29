// OoT3D decomp @ 0031de1c  name=FUN_0031de1c  size=388

void FUN_0031de1c(int param_1,int param_2,int param_3,float *param_4,int param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;

  uVar10 = DAT_0031dfa0;
  iVar3 = *(int *)(param_2 + (param_6 + param_3) * 4 + 0x3c0);
  iVar2 = FUN_003695f8();
  sVar1 = (short)param_3 + 1;
  if (iVar2 != 0) {
    uVar10 = DAT_0031dfa4;
  }
  fVar4 = DAT_0031dfa8;
  if (sVar1 != 4) {
    fVar9 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat(3 - *(short *)(param_2 + 0x1bc),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar4 = fVar9 + fVar4 * DAT_0031dfac;
  }
  sVar1 = sVar1 * (short)DAT_0031dfb0;
  iVar2 = (int)(short)(*(short *)(param_2 + 0xbe) + sVar1 * 4);
  if (param_5 == 0) {
    fVar9 = (float)FUN_002cfca0(iVar2);
    fVar9 = -fVar9;
    fVar5 = (float)FUN_00338f60((int)(short)(*(short *)(param_2 + 0xbe) + sVar1 * 4));
    fVar5 = -fVar5;
  }
  else {
    fVar9 = (float)FUN_002cfca0(iVar2);
    fVar5 = (float)FUN_00338f60((int)(short)(*(short *)(param_2 + 0xbe) + sVar1 * 4));
  }
  fVar7 = DAT_0031dfc0;
  fVar6 = DAT_0031dfb8 + fVar4 * DAT_0031dfb4;
  fVar8 = fVar4 * DAT_0031dfbc;
  fVar4 = DAT_0031dfc4 + fVar4 * DAT_0031dfb4;
  param_4[10] = fVar6;
  param_4[5] = fVar6;
  fVar7 = fVar7 + fVar6 * fVar8;
  *param_4 = fVar6;
  param_4[3] = *(float *)(param_2 + 0x28) + fVar7 * fVar9;
  param_4[7] = *(float *)(param_2 + 0x2c) + fVar4;
  param_4[0xb] = *(float *)(param_2 + 0x30) + fVar7 * fVar5;
  if (iVar3 != 0) {
    local_5c = *param_4;
    fStack_58 = param_4[1];
    fStack_54 = param_4[2];
    fStack_50 = param_4[3];
    fStack_4c = param_4[4];
    fStack_48 = param_4[5];
    fStack_44 = param_4[6];
    fStack_40 = param_4[7];
    local_3c = param_4[8];
    fStack_38 = param_4[9];
    fStack_34 = param_4[10];
    fStack_30 = param_4[0xb];
    FUN_00371fac(&local_5c,param_1 + 0x2fc);
    *(undefined1 *)(iVar3 + 0xac) = 1;
    FUN_003721e0(iVar3,&local_5c);
    *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc) = uVar10;
    FUN_00372170(iVar3,0);
  }
  return;
}
