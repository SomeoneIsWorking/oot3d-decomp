// OoT3D decomp @ 00118a70  name=FUN_00118a70  size=2584

void FUN_00118a70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  short sVar22;
  float fVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 auStack_d0 [48];
  float local_a0 [2];
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  float *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;

  iVar14 = FUN_0036c5bc(param_2,0);
  uVar10 = DAT_00118e88;
  uVar9 = DAT_00118e84;
  uVar8 = DAT_00118e80;
  uVar7 = DAT_00118e7c;
  uVar6 = DAT_00118e78;
  uVar16 = DAT_00118e74;
  fVar26 = DAT_00118e70;
  uVar5 = DAT_00118e6c;
  uVar4 = DAT_00118e68;
  uVar3 = DAT_00118e64;
  fVar21 = DAT_00118e60;
  uVar20 = DAT_00118e5c;
  uVar2 = DAT_00118e58;
  uVar18 = DAT_00118e54;
  sVar22 = *(short *)(param_1 + 0xfb8);
  local_70 = param_2 + 0x2298;
  local_74 = param_1 + 0x1060;
  local_78 = param_1 + 0xfc4;
  local_7c = param_1 + 0x105c;
  local_80 = param_1 + 0x1054;
  local_84 = (float *)(param_1 + 0xfcc);
  puVar24 = (undefined4 *)(param_1 + 0xfc0);
  if (sVar22 == 0x67) {
LAB_00118b9c:
    FUN_00373500(uVar9,local_7c);
    FUN_00373500(uVar20,local_80);
    if (*(short *)(param_1 + 0x1d6) == 0) {
      *(undefined2 *)(param_1 + 0xfb8) = 0x68;
      *(undefined4 *)(param_1 + 0x1060) = uVar9;
      *(undefined4 *)(param_1 + 0x1058) = uVar9;
      *(undefined2 *)(param_1 + 0x1d6) = 0xd2;
    }
  }
  else {
    if (sVar22 < 0x68) {
      if (sVar22 != 100) {
        if (sVar22 == 0x65) {
          if (*(short *)(param_1 + 0x1d6) == 0) {
            *(undefined2 *)(param_1 + 0xfb8) = 0x66;
            *(float *)(param_1 + 0xfd0) = fVar26;
            *(undefined4 *)(param_1 + 0x1030) = uVar5;
            *(undefined4 *)(param_1 + 0x103c) = uVar8;
            *(undefined4 *)(param_1 + 0x100c) = uVar3;
            *(undefined4 *)(param_1 + 0x1044) = uVar9;
            *(undefined4 *)(param_1 + 0x1048) = uVar9;
            uVar2 = DAT_00119248;
            *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0xc9;
            *(undefined2 *)(param_1 + 0x1d6) = 0xbc;
            *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1f8) = uVar2;
            *(undefined4 *)(param_1 + 0x105c) = uVar18;
            *(undefined4 *)(param_1 + 0x1054) = uVar16;
            return;
          }
          goto LAB_00119370;
        }
        if (sVar22 != 0x66) goto LAB_00119370;
        if (*(short *)(param_1 + 0x1d6) == 0) {
          *(undefined4 *)(param_1 + 0x1048) = DAT_00118e68;
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0xca;
          *(undefined2 *)(param_1 + 0xfb8) = 0x67;
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1d6) = 0xb4;
          *(undefined2 *)(param_1 + 0x1d6) = 0xe1;
        }
        goto LAB_00118b9c;
      }
      FUN_00367494(param_2,local_70);
      FUN_0036e980(param_2,param_1,8);
      uVar13 = FUN_00367d74(param_2);
      *(undefined2 *)(param_1 + 0xfba) = uVar13;
      FUN_00320d7c(param_2,0,1);
      FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0xfba),7);
      puVar11 = DAT_00118e90;
      *(undefined2 *)(param_1 + 0xfb8) = 0x96;
      *(undefined2 *)(puVar11 + 8) = 0;
      *puVar11 = 2;
      uVar16 = *(undefined4 *)(iVar14 + 0x90);
      uVar19 = *(undefined4 *)(iVar14 + 0x94);
      *puVar24 = *(undefined4 *)(iVar14 + 0x8c);
      *(undefined4 *)(param_1 + 0xfc4) = uVar16;
      *(undefined4 *)(param_1 + 0xfc8) = uVar19;
      *(undefined2 *)(param_1 + 0x1d6) = 0x87;
      fVar27 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xfc0);
      fVar26 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0xfc8);
      uVar16 = FUN_003696ec(fVar27,fVar26);
      *(undefined4 *)(param_1 + 0x105c) = uVar16;
      *(float *)(param_1 + 0x1054) = SQRT(fVar27 * fVar27 + fVar26 * fVar26);
      *(undefined4 *)(param_1 + 0x1060) = uVar9;
    }
    else {
      if (sVar22 == 0x68) {
        if (*(short *)(param_1 + 0x1d6) == 0x2d) {
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0xcd;
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1d6) = 0x2d;
          *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0xdbc) = uVar9;
          *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0xdc0) = uVar9;
        }
        uVar20 = DAT_00119250;
        if (*(short *)(param_1 + 0x1d6) == 0) {
          if (*(uint *)(param_1 + 0xfc4) < DAT_0011924c) {
            fVar26 = *(float *)(*(int *)(param_2 + 0x7f68) + 0x2c) - DAT_00118ea8;
          }
          FUN_00373500(fVar26,local_78);
          FUN_00373500((*(float *)(*(int *)(param_2 + 0x7f68) + 0x2c) - fVar21) + DAT_00119254,
                       uVar18,uVar20,param_1 + 0xfd0);
          *(undefined4 *)(param_1 + 0x1030) = *(undefined4 *)(param_1 + 0xfd0);
        }
        else {
          FUN_00373500(DAT_00119538,local_78);
        }
        FUN_00373500(DAT_0011953c,uVar8,*(undefined4 *)(param_1 + 0x1060),local_7c);
        FUN_00373500(DAT_00119540,uVar10,uVar8,param_1 + 0x1058);
        FUN_00373500(DAT_00119548,uVar10,DAT_00119544,local_74);
        if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 0xce) {
          FUN_00373500(uVar16,uVar4,*(undefined4 *)(param_1 + 0x1058),local_80);
          if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1d6) == 0) {
            *(undefined2 *)(param_1 + 0xfb8) = 0x69;
            uVar18 = *(undefined4 *)(param_1 + 0xfc4);
            uVar20 = *(undefined4 *)(param_1 + 0xfc8);
            *(undefined4 *)(iVar14 + 0x8c) = *puVar24;
            *(undefined4 *)(iVar14 + 0x90) = uVar18;
            *(undefined4 *)(iVar14 + 0x94) = uVar20;
            uVar18 = *(undefined4 *)(param_1 + 0xfc4);
            uVar20 = *(undefined4 *)(param_1 + 0xfc8);
            *(undefined4 *)(iVar14 + 0xa4) = *puVar24;
            *(undefined4 *)(iVar14 + 0xa8) = uVar18;
            *(undefined4 *)(iVar14 + 0xac) = uVar20;
            fVar21 = local_84[1];
            fVar26 = local_84[2];
            *(float *)(iVar14 + 0x80) = *local_84;
            *(float *)(iVar14 + 0x84) = fVar21;
            *(float *)(iVar14 + 0x88) = fVar26;
            FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0xfba),0);
            *(undefined2 *)(param_1 + 0xfba) = 0;
            FUN_00367374(param_2,local_70);
            FUN_0036e980(param_2,param_1,7);
            *DAT_00118e90 = 0;
            *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x2c) = uVar2;
          }
        }
        else {
          FUN_00373500(uVar6,uVar8,*(undefined4 *)(param_1 + 0x1058),local_80);
        }
        goto LAB_00119370;
      }
      if ((sVar22 == 0x69) || (sVar22 != 0x96)) goto LAB_00119370;
    }
    *(undefined4 *)(param_1 + 0x1fc) = uVar9;
    uVar19 = DAT_00118e9c;
    uVar25 = DAT_00118e98;
    uVar16 = DAT_00118e94;
    if ((*(ushort *)(param_1 + 0x1d6) & 8) != 0) {
      uVar25 = DAT_00118e94;
      uVar16 = DAT_00118e98;
    }
    FUN_00373500(uVar25,uVar18,DAT_00118e9c,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    FUN_00373500(uVar16,uVar18,uVar19,param_1 + 0x58);
    *(float *)(param_1 + 0x105c) = *(float *)(param_1 + 0x105c) + *(float *)(param_1 + 0x1060);
    if (*(short *)(param_1 + 0x1d6) < 0x2d) {
      FUN_00373500(uVar9,uVar10,uVar19,local_74);
    }
    else {
      FUN_00373500(uVar8,uVar10,uVar19,local_74);
    }
    uVar18 = DAT_00118ea0;
    FUN_00373500(uVar6,uVar8,DAT_00118ea0,param_1 + 0x2c);
    fVar26 = DAT_00118ea4;
    FUN_00373500(DAT_00118ea8,uVar8,DAT_00118ea4,local_78);
    *(float *)(param_1 + 0x102c) = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1030) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1034) = *(undefined4 *)(param_1 + 0x30);
    fVar27 = *(float *)(param_1 + 0x1030);
    fVar23 = *(float *)(param_1 + 0x1034);
    *local_84 = *(float *)(param_1 + 0x102c);
    local_84[1] = fVar27;
    local_84[2] = fVar23;
    if (0x1e < *(short *)(param_1 + 0x1d6)) {
      FUN_00375bcc(param_1,DAT_00118eac);
    }
    fVar27 = DAT_00118eb8;
    uVar19 = DAT_00118eb4;
    uVar16 = DAT_00118eb0;
    if (*(short *)(param_1 + 0x1d6) == 0x1e) {
      local_88 = param_2 + 0x5000;
      sVar22 = 0;
      do {
        local_dc = (float)FUN_003738a8(uVar16);
        local_d8 = (float)FUN_003738a8(uVar16);
        local_d4 = (float)FUN_003738a8(uVar16);
        local_e8 = *(float *)(param_1 + 0x28) + local_dc * fVar26;
        local_e4 = *(float *)(param_1 + 0x2c) + local_d8 * fVar26;
        local_e0 = *(float *)(param_1 + 0x30) + local_d4 * fVar26;
        fVar23 = (float)FUN_00371e50(uVar19);
        FUN_003673d8(fVar23 + fVar27,3,*(undefined4 *)(local_88 + 0xc28),&local_e8,&local_dc);
        sVar22 = sVar22 + 1;
      } while (sVar22 < 300);
      *(undefined1 *)(param_1 + 0x229) = 0;
      uVar16 = DAT_00119210;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      FUN_00375bcc(param_1,uVar16);
      FUN_00375c44(param_2,param_1 + 0x28,0x46,DAT_00119214);
    }
    if (*(short *)(param_1 + 0x1d6) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined4 *)(param_1 + 0x1e4) = DAT_00119218;
      *(undefined4 *)(param_1 + 0x105c) = uVar9;
      *(undefined4 *)(param_1 + 0x1054) = uVar20;
      *(undefined4 *)(param_1 + 0xfc0) = uVar20;
      *(float *)(param_1 + 0xfc4) = fVar21;
      *(undefined4 *)(param_1 + 0xfc8) = uVar9;
      uVar2 = DAT_0011921c;
      *(undefined4 *)(param_1 + 0xfcc) = uVar9;
      *(undefined4 *)(param_1 + 0xfd0) = uVar2;
      *(undefined4 *)(param_1 + 0xfd4) = uVar9;
      *(undefined2 *)(param_1 + 0xfb8) = 0x65;
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      *(undefined2 *)(param_1 + 0x1b4) = 0;
      *(undefined4 *)(param_1 + 0x103c) = uVar8;
      *(undefined4 *)(param_1 + 0x100c) = uVar3;
      *(undefined4 *)(param_1 + 0x1044) = uVar9;
      *(undefined4 *)(param_1 + 0x1048) = uVar4;
      *(undefined4 *)(param_1 + 0x1030) = uVar5;
      *(undefined2 *)(param_1 + 0x1d6) = 0x96;
      *(undefined1 *)(*(int *)(param_2 + 0x7f68) + 0x229) = 1;
      iVar14 = DAT_00119228;
      uVar2 = DAT_00119220;
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0xcb;
      iVar17 = 0x14;
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0xbc) = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x28) = uVar9;
      uVar20 = DAT_00119224;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x2c) = uVar2;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x30) = uVar9;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1f8) = uVar10;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0xdc4) = uVar20;
      iVar15 = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x7f64) + 0x214) = uVar2;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x218) = uVar9;
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1d2) = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + iVar14) = uVar18;
      do {
        iVar17 = iVar17 + -1;
        iVar1 = iVar15 * 0xc;
        *(undefined4 *)(*(int *)(param_2 + 0x7f68) + iVar14 + iVar15 * 0xc) = uVar18;
        iVar15 = iVar15 + 2;
        *(undefined4 *)(iVar1 + 0x710 + *(int *)(param_2 + 0x7f68)) = uVar18;
      } while (iVar17 != 0);
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e8) = DAT_0011922c;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e0) = DAT_00119230;
      uVar18 = DAT_00119234;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e4) = uVar9;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 500) = uVar18;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1ec) = DAT_00119238;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1f0) = DAT_0011923c;
      uVar18 = DAT_00119240;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0xdbc) = uVar10;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0xdc0) = uVar18;
      uVar18 = DAT_00119244;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1fc) = uVar6;
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1cc) = 0;
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1ca) = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x200) = uVar10;
      FUN_0037572c(uVar18,*(undefined4 *)(param_2 + 0x7f68));
    }
  }
