// OoT3D decomp @ 001da4f4  name=FUN_001da4f4  size=1212

void FUN_001da4f4(int param_1)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  
  fVar13 = fRam001da8a8;
  fVar1 = fRam001da8a0;
  fStack_d0 = fRam001da8a0;
  fStack_cc = fRam001da8a0;
  uStack_c8 = uRam001da8a4;
  fStack_58 = 1.0;
  fStack_54 = 0.0;
  fStack_40 = 0.0;
  fStack_4c = fRam001da8a0;
  fStack_50 = 0.0;
  fStack_48 = 0.0;
  fStack_44 = 1.0;
  fStack_38 = 0.0;
  fStack_3c = fRam001da8a0;
  fStack_34 = 0.0;
  fStack_30 = 1.0;
  uStack_2c = uRam001da8a4;
  fStack_c4 = fRam001da8a0;
  fStack_c0 = fRam001da8a0;
  fStack_bc = (float)uRam001da8ac;
  uStack_88 = 0x3f800000;
  uStack_84 = 0;
  uStack_70 = 0;
  fStack_7c = fRam001da8a0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0x3f800000;
  uStack_68 = 0;
  fStack_6c = fRam001da8a0;
  uStack_64 = 0;
  uStack_60 = 0x3f800000;
  uStack_5c = uRam001da8ac;
  FUN_0036c174(&uStack_88,&fStack_58,&uStack_88);
  fStack_c4 = fVar1;
  fStack_c0 = (float)uRam001da8b0;
  fStack_bc = fVar1;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0x3f800000;
  fStack_ac = fVar1;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_9c = uRam001da8b0;
  uStack_94 = 0;
  uStack_90 = 0x3f800000;
  fStack_8c = fVar1;
  FUN_0036c174(&uStack_b8,&fStack_58,&uStack_b8);
  iVar4 = iRam001da8bc;
  puVar3 = puRam001da8b8;
  fVar2 = fRam001da8b4;
  if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
    if (*(float *)(param_1 + 0x1d0) <= fVar1) {
      (**(code **)(**(int **)(param_1 + 0x1a8) + 8))();
    }
    else {
      uStack_c8 = *puRam001da8c0;
      fStack_c4 = (float)puRam001da8c0[1];
      fStack_c0 = (float)puRam001da8c0[2];
      fStack_bc = *(float *)(param_1 + 0x1d0) * fRam001da8b4;
      uVar5 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1a8));
      FUN_003589cc(uVar5,5);
      FUN_00358964(uVar5,5,&uStack_c8);
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1a8),&uStack_88);
      *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0xac) = 1;
      if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(puVar3), iVar6 != 0)) {
        FUN_0036788c(iVar4 + -0x180);
      }
      FUN_0033d220(iVar4,*(undefined4 *)(param_1 + 0x1a8));
    }
  }
  bVar8 = *(int *)(param_1 + 0x1a4) < 0;
  bVar9 = *(int *)(param_1 + 0x1a4) == 0;
  bVar7 = false;
  if (!bVar9) {
    fVar10 = *(float *)(param_1 + 0x1d4);
    bVar8 = fVar10 < fVar1;
    bVar9 = fVar10 == fVar1;
    bVar7 = NAN(fVar10) || NAN(fVar1);
  }
  if (!bVar9 && bVar8 == bVar7) {
    uVar5 = FUN_003687a8();
    uStack_c8 = *puRam001da8cc;
    fStack_c4 = (float)puRam001da8cc[1];
    fStack_c0 = (float)puRam001da8cc[2];
    fStack_bc = *(float *)(param_1 + 0x1d4) * fVar2;
    FUN_003589cc(uVar5,5);
    FUN_00358964(uVar5,5,&uStack_c8);
    uStack_c8 = *puRam001da8d0;
    fStack_c4 = (float)puRam001da8d0[1];
    fStack_c0 = (float)puRam001da8d0[2];
    fStack_bc = (float)puRam001da8d0[3];
    uStack_d8 = puRam001da8d0[4];
    uStack_d4 = puRam001da8d0[5];
    fStack_d0 = (float)puRam001da8d0[6];
    fStack_cc = (float)puRam001da8d0[7];
    uStack_e8 = puRam001da8d0[8];
    uStack_e4 = puRam001da8d0[9];
    uStack_e0 = puRam001da8d0[10];
    uStack_dc = puRam001da8d0[0xb];
    uStack_f8 = puRam001da8d0[0xc];
    uStack_f4 = puRam001da8d0[0xd];
    uStack_f0 = puRam001da8d0[0xe];
    uStack_ec = puRam001da8d0[0xf];
    fVar10 = *(float *)(param_1 + 0x1dc) * fVar2;
    if (0x3f800000 < (int)fVar10) {
      fVar10 = fVar13;
    }
    fVar11 = fVar10 * fRam001da8d4 - fVar13;
    fVar12 = fVar13 - fVar10 * fRam001da8d4;
    fVar10 = fRam001da8dc - fVar10 * fRam001da8d8;
    fStack_104 = fStack_58 * fVar11 + fStack_54 * fVar12 + fStack_50 * fVar10;
    fStack_100 = fStack_48 * fVar11 + fStack_44 * fVar12 + fStack_40 * fVar10;
    fStack_fc = fStack_38 * fVar11 + fStack_34 * fVar12 + fStack_30 * fVar10;
    fVar13 = fVar13 / SQRT(fStack_104 * fStack_104 + fStack_100 * fStack_100 + fStack_fc * fStack_fc
                          );
    fStack_104 = fStack_104 * fVar13;
    fStack_100 = fStack_100 * fVar13;
    fStack_fc = fStack_fc * fVar13;
    FUN_0033d200(uVar5,0);
    FUN_0033d174(uVar5,0,&uStack_c8,&uStack_d8,&uStack_e8,&uStack_f8);
    FUN_0033d14c(uVar5,0,&fStack_104);
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1a4),&fStack_58);
    *(undefined1 *)(*(int *)(param_1 + 0x1a4) + 0xac) = 1;
    if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(puRam001da8b8), iVar6 != 0)) {
      FUN_0036788c(uRam001da9f0);
    }
    FUN_0033d220(iVar4,*(undefined4 *)(param_1 + 0x1a4));
  }
  bVar8 = *(int *)(param_1 + 0x1ac) < 0;
  bVar9 = *(int *)(param_1 + 0x1ac) == 0;
  bVar7 = false;
  if (!bVar9) {
    fVar13 = *(float *)(param_1 + 0x1d8);
    bVar8 = fVar13 < fVar1;
    bVar9 = fVar13 == fVar1;
    bVar7 = NAN(fVar13) || NAN(fVar1);
  }
  if (!bVar9 && bVar8 == bVar7) {
    uStack_c8 = *puRam001da9f4;
    fStack_c4 = (float)puRam001da9f4[1];
    fStack_c0 = (float)puRam001da9f4[2];
    fStack_bc = *(float *)(param_1 + 0x1d8) * fVar2;
    uVar5 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1ac));
    FUN_003589cc(uVar5,5);
    FUN_00358964(uVar5,5,&uStack_c8);
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1ac),&uStack_b8);
    *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0xac) = 1;
    if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(puRam001da8b8), iVar6 != 0)) {
      FUN_0036788c(uRam001da9f0);
    }
    FUN_0033d220(iVar4,*(undefined4 *)(param_1 + 0x1ac));
  }
  return;
}

