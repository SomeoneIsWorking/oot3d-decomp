// OoT3D decomp @ 002afb08  name=FUN_002afb08  size=620

void FUN_002afb08(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  undefined1 uVar8;
  float fVar9;
  undefined4 uVar10;
  float extraout_s1;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_800bc [524236];
  undefined1 *local_f0;
  float *local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  float local_54;
  float local_50;
  float local_4c;
  undefined1 auStack_48 [12];
  undefined4 local_3c;

  local_3c = 0;
  FUN_00368cc0(param_1,param_3,auStack_48,&local_4c);
  local_74 = DAT_002afde8;
  fVar15 = extraout_s1;
  if (DAT_002afd74 <= (int)local_4c) {
    fVar15 = DAT_002afd7c;
  }
  fVar9 = local_4c;
  if (DAT_002afd74 <= (int)local_4c) {
    fVar9 = local_4c * fVar15;
  }
  iVar1 = 0xf - *(short *)(param_3 + 0x18);
  fVar15 = DAT_002afd78;
  if (DAT_002afd74 <= (int)local_4c) {
    fVar15 = fVar9 * DAT_002afd78;
  }
  fVar9 = (float)VectorSignedToFloat(iVar1 % 4,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2,
                                      (byte)(in_fpscr >> 0x15) & 3);
  local_54 = fVar9 * DAT_002afd80;
  local_50 = fVar11 * DAT_002afd84;
  local_bc = DAT_002afd88;
  uStack_b8 = DAT_002afd8c;
  uStack_b4 = DAT_002afd90;
  uStack_b0 = DAT_002afd94;
  uStack_ac = DAT_002afd98;
  uStack_a8 = DAT_002afd9c;
  uStack_a4 = DAT_002afda0;
  uStack_a0 = DAT_002afda4;
  uStack_9c = DAT_002afda8;
  uStack_98 = DAT_002afdac;
  uStack_94 = DAT_002afdb0;
  uStack_90 = DAT_002afdb4;
  local_ec = DAT_002afdb8;
  uStack_e8 = DAT_002afdbc;
  local_e4 = DAT_002afdc0;
  local_e0 = DAT_002afdc4;
  uStack_dc = DAT_002afdc8;
  uStack_d8 = DAT_002afdcc;
  uStack_d4 = DAT_002afdd0;
  uStack_d0 = DAT_002afdd4;
  uStack_cc = DAT_002afdd8;
  uStack_c8 = DAT_002afddc;
  uStack_c4 = DAT_002afde0;
  uStack_c0 = DAT_002afde4;
  iVar6 = 0;
  iVar4 = (int)*(short *)((int)param_3 + 0x46);
  iVar7 = 0xf - *(short *)(param_3 + 0x18);
  iVar1 = iVar4 * 0x10;
  do {
    if (iVar7 == 0) {
      uVar8 = *(undefined1 *)((int)&local_bc + iVar6 + iVar4 * 0x10);
    }
    else {
      if ((int)(uint)*(byte *)((int)&uStack_e8 + iVar1 + iVar6) < iVar7) {
        if ((int)(uint)*(byte *)((int)&local_e4 + iVar1 + iVar6) < iVar7) {
          if ((int)(uint)*(byte *)((int)&local_e0 + iVar1 + iVar6) < iVar7) {
            iVar2 = 4;
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 1;
      }
      iVar2 = iVar4 * 4 + iVar2;
      iVar5 = iVar2 * 4 + -4 + iVar6;
      iVar2 = iVar6 + iVar2 * 4;
      uVar3 = (uint)*(byte *)((int)&local_f0 + iVar5 + 4);
      uVar13 = VectorSignedToFloat(iVar7 - uVar3,(byte)(in_fpscr >> 0x15) & 3);
      uVar14 = VectorSignedToFloat(*(byte *)((int)&local_ec + iVar2) - uVar3,
                                   (byte)(in_fpscr >> 0x15) & 3);
      uVar12 = VectorUnsignedToFloat
                         ((uint)*(byte *)((int)&local_bc + iVar2),(byte)(in_fpscr >> 0x15) & 3);
      uVar10 = VectorUnsignedToFloat
                         ((uint)*(byte *)((int)&uStack_c0 + iVar5 + 4),(byte)(in_fpscr >> 0x15) & 3)
      ;
      uVar10 = FUN_0032d56c(uVar10,local_74,uVar12,local_74,uVar13,uVar14);
      uVar10 = VectorFloatToUnsigned(uVar10,3);
      uVar8 = (undefined1)uVar10;
    }
    *(undefined1 *)((int)&local_3c + iVar6) = uVar8;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  local_ec = (float *)(local_3c >> 0x18);
  uStack_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_f0 = (undefined1 *)(local_3c >> 0x10 & 0xff);
  FUN_00332fc0(param_1,auStack_64,local_3c & 0xff,local_3c._1_1_);
  local_70 = local_74;
  local_6c = local_74;
  local_68 = local_74;
  FUN_003429c8(param_3[0x19],1,&local_74);
  local_80 = *param_3;
  local_7c = param_3[1];
  local_78 = param_3[2];
  local_8c = fVar15 * DAT_002afdec;
  local_ec = &local_54;
  if (*(short *)((int)param_3 + 0x46) == 2) {
    local_8c = local_8c * DAT_002afdf0;
  }
  local_f0 = auStack_64;
  local_88 = local_8c;
  local_84 = local_8c;
  FUN_00371f1c(param_3[0x19],&local_80,0,&local_8c);
  return;
}
