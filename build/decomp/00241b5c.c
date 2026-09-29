// OoT3D decomp @ 00241b5c  name=FUN_00241b5c  size=860

void FUN_00241b5c(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint in_fpscr;
  float fVar16;
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
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [48];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;

  if (*(int *)(param_1 + 0x1c0) != 0) {
    if (*(short *)(param_1 + 0x1c) != 1) {
      if (*(int *)(param_1 + 0x1bc) != DAT_00241eb8) {
        FUN_00330c34(param_1,param_1);
        return;
      }
      if (*(char *)(param_1 + 0x2c6) == '<') {
        FUN_00330c34(param_1,param_1);
      }
      uVar12 = DAT_00241ee8;
      puVar11 = DAT_00241ee4;
      uVar10 = DAT_00241ee0;
      uVar9 = DAT_00241edc;
      uVar8 = DAT_00241ed8;
      uVar7 = DAT_00241ed4;
      fVar6 = DAT_00241ed0;
      fVar5 = DAT_00241ecc;
      uVar4 = DAT_00241ec8;
      fVar3 = DAT_00241ec4;
      fVar2 = DAT_00241ec0;
      fVar1 = DAT_00241ebc;
      iVar14 = 0;
      do {
        iVar15 = param_1 + iVar14 * 4;
        if (*(int *)(iVar15 + 0x1c4) != 0) {
          fVar16 = (float)VectorSignedToFloat((int)(short)(iVar14 << 0xd),
                                              (byte)(in_fpscr >> 0x15) & 3);
          FUN_0036c258(fVar16 * fVar1 * fVar2 * fVar3 * fVar2,&local_50,&local_54);
          fVar16 = fVar6 - local_54;
          local_104 = local_54 + fVar16 * fVar5;
          local_f0 = local_54 + fVar16 * fVar6;
          local_100 = fVar16 * fVar5 * fVar6;
          local_e4 = fVar16 * fVar5 * fVar5;
          local_ec = fVar16 * fVar6 * fVar5;
          local_f4 = local_100 + local_50 * fVar5;
          local_fc = local_e4 + local_50 * fVar6;
          local_100 = local_100 - local_50 * fVar5;
          local_e4 = local_e4 - local_50 * fVar6;
          local_e0 = local_ec + local_50 * fVar5;
          local_ec = local_ec - local_50 * fVar5;
          local_f8 = fVar5;
          local_e8 = fVar5;
          local_d8 = fVar5;
          local_dc = local_104;
          FUN_0036c174(auStack_8c,param_1 + 0x148,&local_104);
          FUN_0036c258(uVar4,&local_58,&local_5c);
          fVar16 = fVar6 - local_5c;
          local_104 = local_5c + fVar16 * fVar6;
          local_f0 = local_5c + fVar16 * fVar5;
          local_100 = fVar16 * fVar6 * fVar5;
          local_fc = local_100 + local_58 * fVar5;
          local_ec = fVar16 * fVar5 * fVar5;
          local_100 = local_100 - local_58 * fVar5;
          local_e0 = local_ec + local_58 * fVar6;
          local_f8 = fVar5;
          local_ec = local_ec - local_58 * fVar6;
          local_e8 = fVar5;
          local_d8 = fVar5;
          local_f4 = local_fc;
          local_e4 = local_100;
          local_dc = local_f0;
          FUN_0036c174(auStack_8c,auStack_8c,&local_104);
          local_98 = fVar5;
          local_94 = uVar7;
          local_90 = uVar8;
          FUN_00372070(auStack_8c,auStack_8c,&local_98);
          local_a4 = uVar9;
          local_a0 = uVar10;
          local_9c = fVar6;
          local_c8 = 0;
          local_c4 = 0;
          local_d4 = uVar9;
          local_b0 = 0;
          local_d0 = 0;
          local_c0 = uVar10;
          local_cc = 0;
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_a8 = 0;
          local_ac = fVar6;
          FUN_0036c174(auStack_8c,auStack_8c,&local_d4);
          FUN_003721e0(*(undefined4 *)(iVar15 + 0x1c4),auStack_8c);
          *(undefined1 *)(*(int *)(iVar15 + 0x1c4) + 0xac) = 1;
          if (((*puVar11 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_00241ee4), iVar13 != 0)) {
            FUN_0036788c(DAT_00241eec);
          }
          FUN_00330b98(uVar12,*(undefined4 *)(iVar15 + 0x1c4),0);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 8);
      return;
    }
    FUN_003721e0(*(int *)(param_1 + 0x1c0),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
  }
  return;
}
