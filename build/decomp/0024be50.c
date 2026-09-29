// OoT3D decomp @ 0024be50  name=FUN_0024be50  size=1368

void FUN_0024be50(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  float fVar5;
  undefined2 *puVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint in_fpscr;
  undefined4 uVar13;
  float fVar14;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  iVar9 = *(int *)(param_1 + 0x124);
  FUN_00372224(&local_64,param_1 + 0x148);
  fVar3 = DAT_0024c250;
  fVar2 = DAT_0024c24c;
  fVar1 = DAT_0024c248;
  iVar7 = DAT_0024c244;
  pfVar11 = (float *)(param_1 + 0x28);
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar9 + 0x28);
    uVar13 = *(undefined4 *)(iVar9 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar13;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar9 + 0x30);
    *(undefined4 *)(param_1 + 0x1c0) = uVar13;
    if (*(char *)(param_1 + 0x1cd) == '\0') {
      *(undefined1 *)(param_1 + 0x1cd) = 1;
      fVar5 = *pfVar11;
      uVar13 = *(undefined4 *)(param_1 + 0x2c);
      fVar8 = *(float *)(param_1 + 0x30);
      iVar9 = 0;
      pfVar10 = DAT_0024c254;
      do {
        puVar6 = (undefined2 *)(iVar7 + iVar9 * 6);
        *puVar6 = (short)(int)*pfVar10;
        puVar6[2] = (short)(int)pfVar10[2];
        if (*(short *)(param_1 + 0x1c) == 1) {
          pfVar10[1] = fVar1;
        }
        else {
          *(float *)(param_1 + 0x28) = fVar5 + *pfVar10 * fVar2;
          *(float *)(param_1 + 0x30) = fVar8 + pfVar10[2] * fVar2;
          FUN_00376340(fVar3,fVar3,fVar3,param_2,param_1,4);
          fVar14 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x84),
                                              (byte)(in_fpscr >> 0x15) & 3);
          pfVar10[1] = fVar14;
          *pfVar11 = fVar5;
          *(undefined4 *)(param_1 + 0x2c) = uVar13;
          *(float *)(param_1 + 0x30) = fVar8;
        }
        pfVar10 = pfVar10 + 3;
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < 0x90);
    }
  }
  else if (*(char *)(param_1 + 0x1cd) == '\0') {
    *(undefined1 *)(param_1 + 0x1cd) = 1;
    fVar8 = (float)FUN_002cfca0((int)*(short *)(iVar9 + 0xbe));
    fVar5 = DAT_0024c258;
    *(float *)(param_1 + 0x28) = *(float *)(iVar9 + 0x28) + fVar8 * DAT_0024c258;
    *(float *)(param_1 + 0x2c) = (*(float *)(iVar9 + 0x2c) + DAT_0024c25c) - fVar3;
    fVar8 = (float)FUN_00338f60((int)*(short *)(iVar9 + 0xbe));
    pfVar10 = DAT_0024c254;
    iVar12 = 0;
    *(float *)(param_1 + 0x30) = *(float *)(iVar9 + 0x30) + fVar8 * fVar5;
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x2c);
    fVar5 = *pfVar11;
    uVar13 = *(undefined4 *)(param_1 + 0x2c);
    fVar8 = *(float *)(param_1 + 0x30);
    do {
      puVar6 = (undefined2 *)(iVar7 + iVar12 * 6);
      *puVar6 = (short)(int)*pfVar10;
      puVar6[2] = (short)(int)pfVar10[2];
      if (*(short *)(param_1 + 0x1c) == 1) {
        pfVar10[1] = fVar1;
      }
      else {
        *(float *)(param_1 + 0x28) = fVar5 + *pfVar10 * fVar2;
        *(float *)(param_1 + 0x30) = fVar8 + pfVar10[2] * fVar2;
        FUN_00376340(fVar3,fVar3,fVar3,param_2,param_1,4);
        fVar14 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x84),
                                            (byte)(in_fpscr >> 0x15) & 3);
        pfVar10[1] = fVar14;
        *pfVar11 = fVar5;
        *(undefined4 *)(param_1 + 0x2c) = uVar13;
        *(float *)(param_1 + 0x30) = fVar8;
      }
      pfVar10 = pfVar10 + 3;
      iVar12 = (int)(short)((short)iVar12 + 1);
    } while (iVar12 < 0x90);
  }
  FUN_00117e54(param_1,param_2);
  fVar1 = DAT_0024c260;
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x30);
  local_48 = DAT_0024c260;
  local_44 = *(float *)(param_1 + 0x54);
  local_3c = *(float *)(param_1 + 0x5c);
  local_64 = local_44 * 1.0;
  local_54 = local_44 * 0.0;
  local_44 = local_44 * 0.0;
  local_60 = DAT_0024c264 * 0.0;
  local_50 = DAT_0024c264 * 1.0;
  local_40 = DAT_0024c264 * 0.0;
  local_5c = local_3c * 0.0;
  local_4c = local_3c * 0.0;
  local_3c = local_3c * 1.0;
  local_68 = *(float *)(param_1 + 0x1c4) * DAT_0024c26c;
  local_74 = DAT_0024c268;
  local_70 = DAT_0024c268;
  local_6c = DAT_0024c268;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x1e8),0,&local_74);
  *(uint *)(*(int *)(param_1 + 0x1e8) + 0x178) = *(uint *)(*(int *)(param_1 + 0x1e8) + 0x178) | 2;
  iVar7 = *(int *)(param_1 + 0x1e8);
  *(float *)(iVar7 + 0xc) = local_64;
  *(float *)(iVar7 + 0x10) = local_60;
  *(float *)(iVar7 + 0x14) = local_5c;
  *(undefined4 *)(iVar7 + 0x18) = local_58;
  *(float *)(iVar7 + 0x1c) = local_54;
  *(float *)(iVar7 + 0x20) = local_50;
  *(float *)(iVar7 + 0x24) = local_4c;
  *(float *)(iVar7 + 0x28) = local_48;
  *(float *)(iVar7 + 0x2c) = local_44;
  *(float *)(iVar7 + 0x30) = local_40;
  puVar4 = DAT_0024c270;
  *(float *)(iVar7 + 0x34) = local_3c;
  *(undefined4 *)(iVar7 + 0x38) = local_38;
  *(undefined4 *)(*(int *)(param_1 + 0x1e8) + 0x170) = 1;
  if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(puVar4), iVar7 != 0)) {
    FUN_0036788c(DAT_0024c274);
  }
  iVar7 = DAT_0024c280;
  FUN_00367788(DAT_0024c280,*(undefined4 *)(param_1 + 0x1e8),0);
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x30);
  local_48 = *(float *)(param_1 + 0x1c0) + fVar1;
  local_44 = *(float *)(param_1 + 0x54);
  local_40 = *(float *)(param_1 + 0x58);
  local_3c = *(float *)(param_1 + 0x5c);
  local_64 = local_44 * 1.0;
  local_54 = local_44 * 0.0;
  local_44 = local_44 * 0.0;
  local_60 = local_40 * 0.0;
  local_50 = local_40 * 1.0;
  local_40 = local_40 * 0.0;
  local_5c = local_3c * 0.0;
  local_4c = local_3c * 0.0;
  local_3c = local_3c * 1.0;
  *(uint *)(*(int *)(param_1 + 0x1e0) + 0x178) = *(uint *)(*(int *)(param_1 + 0x1e0) + 0x178) | 2;
  iVar9 = *(int *)(param_1 + 0x1e0);
  *(float *)(iVar9 + 0xc) = local_64;
  *(float *)(iVar9 + 0x10) = local_60;
  *(float *)(iVar9 + 0x14) = local_5c;
  *(undefined4 *)(iVar9 + 0x18) = local_58;
  *(float *)(iVar9 + 0x1c) = local_54;
  *(float *)(iVar9 + 0x20) = local_50;
  *(float *)(iVar9 + 0x24) = local_4c;
  *(float *)(iVar9 + 0x28) = local_48;
  *(float *)(iVar9 + 0x2c) = local_44;
  *(float *)(iVar9 + 0x30) = local_40;
  *(float *)(iVar9 + 0x34) = local_3c;
  *(undefined4 *)(iVar9 + 0x38) = local_38;
  *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x170) = 1;
  if (((*puVar4 & 1) == 0) && (iVar9 = FUN_003679b4(DAT_0024c270), iVar9 != 0)) {
    FUN_0036788c(iVar7 + -0x180);
  }
  FUN_00367788(iVar7,*(undefined4 *)(param_1 + 0x1e0),0);
  return;
}
