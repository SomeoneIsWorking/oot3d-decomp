// OoT3D decomp @ 0014e65c  name=FUN_0014e65c  size=1720

/* WARNING: Removing unreachable block (ram,0x0014ed40) */

void FUN_0014e65c(int param_1,float *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  float *pfVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [3];
  float local_58;
  float local_54;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;

  fVar3 = DAT_0014ea58;
  bVar2 = false;
  fVar10 = DAT_0014ea5c[1] + DAT_0014ea58 * DAT_0014ea5c[3];
  fVar11 = *DAT_0014ea5c + DAT_0014ea58 * DAT_0014ea5c[2];
  local_98 = DAT_0014ea5c[0x201] + DAT_0014ea58 * DAT_0014ea5c[0x203];
  local_a0 = DAT_0014ea5c[0x200] + DAT_0014ea58 * DAT_0014ea5c[0x202];
  local_c0 = fVar10 * local_98;
  local_b0 = fVar11 * local_98;
  local_98 = fVar10 * local_98;
  local_bc = fVar11 * fVar10 * local_a0 - fVar10 * fVar11;
  local_a8 = fVar10 * fVar11 * local_a0 - fVar11 * fVar10;
  local_b8 = fVar11 * fVar11 + fVar10 * fVar10 * local_a0;
  local_ac = fVar10 * fVar10 + fVar11 * fVar11 * local_a0;
  local_a0 = -local_a0;
  local_b4 = 0;
  local_100 = 2.17201e-43;
  local_fc = 3.57331e-43;
  local_a4 = 0;
  local_94 = 0;
  local_104 = 2.17201e-43;
  local_108 = 3.57331e-43;
  local_9c = local_b0;
  FUN_0035619c(param_3,&local_84,&local_74,0xff,0xff,0xff);
  FUN_00342988(*(undefined4 *)(param_1 + 0x2fd0),&local_74,1);
  fVar4 = DAT_0014ea68;
  fVar11 = DAT_0014ea64;
  fVar10 = DAT_0014ea60;
  iVar9 = 0;
  pfVar8 = param_2;
  do {
    if (*(char *)(pfVar8 + 9) == '\x02') {
      bVar2 = true;
      local_78 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar8 + 0x2a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_78 = local_78 * fVar4;
      local_90 = pfVar8[0xc] * fVar10;
      local_88 = pfVar8[0xc] * fVar10;
      local_8c = fVar10;
      FUN_003693b4(*(undefined4 *)(param_1 + 0x2fd0),pfVar8,0,&local_90,&local_84,0);
      FUN_003693b4(*(undefined4 *)(param_1 + 0x2fd0),pfVar8,&local_c0,&local_90,&local_84,0);
    }
    iVar9 = iVar9 + 1;
    pfVar8 = pfVar8 + 0x10;
  } while (iVar9 < 300);
  if (bVar2) {
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x2fd0) + 8),0);
  }
  local_100 = 2.17201e-43;
  local_fc = 3.57331e-43;
  local_104 = 2.17201e-43;
  local_108 = 3.57331e-43;
  FUN_0035619c(param_3,&local_84,&local_74,0xff,0xff,0xff);
  FUN_00342988(*(undefined4 *)(param_1 + 0x2fd4),&local_74,1);
  cVar7 = '\0';
  iVar9 = 0;
  pfVar8 = param_2;
  do {
    if (*(char *)(pfVar8 + 9) == '\x01') {
      local_cc = *pfVar8;
      local_c8 = pfVar8[1];
      local_c4 = pfVar8[2];
      local_64[1] = 0.0;
      uStack_50 = 0x3f800000;
      local_40 = 0;
      local_3c = pfVar8[0xc];
      local_64[0] = local_3c * 1.0;
      local_54 = local_3c * 0.0;
      local_44 = local_3c * 0.0;
      local_64[2] = local_3c * 0.0;
      local_4c = local_3c * 0.0;
      local_3c = local_3c * 1.0;
      local_90 = fVar10;
      local_8c = fVar10;
      local_88 = fVar10;
      local_58 = local_cc;
      local_48 = local_c8;
      local_38 = local_c4;
      FUN_003693b4(*(undefined4 *)(param_1 + 0x2fd4),0,local_64,&local_90,&local_84,0);
      cVar7 = cVar7 + '\x01';
    }
    iVar9 = iVar9 + 1;
    pfVar8 = pfVar8 + 0x10;
  } while (iVar9 < 300);
  if (cVar7 != '\0') {
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x2fd4) + 8),0);
  }
  uVar6 = DAT_0014ea74;
  uVar5 = DAT_0014ea70;
  fVar10 = DAT_0014ea6c;
  cVar7 = '\0';
  local_74 = fVar3;
  local_70 = fVar3;
  local_6c = fVar3;
  local_68 = fVar3;
  iVar9 = 0;
  pfVar8 = param_2;
  do {
    cVar1 = *(char *)(pfVar8 + 9);
    if ((cVar1 == '\x03' || cVar1 == '\x04') || cVar1 == '\x05') {
      local_104 = fVar3;
      local_100 = fVar3;
      local_108 = pfVar8[0xc] / pfVar8[0xe];
      local_fc = fVar3;
      local_f4 = pfVar8[0xc] * pfVar8[0xe];
      local_f8 = fVar3;
      local_f0 = fVar3;
      local_ec = fVar3;
      local_e8 = fVar3;
      local_e4 = fVar3;
      local_dc = fVar3;
      local_e0 = fVar11;
      local_90 = fVar10;
      local_8c = fVar10;
      local_88 = fVar10;
      local_84 = uVar5;
      local_80 = uVar6;
      local_7c = fVar11;
      local_78 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar8 + 0x2a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_78 = local_78 * fVar4;
      FUN_003693b4(*(undefined4 *)(param_1 + 0x2fd8),pfVar8,&local_108,&local_90,&local_84,0);
      cVar7 = cVar7 + '\x01';
    }
    iVar9 = iVar9 + 1;
    pfVar8 = pfVar8 + 0x10;
  } while (iVar9 < 300);
  if (cVar7 != '\0') {
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x2fd8) + 8),0);
  }
  uVar6 = DAT_0014ed60;
  uVar5 = DAT_0014ed5c;
  cVar7 = '\0';
  local_74 = fVar3;
  local_70 = fVar3;
  local_6c = fVar3;
  local_68 = fVar3;
  iVar9 = 0;
  pfVar8 = param_2;
  do {
    if (*(char *)(pfVar8 + 9) == '\x06') {
      local_fc = *pfVar8;
      local_dc = pfVar8[2];
      local_ec = pfVar8[1] + fVar11;
      local_104 = 0.0;
      local_f4 = 1.0;
      local_e4 = 0.0;
      local_e0 = pfVar8[0xc];
      local_108 = local_e0 * 1.0;
      local_f8 = local_e0 * 0.0;
      local_e8 = local_e0 * 0.0;
      local_100 = local_e0 * 0.0;
      local_f0 = local_e0 * 0.0;
      local_e0 = local_e0 * 1.0;
      local_84 = uVar5;
      local_80 = uVar6;
      local_7c = fVar11;
      local_78 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar8 + 0x2a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_78 = local_78 * fVar4;
      local_d8 = local_fc;
      local_d4 = local_ec;
      local_d0 = local_dc;
      FUN_003693b4(*(undefined4 *)(param_1 + 0x2fdc),0,&local_108,0,&local_84,0);
      cVar7 = cVar7 + '\x01';
    }
    iVar9 = iVar9 + 1;
    pfVar8 = pfVar8 + 0x10;
  } while (iVar9 < 300);
  if (cVar7 != '\0') {
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x2fdc) + 8),0);
  }
  local_104 = 2.10195e-43;
  local_100 = 2.10195e-43;
  local_fc = 2.10195e-43;
  local_108 = 3.57331e-43;
  FUN_0035619c(param_3,&local_84,&local_74,0xff,0xff,0xff);
  FUN_00342988(*(undefined4 *)(param_1 + 0x2fcc),&local_74,0xffffffff);
  iVar9 = 0;
  do {
    if (*(char *)(param_2 + 9) == '\a') {
      local_78 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_78 = local_78 * fVar4;
      local_88 = param_2[0xc];
      local_90 = local_88 * DAT_0014ed64;
      local_8c = local_88 * DAT_0014ed64;
      local_88 = local_88 * DAT_0014ed64;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    iVar9 = iVar9 + 1;
    param_2 = param_2 + 0x10;
  } while (iVar9 < 300);
  return;
}
