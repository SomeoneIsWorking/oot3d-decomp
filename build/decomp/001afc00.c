// OoT3D decomp @ 001afc00  name=FUN_001afc00  size=1048

void FUN_001afc00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  short sVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4 [22];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;

  fVar4 = DAT_001affdc;
  fVar3 = DAT_001affd8;
  fVar2 = DAT_001affd4;
  fVar1 = DAT_001affd0;
  local_a4[0x10] = (float)*DAT_001affc8;
  local_a4[0x11] = (float)DAT_001affc8[1];
  local_a4[0x12] = (float)DAT_001affc8[2];
  local_a4[0x13] = (float)DAT_001affc8[3];
  local_a4[0x14] = (float)DAT_001affc8[4];
  local_a4[0x15] = (float)DAT_001affc8[5];
  uStack_4c = DAT_001affc8[6];
  uStack_48 = DAT_001affc8[7];
  uStack_44 = DAT_001affc8[8];
  uStack_40 = DAT_001affc8[9];
  local_3c = DAT_001affc8[10];
  uStack_38 = DAT_001affc8[0xb];
  local_a4[4] = (float)*DAT_001affcc;
  local_a4[5] = (float)DAT_001affcc[1];
  local_a4[6] = (float)DAT_001affcc[2];
  local_a4[7] = (float)DAT_001affcc[3];
  local_a4[8] = (float)DAT_001affcc[4];
  local_a4[9] = (float)DAT_001affcc[5];
  local_a4[10] = (float)DAT_001affcc[6];
  local_a4[0xb] = (float)DAT_001affcc[7];
  local_a4[0xc] = (float)DAT_001affcc[8];
  local_a4[0xd] = (float)DAT_001affcc[9];
  pcVar6 = (char *)(param_1 + 0xe58);
  sVar8 = 0;
  local_a4[0xe] = (float)DAT_001affcc[10];
  local_a4[0xf] = (float)DAT_001affcc[0xb];
  pcVar7 = pcVar6;
  do {
    if (*pcVar7 == '\x02') {
      local_f0 = (float)VectorUnsignedToFloat((uint)(byte)pcVar7[0xc],(byte)(in_fpscr >> 0x15) & 3);
      local_f0 = local_f0 * fVar1;
      local_ec = (float)VectorUnsignedToFloat((uint)(byte)pcVar7[0xd],(byte)(in_fpscr >> 0x15) & 3);
      local_ec = local_ec * fVar1;
      local_e8 = (float)VectorUnsignedToFloat((uint)(byte)pcVar7[0xe],(byte)(in_fpscr >> 0x15) & 3);
      local_e8 = local_e8 * fVar1;
      fVar9 = (float)VectorUnsignedToFloat((uint)(byte)pcVar7[0xf],(byte)(in_fpscr >> 0x15) & 3);
      local_e4 = *(float *)(param_1 + 0x628) * fVar9 * fVar2;
      FUN_00358778(*(undefined4 *)(pcVar7 + 0x38),0,0,&local_f0,0);
      local_e0 = *(undefined4 *)(pcVar7 + 0x14);
      local_dc = *(float *)(pcVar7 + 0x18);
      local_d8 = *(undefined4 *)(pcVar7 + 0x1c);
      local_cc = 0.0;
      local_d0 = 0.0;
      local_d4 = 1.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_b0 = 0.0;
      local_ac = 0x3f800000;
      local_bc = 0.0;
      local_b4 = 0.0;
      local_c8 = local_e0;
      local_b8 = local_dc;
      local_a8 = local_d8;
      FUN_00371fac(&local_d4,param_2 + 0x2fc);
      fVar9 = *(float *)(pcVar7 + 4);
      local_d4 = local_d4 * fVar9;
      local_c4 = local_c4 * fVar9;
      local_b4 = local_b4 * fVar9;
      local_d0 = local_d0 * fVar9;
      local_c0 = local_c0 * fVar9;
      local_b0 = local_b0 * fVar9;
      *(undefined1 *)(*(int *)(pcVar7 + 0x38) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(pcVar7 + 0x38),&local_d4);
      FUN_00372170(*(undefined4 *)(pcVar7 + 0x38),0);
    }
    sVar8 = sVar8 + 1;
    pcVar7 = pcVar7 + 0x3c;
  } while (sVar8 < 100);
  local_cc = fVar3;
  local_c8 = DAT_001affe0;
  local_c4 = fVar3;
  local_c0 = fVar4;
  local_dc = fVar4;
  local_d8 = DAT_001affe4;
  local_d4 = fVar3;
  local_d0 = fVar4;
  FUN_00342988(*(undefined4 *)(param_1 + 0x28e8),&local_dc,0xffffffff);
  fVar3 = DAT_001affec;
  fVar2 = DAT_001affe8;
  sVar8 = 0;
  do {
    if (*pcVar6 == '\x01') {
      local_b0 = *(float *)(pcVar6 + 0x14);
      local_ac = *(undefined4 *)(pcVar6 + 0x18);
      local_a8 = *(undefined4 *)(pcVar6 + 0x1c);
      local_bc = *(float *)(pcVar6 + 4) * fVar2;
      local_b4 = fVar4;
      fVar9 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[1],(byte)(in_fpscr >> 0x15) & 3);
      local_b8 = local_bc;
      FUN_003693b4(*(undefined4 *)(param_1 + 0x28e8),&local_b0,0,&local_bc,&local_cc,
                   (int)(short)(0x10 - (short)(int)((fVar3 / fVar9) * fVar10)));
    }
    sVar8 = sVar8 + 1;
    pcVar6 = pcVar6 + 0x3c;
  } while (sVar8 < 100);
  FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x28e8) + 8),0);
  if ((*(int *)(param_1 + 0x22c) != DAT_001afff0) && (DAT_001afff4 <= *(int *)(param_1 + 0x628))) {
    iVar5 = *(byte *)(param_1 + 0xb7) - 1;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0x17 < iVar5) {
      iVar5 = 0x17;
    }
    iVar5 = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3;
    local_a4[0] = local_a4[iVar5 * 4 + 4];
    local_a4[1] = local_a4[iVar5 * 4 + 5];
    local_a4[2] = local_a4[iVar5 * 4 + 6];
    local_a4[3] = *(float *)(param_1 + 0x628) * fVar1;
    FUN_00357a50(param_1 + 0x1a4,3,3,local_a4,1);
    iVar5 = 0;
    do {
      FUN_00357a50(param_1 + 0x1a4,(int)(char)iVar5,4,local_a4,2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    if (*(char *)(param_1 + 0x610) == '\0') {
      FUN_0037266c();
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    }
    else {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x228) + 0xc) = *(undefined4 *)(param_2 + 0x7f44);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001b0048,param_1,0);
  }
  return;
}