LAB_00119370:
  if ((int)*(short *)(param_1 + 0xfb8) - 0x65U < 4) {
    if (*(short *)(param_1 + 0x1b2) < 0x285) {
      local_e8 = DAT_00119550;
      local_e4 = DAT_0011954c;
      FUN_0037547c(DAT_00119558,DAT_00119554,4,DAT_00119550);
    }
    if ((int)*(short *)(param_1 + 0x1b2) - 0x15aU < 0x185) {
      local_e8 = DAT_00119550;
      local_e4 = DAT_0011954c;
      FUN_0037547c(DAT_0011955c,DAT_00119554,4,DAT_00119550);
    }
    if (*(short *)(param_1 + 0x1b2) < DAT_00119560) {
      local_e8 = DAT_00119550;
      local_e4 = DAT_0011954c;
      FUN_0037547c(DAT_00119564,DAT_00119554,4,DAT_00119550);
    }
  }
  uVar12 = DAT_00119568;
  if ((DAT_00119568 < *(uint *)(*(int *)(param_2 + 0x7f64) + 0x214)) &&
     (sVar22 = *(short *)(param_2 + 0x53f0) + -1, *(short *)(param_2 + 0x53f0) = sVar22, sVar22 < 0)
     ) {
    *(undefined2 *)(param_2 + 0x53f0) = 0;
  }
  if (uVar12 < *(uint *)(*(int *)(param_2 + 0x7f64) + 0x214)) {
    FUN_00373500(uVar9,uVar10,DAT_00119540,*(int *)(param_2 + 0x7f68) + 0x21c);
  }
  FUN_00373500(uVar9,uVar7,uVar8,param_1 + 0x1e4);
  local_94 = *(undefined4 *)(param_1 + 0x1054);
  local_90 = uVar9;
  local_8c = uVar9;
  FUN_003735e8(*(undefined4 *)(param_1 + 0x105c),auStack_d0,0);
  FUN_003735ac(local_a0,auStack_d0,&local_94);
  *(float *)(param_1 + 0xfc0) = local_a0[0] + *(float *)(param_1 + 0xfcc);
  *(float *)(param_1 + 0xfc8) = local_98 + *(float *)(param_1 + 0xfd4);
  if (*(short *)(param_1 + 0xfba) != 0) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x1030),*(undefined4 *)(param_1 + 0x103c),
                 *(float *)(param_1 + 0x100c) * *(float *)(param_1 + 0x1044),param_1 + 0xfd0);
    FUN_00373500(uVar10,uVar10,*(undefined4 *)(param_1 + 0x1048),param_1 + 0x1044);
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0xfba),local_84,param_1 + 0xfc0);
  }
  return;
}
