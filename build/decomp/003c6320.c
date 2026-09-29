// OoT3D decomp @ 003c6320  name=FUN_003c6320  size=1524

void FUN_003c6320(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  short local_30;
  short local_2e;

  uVar3 = DAT_003c66f4;
  fVar2 = DAT_003c66ec;
  FUN_0036e168(*(float *)(param_1 + 0xc) + DAT_003c66e8,DAT_003c66f4,DAT_003c66f0,param_1 + 0x2c);
  iVar5 = DAT_003c66f8;
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = DAT_003c66fc;
  if ((*(uint *)(iVar5 + param_2) & 0xf) == 0) {
    fVar9 = (float)FUN_003738a8(DAT_003c66fc);
    *(float *)(param_1 + 0xb6c) = fVar9 + *(float *)(param_1 + 0xb6c);
    fVar9 = (float)FUN_003738a8(uVar4);
    *(float *)(param_1 + 0xb70) = fVar9 + *(float *)(param_1 + 0xb70);
    fVar10 = (float)FUN_003406a8(*(undefined4 *)(param_1 + 0xb6c));
    fVar9 = DAT_003c6700;
    *(float *)(param_1 + 0xb64) = fVar10 * DAT_003c6700;
    fVar10 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0xb70));
    *(float *)(param_1 + 0xb68) = fVar10 * fVar9;
  }
  *(float *)(param_1 + 0xb5c) = *(float *)(param_1 + 0xb5c) - DAT_003c6704;
  *(float *)(param_1 + 0xb58) = *(float *)(param_1 + 0xb58) + *(float *)(param_1 + 0xb64);
  *(float *)(param_1 + 0xb60) = *(float *)(param_1 + 0xb60) + *(float *)(param_1 + 0xb68);
  FUN_003159f8(uVar3,*(undefined4 *)(param_1 + 0x6c),fVar2,fVar2,(undefined4 *)(param_1 + 0xb58),
               param_1 + 0xa50);
  fVar9 = DAT_003c6708;
  iVar5 = 0xc;
  do {
    iVar6 = param_1 + iVar5 * 0xc;
    FUN_0036654c(iVar6 + 0x9c0,iVar6 + 0x9b4,&local_30,0);
    local_54 = *(undefined4 *)(iVar6 + 0x9c0);
    local_44 = *(undefined4 *)(iVar6 + 0x9c4);
    local_34 = *(undefined4 *)(iVar6 + 0x9c8);
    local_58 = 0.0;
    local_5c = 0.0;
    local_60 = 1.0;
    local_50 = 0.0;
    local_4c = 1.0;
    local_48 = 0.0;
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 1.0;
    iVar7 = (int)local_30;
    if (local_2e != 0) {
      fVar10 = (float)VectorSignedToFloat((int)local_2e,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar9;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar2) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar10);
        fVar10 = (float)FUN_00372674(fVar10);
        fVar14 = local_60 * fVar11;
        local_60 = local_60 * fVar10 - local_58 * fVar11;
        local_58 = fVar14 + local_58 * fVar10;
        fVar14 = local_50 * fVar11;
        local_50 = local_50 * fVar10 - local_48 * fVar11;
        local_48 = fVar14 + local_48 * fVar10;
        fVar14 = local_40 * fVar11;
        local_40 = local_40 * fVar10 - local_38 * fVar11;
        local_38 = fVar14 + local_38 * fVar10;
      }
    }
    if (iVar7 != 0) {
      fVar10 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar9;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar2) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar12 = (float)FUN_003727f0(fVar10);
        fVar13 = (float)FUN_00372674(fVar10);
        fVar10 = local_58 * fVar12;
        local_58 = local_58 * fVar13 - local_5c * fVar12;
        fVar11 = local_48 * fVar12;
        local_48 = local_48 * fVar13 - local_4c * fVar12;
        fVar14 = local_38 * fVar12;
        local_38 = local_38 * fVar13 - local_3c * fVar12;
        local_5c = local_5c * fVar13 + fVar10;
        local_4c = local_4c * fVar13 + fVar11;
        local_3c = local_3c * fVar13 + fVar14;
      }
    }
    FUN_003735ac(iVar6 + 0x9b4,&local_60,DAT_003c670c);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  FUN_0036654c(param_1 + 0x28,param_1 + 0x9b4,&local_30,0);
  FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),&local_60,0);
  FUN_00375a18(param_1 + 0xbe,(int)local_2e,3,(int)*(short *)(param_1 + 0xb78),0xb6);
  FUN_00375a18(param_1 + 0xbc,(int)(short)(local_30 + -0x8000),3,(int)*(short *)(param_1 + 0xb78),
               0xb6);
  FUN_0036e88c(&local_60,(int)(short)(*(short *)(param_1 + 0xbc) + -0x8000),
               (int)*(short *)(param_1 + 0xbe),0,1);
  FUN_003735ac(param_1 + 0x9b4,&local_60,DAT_003c670c);
  iVar5 = 0;
  do {
    iVar6 = param_1 + iVar5 * 0xc;
    FUN_0036654c(iVar6 + 0x9b4,iVar6 + 0x9c0,&local_30,0);
    local_54 = *(undefined4 *)(iVar6 + 0x9b4);
    local_44 = *(undefined4 *)(iVar6 + 0x9b8);
    local_34 = *(undefined4 *)(iVar6 + 0x9bc);
    local_60 = 1.0;
    local_50 = 0.0;
    local_4c = 1.0;
    local_58 = 0.0;
    local_5c = 0.0;
    local_48 = 0.0;
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 1.0;
    iVar7 = param_1 + iVar5 * 6;
    FUN_00375a18(iVar7 + 0xb06,(int)local_2e,3,(int)*(short *)(param_1 + 0xb78),0xb6);
    FUN_00375a18(iVar7 + 0xb04,(int)(short)(local_30 + -0x8000),3,(int)*(short *)(param_1 + 0xb78),
                 0xb6);
    iVar8 = (int)(short)(*(short *)(iVar7 + 0xb04) + -0x8000);
    if (*(short *)(iVar7 + 0xb06) != 0) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0xb06),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar9;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar2) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar10);
        fVar10 = (float)FUN_00372674(fVar10);
        fVar14 = local_60 * fVar11;
        local_60 = local_60 * fVar10 - local_58 * fVar11;
        local_58 = fVar14 + local_58 * fVar10;
        fVar14 = local_50 * fVar11;
        local_50 = local_50 * fVar10 - local_48 * fVar11;
        local_48 = fVar14 + local_48 * fVar10;
        fVar14 = local_40 * fVar11;
        local_40 = local_40 * fVar10 - local_38 * fVar11;
        local_38 = fVar14 + local_38 * fVar10;
      }
    }
    if (iVar8 != 0) {
      fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar9;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar2) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar12 = (float)FUN_003727f0(fVar10);
        fVar13 = (float)FUN_00372674(fVar10);
        fVar10 = local_58 * fVar12;
        local_58 = local_58 * fVar13 - local_5c * fVar12;
        fVar11 = local_48 * fVar12;
        local_48 = local_48 * fVar13 - local_4c * fVar12;
        fVar14 = local_38 * fVar12;
        local_38 = local_38 * fVar13 - local_3c * fVar12;
        local_5c = local_5c * fVar13 + fVar10;
        local_4c = local_4c * fVar13 + fVar11;
        local_3c = local_3c * fVar13 + fVar14;
      }
    }
    FUN_003735ac(iVar6 + 0x9c0,&local_60,DAT_003c670c);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd);
  *(undefined2 *)(param_1 + 0xb52) = *(undefined2 *)(param_1 + 0xb4c);
  *(undefined2 *)(param_1 + 0xb54) = *(undefined2 *)(param_1 + 0xb4e);
  sVar1 = *(short *)(param_1 + 0xb74) + -1;
  *(short *)(param_1 + 0xb74) = sVar1;
  uVar3 = DAT_003c693c;
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9a8) = 4;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined2 *)(param_1 + 0xb78) = 1000;
    *(undefined4 *)(param_1 + 0x9ac) = DAT_003c6940;
  }
  return;
}
