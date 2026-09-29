// OoT3D decomp @ 003353dc  name=FUN_003353dc  size=724

undefined4 FUN_003353dc(int param_1,int param_2)

{
  float fVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 local_68;
  float local_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  float local_54;
  float local_50;
  float local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;

  local_38 = param_2 + 0x100;
  uVar8 = 0;
  uVar7 = 0;
  local_3c = DAT_003356b4;
  local_40 = param_2 + 0x5bb4;
  local_44 = param_2 + 0xa98;
  local_48 = (undefined4 *)(param_1 + 0x108);
  fVar1 = DAT_003356b0;
  do {
    psVar6 = (short *)(DAT_003356b8 + uVar7 * 10);
    if (*psVar6 != *(short *)(local_38 + 4)) goto LAB_00335694;
    iVar9 = *(int *)(param_2 + 0x20ac);
    if (*(short *)(local_38 + 4) == 99) {
      uVar16 = FUN_00350cf4(0x18);
      iVar4 = (int)((ulonglong)uVar16 >> 0x20);
      if ((int)uVar16 != 0) {
        if ((*(ushort *)(local_3c + 0x8a) & 0xf) == 6) {
          uVar16 = FUN_00350cf4(0x18);
          iVar4 = (int)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 == 0) goto LAB_0033549c;
        }
        goto LAB_003354e4;
      }
LAB_0033549c:
      uVar3 = (uint)psVar6[1];
      if (uVar3 == 0x358) {
        if (psVar6[2] == 0) {
          iVar4 = psVar6[3] + 0x300;
        }
        if (psVar6[2] == 0 && iVar4 == -0x96) goto LAB_003354e4;
      }
      else {
        bVar10 = uVar3 == 0xfffffc15;
        if (bVar10) {
          uVar3 = (uint)(ushort)psVar6[2];
        }
        bVar11 = bVar10 && uVar3 == 0;
        if (bVar10 && uVar3 == 0) {
          bVar11 = psVar6[3] == -0x2f3;
        }
        if (bVar11) goto LAB_003354e4;
      }
    }
    else {
LAB_003354e4:
      local_54 = (float)VectorSignedToFloat((int)psVar6[1],(byte)(in_fpscr >> 0x15) & 3);
      local_50 = (float)VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
      local_4c = (float)VectorSignedToFloat((int)psVar6[3],(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = local_54 - *(float *)(iVar9 + 0x28);
      fVar12 = local_50 - *(float *)(iVar9 + 0x2c);
      fVar13 = local_4c - *(float *)(iVar9 + 0x30);
      fVar12 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar1) << 0x1d;
      if (SUB41(in_fpscr >> 0x1d,0)) {
        FUN_0033b11c(local_40,&local_54,&uStack_60,&local_64);
        if (DAT_003356bc <= (int)ABS(local_64)) {
          fVar15 = *(float *)(param_2 + 0x1b8) - local_54;
          fVar13 = *(float *)(param_2 + 0x1bc) - local_50;
          fVar14 = *(float *)(param_2 + 0x1c0) - local_4c;
          iVar9 = FUN_0031d150(param_2,param_1,&uStack_60);
          if ((iVar9 == 0) &&
             (DAT_003356c0 <= (int)SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) goto LAB_00335694;
        }
        uVar8 = VectorSignedToFloat((int)psVar6[1],(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar8;
        uVar8 = VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
        uVar8 = VectorSignedToFloat((int)psVar6[3],(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar8;
        local_68 = *(undefined4 *)(param_1 + 0x28);
        uStack_60 = *(undefined4 *)(param_1 + 0x30);
        local_64 = *(float *)(param_1 + 0x2c) + *(float *)(DAT_003356c4 + 0x10);
        uVar8 = FUN_0036e81c(local_44,auStack_58,auStack_5c,param_1,&local_68);
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
        uVar8 = *(undefined4 *)(param_1 + 0x2c);
        uVar5 = *(undefined4 *)(param_1 + 0x30);
        *local_48 = *(undefined4 *)(param_1 + 0x28);
        local_48[1] = uVar8;
        local_48[2] = uVar5;
        *(short *)(param_1 + 0x36) = psVar6[4];
        uVar2 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
        *(undefined2 *)(param_1 + 0xbe) = uVar2;
        uVar8 = 1;
        FUN_0033b11c(local_40,param_1 + 0x28,param_1 + 0xec,param_1 + 0xf8);
        fVar1 = fVar12;
      }
    }
LAB_00335694:
    uVar7 = uVar7 + 1;
    if (0xa8 < uVar7) {
      return uVar8;
    }
  } while( true );
}
